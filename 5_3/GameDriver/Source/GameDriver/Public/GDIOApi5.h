// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once

#include "InputCoreTypes.h"
#include "GDIOApiLibrary.h"
#include "GDIOApi5.generated.h"

UENUM()
enum class GDIO_HPATH_TYPES : uint8 {
	Absolute,	
	Relative
};

UENUM()
enum class CoordinateConversionTypes : uint8
{
	None = 0,
	Local = 1,
	WorldToScreenPoint = 2,
	ScreenToWorldPoint = 4,
	ScreenToViewportPoint = 5
};

UCLASS()
class UBP_GDIOAPI : public UObject {
	GENERATED_BODY()
public:

	/// <summary>
	/// This method returns a TArray of all Unreal UObject matching the passed in HPath.
	/// </summary>
	/// <param name="hierarchyPath">The Hpath to use for the query</param>
	/// <returns> a TArray of UObject* matching the query.</returns>
	/// <blueprint><img src="GetObjectList.png"></img></blueprint>
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static TArray<UObject*> GetObjectList(FString hierarchyPath) {
		return UGDIOApi::GetObjectList(hierarchyPath);
	};

	/// <summary>
	/// Get the Object Reference matching the provided HierarchyPath argument, or NULL
	/// </summary>
	/// <param name="hierarchyPath"> The timeout in seconds to wait for a response that the request was processed by the GameDriver agent.</param>
	/// <param name="timeout"> The timeout in seconds to wait for a response that the request was processed by the GameDriver agent.</param>
	/// <returns> The matching UObject, if it exists.</returns>
	/// <blueprint><img src="GetGameObject.png"></img></blueprint>
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static UObject* GetGameObject(FString hierarchyPath) {
		return UGDIOApi::GetGameObject(hierarchyPath);
	};
	/// <summary>
	/// Return the position of a specific object.The position returned is in worldspace coordinates for an actor or a component and screenspace coordinates for widgets.
	/// </summary>
	/// <param name="HPath">The HierarchyPath of the object to return the position of.</param>
	/// <param name="coordinateSpace">The coorindate space conversion to perform on the position before returning it. See <see cref="gdio.common.objects.CoordinateConversion"/> for more information.</param>
	/// <param name="valid">out param set to true if the HPath resolves and the call is possible.</param>
	/// <returns> The Vector3 position of the specific object.</returns>
	/// <blueprint><img src="GetObjectPositionWithHPath.png"></img></blueprint>
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static FVector GetObjectPositionWithHPath(FString HPath, CoordinateConversionTypes coordinateSpace, bool& valid){
		bool v;
		FVector temp =  UGDIOApi::GetObjectPosition(HPath, (CoordinateConversion) coordinateSpace,v );
		valid = v;
		return temp;
	};
	/// <summary>
	/// Return the position of a specific object.The position returned is in worldspace coordinates for an actor or a component and screenspace coordinates for widgets.
	/// </summary>
	/// <param name="HPath">The HierarchyPath of the object to return the position of.</param>
	/// <param name="coordinateSpace">The coorindate space conversion to perform on the position before returning it. See <see cref="gdio.common.objects.CoordinateConversion"/> for more information.</param>
	/// <param name="valid">out param set to true if the HPath resolves and the call is possible.</param>
	/// <returns> The Vector3 position of the specific object.</returns>
	/// <blueprint><img src="GetObjectPosition.png"></img></blueprint>
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static FVector GetObjectPosition(UObject * obj, CoordinateConversionTypes coordinateSpace, bool& valid) {
		bool v;
		FVector temp = UGDIOApi::GetObjectPosition(obj, (CoordinateConversion)coordinateSpace, v);
		valid = v;
		return temp;
	};

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool GetIntFieldValue(FString hierarchyPath, FString field, int& value) {
		return UGDIOApi::GetObjectFieldValue<int>(hierarchyPath,field,value);
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool GetStringFieldValue(FString hierarchyPath, FString field, FString& value) {
		String s;
		bool retMe = UGDIOApi::GetObjectFieldValue<String>(hierarchyPath, field, s);
		value = FString(s.c_str());
		return retMe;
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool GetBoolFieldValue(FString hierarchyPath, FString field, bool& value) {
		return UGDIOApi::GetObjectFieldValue<bool>(hierarchyPath, field, value);
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool GetDoubleFieldValue(FString hierarchyPath, FString field, double& value) {
		return UGDIOApi::GetObjectFieldValue<double>(hierarchyPath, field, value);
	};

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool SetIntFieldValue(FString hierarchyPath, FString field, int value) {
		return UGDIOApi::SetObjectFieldValue<int>(hierarchyPath, field, value);
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool SetStringFieldValue(FString hierarchyPath, FString field, FString value) {
		String s = String(*value);
		return UGDIOApi::SetObjectFieldValue<String>(hierarchyPath, field, s);
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool SetFloatFieldValue(FString hierarchyPath, FString field, double value) {//really a double (in5+
		return UGDIOApi::SetObjectFieldValue<double>(hierarchyPath, field, value);
	};
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool SetBoolFieldValue(FString hierarchyPath, FString field, bool value) {//really a double (in5+
		return UGDIOApi::SetObjectFieldValue<bool>(hierarchyPath, field, value);
	};
	/// 
	/// <summary>
	/// Use this function to send arbitrary button states to the game. 
	/// </summary>
	/// <param name="key">FKey indicating which key</param>
	/// <param name="numberOfFrames">The number of frames to press and hold the keys for.</param>
	/// <returns> TRUE if the GameDriver agent successfully processed the request.</returns>
	/// <blueprint><img src="KeyPress.png"></img></blueprint>
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool KeyPress(TArray<FKey> keys, int numberOfFrames)
	{
		return UGDIOApi::KeyPress(keys, numberOfFrames);
	};
	/// <summary>
	/// Use this function to perform in-game mouse-clicks.
	/// </summary>        
	/// <param name="MouseButton"> The mouse button to use for the click operation.</param>            
	/// <param name="location"> The <see cref="Vector2"/> position to perform the mouse click.</param>
	/// <param name="frameCount"> The number of frames to click the specific position.</param>
	/// <returns> TRUE if the click was able to be simulated</returns>
	/// <blueprint><img src="Click.png"></img></blueprint>
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool Click(FKey mouseButton, FVector2D loc, int frameCount = 30)
	{
		return UGDIOApi::Click(mouseButton, loc, frameCount);
	}
	
	/// <summary>
	/// Use this function to interact with an in-game object using mouse-clicks.
	/// </summary>        
	/// <param name="mouseButton"> The fKey for the mouse button to use for the click operation.</param>               
	/// <param name="HPath"> The HierarchyPath for the GameObject to perform a click on.</param>
	/// <param name="frameCount"> The number of frames to click the specific object.</param>
	/// <returns> TRUE if the HPath resolved and the click was able to be simulated</returns>
	/// <blueprint><img src="ClickObjectFromHPath.png"></img></blueprint>
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool ClickObjectFromHPath(FKey mouseButton, FString HPath, int frameCount = 30) {
		return UGDIOApi::ClickObject(mouseButton, HPath, frameCount);
	}
	/// <summary>
	/// Use this function to interact with an in-game object using mouse-clicks.
	/// </summary>        
	/// <param name="mouseButton"> The fKey for the mouse button to use for the click operation.</param>               
	/// <param name="object"> A ref to the object to perform a click on </param>
	/// <param name="frameCount"> The number of frames to click the specific object.</param>
	/// <returns> TRUE if the click was able to be simulated</returns>
	/// <blueprint><img src="ClickObject.png"></img></blueprint>
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool ClickObject(FKey mouseButton, UObject* obj, int frameCount = 30) {
		return UGDIOApi::ClickObject(mouseButton, obj, frameCount);
	}
	/// <summary>
	/// Use this function to get the HierarchyPath of any vaid UObject.
	/// </summary>
	/// <param name="obj">The Object you want the HPath of</param>
	/// <param name="type">"Absolute" or "Relative"</param>
	/// <returns>The HierarchyPath of the Object as an FString</returns>
   /// <blueprint><img src="getHierarchyPath.png"></img></blueprint>
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static FString getHierarchyPath(UObject* obj, GDIO_HPATH_TYPES type)
	{
		if (type == GDIO_HPATH_TYPES::Absolute)
			return UGDIOApi::getHierarchyPath(obj, "Absolute");
		else {
			return UGDIOApi::getHierarchyPath(obj, "Relative");
		}
	}
	/// <summary>
	/// Move the mouse to the destination vector.
	/// </summary>
	/// <param name="destination">Destination vector to move the mouse to.</param>
	/// <param name="frameCount">The number of frames to complete the operaiton over.</param>
	/// <param name="origin">The origin to start the mouse move operation.  If null, the mouse move operation will begin at the current position of Input.mousePosition.</param>
	/// <returns> TRUE if the method call was successfully processed by the GameDriver agent.</returns>
	/// <blueprint><img src="MouseMovetoPoint.png"></img></blueprint>
	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool MouseMovetoPoint(FVector2D destination, int frameCount, FVector2D origin) {
		FVector2D dest =  FVector2D(destination.X, destination.Y);
		FVector2D o =  FVector2D(origin.X, origin.Y);
		return UGDIOApi::MouseMovetoPoint(dest,  frameCount,o);
	}
	/// <summary>
	/// Move the mouse to the center of a specific object.
	/// </summary>
	/// <param name="obj">The obj to move the mouse pointer to.</param>
	/// <param name="frameCount">The number of frames to complete the mouse move over.</param>
	/// <returns> TRUE if the method call was successfully processed by the GameDriver agent.</returns>
	/// <blueprint><img src="MouseMovetoObject.png"></img></blueprint>

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool MouseMovetoObject(UObject* obj, int frameCount = 30) {
		return UGDIOApi::MouseMovetoObject(obj, frameCount);
	}
	/// <summary>
	/// Move the mouse to the center of a specific object, identified by the HPath.
	/// </summary>
	/// <param name="HPath">The HierarchyPath to move the mouse pointer to.</param>
	/// <param name="frameCount">The number of frames to compelte the mouse move over.</param>
	/// <returns> TRUE if the HPath is valid</returns>
	/// <blueprint><img src="MouseMovetoObjectFromHPath.png"></img></blueprint>

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool MouseMovetoObjectFromHPath(FString HPath, int frameCount=30) {
		return UGDIOApi::MouseMovetoObject(HPath, frameCount);
	}
	/// <summary>
	/// Perform a mouse drag operation.
	/// </summary>
	/// <param name="button">The mouse button as an FKey</param>
	/// <param name="destination">The destination vector to drag the mouse to.</param>
	/// <param name="frameCount">The number of frames taken to complete the drag operation.</param>
	/// <param name="origin">The origin to start the drag operation.  If null, the mouse drag operation will begin at the current position of Input.mousePosition.</param>
	/// <param name="waitForEmptyInput">Wait for the empty input event to be returned from the agent before returning from the method call.</param>
	/// <returns> TRUE if the requests was successfully processed by the GameDriver agent.</returns>
	/// <blueprint><img src="MouseDrag.png"></img></blueprint>

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool MouseDrag(FKey MouseButton, FVector2D destination, int frameCount, FVector2D origin)
	{
		FVector2D dest = FVector2D(destination.X, destination.Y);
		FVector2D o = FVector2D(origin.X, origin.Y);
		return UGDIOApi::MouseDrag(MouseButton,dest, frameCount,o);
	}
	/// <summary>
	/// Use this function to simulate a KeyAxis float input (axis). Pass 0 to stop sending the event.
	/// </summary>
	/// 
	///
	/// <param name="key"> The FKey that you want to iput a value for</param>    
	/// <param name="key"> The Value you want to inject</param>
	/// <blueprint><img src="FloatInputEvent.png"></img></blueprint>

	UFUNCTION(BlueprintCallable,Category="GameDriver")
	static bool FloatInputEvent(FKey key, double value)
	{
		return UGDIOApi::FloatInputEvent(key, value);
	}
};
