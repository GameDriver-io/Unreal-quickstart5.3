## v2.0 
- Rebuilt Plugins in C++
- Improvements to recorder and editor tools
- Support for Windows/Mac/Android/iOS 
- Added support for 5.3

## Concept

1. Gamedriver works by placing an small plugin in your game. That plugin communucates with our api, which you use to drive your game remotely.
2. Setting up the plugin requires moving a  folders into your project and downloading the license to the correct location.
3. Once the plugin is installed you integrate our api into your testing frameowrk and start using it. 

## What you do next. 

1. Create an empty "unrealPlugin" folder inside the "Plugins" directory of your project.
2. Grab the GameDriver folder from inside the folder corresponding to your unreal engine version (4_27, 5_1, ETC) and copy it in the unrealPlugin folder you just Created.
3. Place a valid license (gdio.license.txt) in a folder named "GameDriver" inside the "Content" folder of your project.
4. Optionally, copy the provided sample.gdio.unreal_agent.config.txt to the same folder as above. Rename to gdio.unreal_agent.config.txt
5. Open the project and click run to see the GDIO panel displaying. 
6. Now you're ready to write external tests! You can connect to the running agent from your own test project using Gamedriver's unreal_api (in the zip) 

## Common issues

1. In order to simulate mouse clicks in the editor you will need to unset the "High DPI Support" flag in the editor preferences
![Screenshot of the editor preference window, to illustrate how to disable "High DPI Support" ](./img/EditorPreferences.png)
2. You may want to build clean for your project. Doing so will delete the precompiled binaries for the plugin. To recitify this recopy the "Binary" and " Intermediate" from the zip into your project's Plugin folder after making clean (or recopy the entire Plugin folder - if you prefer) 
3. to deploy on Mobile you'll need to add the GameDriver folder inside of Content to the list of "Additional non-Asset directories to Package".

## Summary

Your final Project will look like the following:

```dirtree
SomeProjectPath/
└─ Plugins/
   └─ unrealPlugin		
	└─GameDriver				<----- Place the GameDriver folder here 
└─ Content
   └─ GameDriver
	└─ gdio.license				<----- Place your license here
	└─ gdio.unreal_agent.config.txt		<----- Place your optional config file here (control port, location of gui overlay)
└─ MyProject.uproject	
└─ MyProject.sln	
```
