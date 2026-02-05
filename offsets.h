#pragma once
#include <cstdint>

// Current Patch: v39.40 

namespace offsets {
    // -- Global / Engine --
    inline uintptr_t UWorld = 0x17A2C5D8;            // Updated for v39.40
    inline uintptr_t GNames = 0x18C4E080;            // Updated for v39.40
    inline uintptr_t GObjects = 0x179F4FB0;          // Updated for v39.40
    
    // -- World & GameState --
    inline uintptr_t OwningGameInstance = 0x240;
    inline uintptr_t GameState = 0x1D0;              // Shifted from 0x1C8
    inline uintptr_t PlayerArray = 0x2D0;            // Shifted from 0x2C8
    inline uintptr_t ServerWorldTimeSecondsDelta = 0x2E8; 
    inline uintptr_t GameInstance = 0x240;

    // -- Actor & Component --
    inline uintptr_t RootComponent = 0x1B0;
    inline uintptr_t HabaneroComponent = 0x9D8;      // Updated for new vehicle physics
    inline uintptr_t TargetedFortPawn = 0x1830; 

    // -- Player State & Info --
    inline uintptr_t PlayerState = 0x2D8;            // Pawn -> PlayerState
    inline uintptr_t PawnPrivate = 0x328;            // PlayerState -> PawnPrivate
    inline uintptr_t PlayerName = 0xAF8;             // Updated: PlayerState -> PlayerName
    inline uintptr_t Platform = 0x440;               // PlayerState -> Platform
    inline uintptr_t TeamIndex = 0x1220;             // Updated: PlayerState -> TeamIndex
    inline uintptr_t TeamId = 0x1220;                // Same as TeamIndex

    // -- Local Player --
    inline uintptr_t LocalPlayers = 0x38;            // GameInstance -> LocalPlayers
    inline uintptr_t PlayerController = 0x30;        // LocalPlayer -> PlayerController
    inline uintptr_t AcknowledgedPawn = 0x358;       // PlayerController -> AcknowledgedPawn

    // -- Pawn & Mesh --
    inline uintptr_t Mesh = 0x330;                   // Character -> Mesh
    inline uintptr_t BoneArray = 0x5F0;              // SkinnedMesh -> BoneArray
    inline uintptr_t ComponentToWorld = 0x1E0;
    inline uintptr_t bIsDying = 0x728;

    // -- Visibility & Rendering --
    inline uintptr_t bRecentlyRendered = 0x7C8;      // SkinnedMesh -> bRecentlyRendered
    inline uintptr_t LastRenderTime = 0x328;

    // -- Weapons & Items --
    inline uintptr_t CurrentWeapon = 0x9A0;          // Pawn -> CurrentWeapon
    inline uintptr_t WeaponData = 0x608;             // Weapon -> WeaponData
    inline uintptr_t ItemName = 0x2B8;               // BuildingSMActor -> ItemName
    inline uintptr_t Tier = 0xAA;                   // ItemData -> Tier

    // -- Camera & Aimbot --
    inline uintptr_t CameraLocation = 0x170;         // CameraManager -> Location
    inline uintptr_t CameraRotation = 0x180;         // CameraManager -> Rotation
    inline uintptr_t CameraFOV = 0x3B4;              // CameraManager -> FOV
    inline uintptr_t ControlRotation = 0x380;        // PlayerController -> ControlRotation
    inline uintptr_t PlayerAim = 0x2BD0;             // Pawn -> PlayerAim
}
