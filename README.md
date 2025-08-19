# CCPT_TerrainGenerator
 Overview

This is my Dissertation project:

 
This project demonstrates a scalable, real-time procedural terrain generation system built in Unreal Engine 5, leveraging both Blueprints and C++.


It showcases techniques widely used in open-world games (e.g., Minecraft, No Man’s Sky, Valheim) while focusing on:

. Fractal noise–based heightmaps (Perlin & Simplex)

. Chunk-based terrain streaming for infinite worlds.

. C++ multithreading for performance optimization.

. Distance-based tile prioritization to improve player experience.



Features:

. Noise-driven landscapes – Perlin & Simplex noise used for fractal terrain heightmaps.

. Chunk-based world streaming – Infinite runtime terrain with memory-efficient chunk loading/unloading.

. generation – Async workers generate mesh data off the game thread for smoother performance.

. Camera-based tile prioritization – Terrain near the player loads first to reduce visual "popping".

. Blueprint → C++ migration roadmap – Clear workflow showing where and why C++ is necessary.


 

Prerequisites:

. Unreal Engine 5 (5.2 or higher recommended)

. Visual Studio 2022 with UE5 development components



Installation:


. Clone this repository

. Open the project .uproject file " CCTP_Project.sln  " in visual studios.

. Build C++ source files in Visual Studio.

. Run the project and Unreal engine editor will appear.

. Before playing, compile C++ on unreal engine 5. 

. Press Play to explore the procedural world!


How to Experiment:

. Change noise functions: In TerrainGenerator.cpp, swap Perlin with Simplex (or stack multiple noises) to alter terrain style.

. Adjust chunk size: Modify ChunkSize constant to balance detail vs. performance.

. Add multithreading: See AsyncTerrainWorker.cpp for how mesh data is offloaded to background threads.

. Prioritize tiles: The camera-distance sorting logic can be tweaked to alter how aggressively terrain loads near the player.
