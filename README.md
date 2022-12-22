# Unreal-quickstart

## Concept

1. Gamedriver works by placing an small plugin in your game. That plugin communucates with our api, which you use to drive your game remotely.
2. Setting up the plugin requires moving two folders into their correct locations in your project and downloading the license to the correct location.
3. Once running, you will need to grab the api from our website, and connect to the game using it. 

## What is in this repository

This repository contains a folder called "Managed" filled with dll files. It also contains a folder called "Plugin" containing a binary plugin. 

- Managed
- Plugin

## What you do next. 

1. Copy the entire "Managed" folder to the root of your Project. (If you already have a "Managed" folder, copy the contents to the inside of it.)
2. Copy the UnrealCLR folder inside the "Plugins" Directory to the "Plugins" folder in your project. (If it does not exist, create it).  
3. Place a valid license (gdio.license.txt) in the "Plugins" folder of your project.
4. Open the project and click run to see the GDIO panel displaying. (you can hide it if you want in configuration files)
5. Now you're ready to write external tests! You can connect to the running agent from your own test project using Gamedriver's unreal_api.

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

# Note: This product is currently in Beta. 