# Unreal-quickstart

## What you have

The buildtool (or a zip) creates Two folders you need to copy into your project. If you do not have these folder, please refer to the build tool. 

- Managed
- Plugin

## What you do next. 

1. Copy the Entire "Managed" folder to the root of your Project.
2. Copy the UnrealCLR folder inside the "Plugins" Directory to the "Plugins" folder in your project. (If it does not exist, create it).  
3. Place a valid license (gdio.license.txt) in the "Plugins" folder of your project.
4. Recompile your project.
5. Start using the API!

## Summary

Your final Project will look like the following:

```dirtree
SomeProjectPath/
└─ Plugins/
   └─ UnrealCLR		<----- You should see the UnrealCLR folder here
   └─ gdio.license	<----- Place your license here
└─ Managed/
   └─ GameDriver	<----- You should see a GameDriver folder here 
└─ MyProject.uproject	
└─ MyProject.sln	
```