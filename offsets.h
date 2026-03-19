#pragma once
#include <cstdint>

// Current Patch: v40.00 - (Updated)
namespace offsets {
    // world
    inline uintptr_t UWorld = 0x193717F0;
    inline uintptr_t OwningGameInstance = 0x238;
    inline uintptr_t GameState = 0x1c0;
    inline uintptr_t PlayerArray = 0x2C8;
    inline uintptr_t ServerWorldTimeSecondsDelta = 0x2E8; 
    inline uintptr_t TargetedFortPawn = 0x1810; 
    inline uintptr_t GameInstance = 0x238;
    inline uintptr_t HabaneroRankedProgress = 0xD8; // Matches RankedProgress
    inline uintptr_t HabaneroComponent = 0x948;
    inline uintptr_t RootComponent = 0x1B0;
    inline uintptr_t Spectators = 0XAB0; // Updated from specs  
    inline uintptr_t SpectatorArray = 0x108; // Updated from specarray 
    inline uintptr_t KillScore = 0x11C8;
    inline uintptr_t Reboots = 0x1894; // Updated from RebootCount
    inline uintptr_t CurrentVehicle = 0x2CF0;
    inline uintptr_t VehicleActive = 0x813;
    inline uintptr_t VehicleGravity = 0x8A;
    inline uintptr_t RelativeLocation = 0x140;
    inline uintptr_t RotationInput = 0x428;
    inline uintptr_t AdditionalAimOffset = 0x2B80;

    inline uintptr_t PlayerName = 0xA08;
    inline uintptr_t Platform = 0x440;
    inline uintptr_t CurrentWeapon = 0x990;
    inline uintptr_t WeaponData = 0x638;
    inline uintptr_t ItemName = 0x40;
    inline uintptr_t Tier = 0xAA; // Matches ItemRarity

    // local player
    inline uintptr_t LocalPlayers = 0x38;
    inline uintptr_t PlayerController = 0x30;
    inline uintptr_t AcknowledgedPawn = 0x358;
    inline uintptr_t TeamId = 0x11C1; // Updated from TeamIndex

    // player state
    inline uintptr_t PawnPrivate = 0x328;
    inline uintptr_t PlayerState = 0x2B8;
    inline uintptr_t TeamIndex = 0x11C1;

    // pawn/mesh
    inline uintptr_t Mesh = 0x330;
    inline uintptr_t BoneArray = 0x628;
    inline uintptr_t ComponentToWorld = 0x1E0;
    inline uintptr_t bIsDying = 0x728;

    // visibility (Found in USkinnedMeshComponent)
    inline uintptr_t bRecentlyRendered = 0x7C8;
    inline uintptr_t LastRenderTime = 0x330;

    // camera
    inline uintptr_t CameraLocation = 0x170;
    inline uintptr_t CameraRotation = 0x180;
    inline uintptr_t CameraFOV = 0x3B4;

    // aimbot
    inline uintptr_t ControlRotation = 0x328;
    inline uintptr_t PlayerAim = 0x29F0; // Updated from PlayerAimOffset

    // rarity
    inline uintptr_t Rarity = 0xAA;
    inline uintptr_t LastFireLocation = 0x5ba0;
    inline uintptr_t LastFireDirection = 0x5bb8;
    inline uintptr_t ProjectedImpactDistance = 0x1378; 

    inline uintptr_t FOVMinimum = 0x2ae8;
    inline uintptr_t FOVMaximum = 0x2aec;

    // UWorld Decryption Function
    inline uint64_t DecryptUworld(uint64_t v)
    {
        // Updated with UWorldXorKey: 0x97F199673D1F48C6 and RotationCount: 32
        return ~_rotl64(v ^ 0x97F199673D1F48C6uLL, 32);
    }
}


}
