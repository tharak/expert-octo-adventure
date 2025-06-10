# Jungle Stealth Hunt

A third-person stealth hunting game built with Unreal Engine 5.

## Game Overview

- **Genre:** Third-person stealth hunting
- **Premise:** Players hunt animals in a procedurally generated jungle using stealth mechanics. Animal drops are used for crafting, and maps are generated from player-input seeds.

## Project Structure

- `Source/`: C++ source code  
  - `Characters/`: Player and animal classes  
  - `AI/`: Animal AI controllers and perception logic  
  - `Procedural/`: Procedural jungle generation and seed management  
  - `Items/`: Item, loot, and crafting system code  
  - `UI/`: Inventory and seed input widgets  
  - `Game/`: Core game mode, game instance, and save system  

- `Content/`: Unreal Engine assets and blueprints  
  - `Blueprints/`: Player, animal, AI, items, crafting, and game modes  
  - `Materials/`: Materials and shaders  
  - `Maps/`: Level and map files  
  - `UI/`: UI assets  
  - `Procedural/`: Procedural asset blueprints  

## Getting Started

1. Clone the repo.
2. Open the `.uproject` file in Unreal Engine 5.
3. Add your assets and code to the relevant folders.

---

> **Note:** This base repo is set up for collaborative Unreal Engine development. Always use source control best practices and avoid committing generated or build files.