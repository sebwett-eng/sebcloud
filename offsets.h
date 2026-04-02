#pragma once
#include <cstdint>
#include <algorithm>

namespace offsets {
    // world
    inline uintptr_t UWorld = 0x1895DE60; // Updated
    inline uintptr_t OwningGameInstance = 0x250; 
    inline uintptr_t GameState = 0x1d8; 
    inline uintptr_t PlayerArray = 0x2C8; 
    inline uintptr_t ServerWorldTimeSecondsDelta = 0x2E8; // Updated
    inline uintptr_t TargetedFortPawn = 0x1840; // Updated
    inline uintptr_t GameInstance = 0x250; 
    inline uintptr_t HabaneroRankedProgress = 0xD8; 
    inline uintptr_t HabaneroComponent = 0x948; 
    inline uintptr_t RootComponent = 0x1B0; 
    inline uintptr_t Spectators = 0XAB0;  
    inline uintptr_t SpectatorArray = 0x108; // Updated
    inline uintptr_t KillScore = 0x11D8; // Updated
    inline uintptr_t Reboots = 0x1894; 
    inline uintptr_t CurrentVehicle = 0x2d10; // Updated
    inline uintptr_t RelativeLocation = 0x140; // Updated
    inline uintptr_t AdditionalAimOffset = 0x2B80; // Updated

    inline uintptr_t PlayerName = 0xA08; 
    inline uintptr_t Platform = 0x440; 
    inline uintptr_t CurrentWeapon = 0x990; 
    inline uintptr_t WeaponData = 0x638; 
    inline uintptr_t ItemName = 0x40; 
    inline uintptr_t Tier = 0xAA; // Updated (Matches ItemRarity)

    // local player
    inline uintptr_t LocalPlayers = 0x38; 
    inline uintptr_t PlayerController = 0x30; 
    inline uintptr_t AcknowledgedPawn = 0x358; 
    inline uintptr_t TeamId = 0x11C1; 

    // player state
    inline uintptr_t PawnPrivate = 0x328; 
    inline uintptr_t PlayerState = 0x2B8; 
    inline uintptr_t TeamIndex = 0x11C1; 

    // pawn/mesh
    inline uintptr_t Mesh = 0x330; 
    inline uintptr_t BoneArray = 0x628; 
    inline uintptr_t ComponentToWorld = 0x1E0; 
    inline uintptr_t bIsDying = 0x728; 

    // visibility
    inline uintptr_t LastRenderTime = 0x330; 

    // camera
    inline uintptr_t CameraLocation = 0x180; 
    inline uintptr_t CameraRotation = 0x190; 
    inline uintptr_t CameraFOV = 0x3B4; 

    // aimbot
    inline uintptr_t PlayerAim = 0x29F0; 

    // rarity
    inline uintptr_t Rarity = 0xAA; // Updated

    inline uint64_t DecryptUworld(uint64_t world)
    {
        if (!world) return 0;
        return ~_rotl64(world ^ 0xCF76574CULL, 48); // Updated
    }
}
