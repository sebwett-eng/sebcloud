#pragma once
#include <cstdint>
#include <algorithm>

// Current Patch: v40.00 
namespace offsets {
    // world
    inline uintptr_t UWorld = 0x19401C60; // Updated
    inline uintptr_t OwningGameInstance = 0x250; // Updated (matches GameInstance)
    inline uintptr_t GameState = 0x1D8; // Updated
    inline uintptr_t PlayerArray = 0x2C8; // Updated
    inline uintptr_t ServerWorldTimeSecondsDelta = 0x190; // Updated from WORLD_TIME_SECONDS
    inline uintptr_t TargetedFortPawn = 0x18F8; // Updated
    inline uintptr_t GameInstance = 0x250; // Updated
    inline uintptr_t HabaneroRankedProgress = 0xD8; // Confirmed (Matches RANKED_PROGRESS)
    inline uintptr_t HabaneroComponent = 0x948; // Confirmed
    inline uintptr_t RootComponent = 0x1B0; // Confirmed
    inline uintptr_t Spectators = 0XAB0; 
    inline uintptr_t SpectatorArray = 0x21a0; 
    inline uintptr_t KillScore = 0x11C0; // Updated
    inline uintptr_t Reboots = 0x1894; // Updated
    inline uintptr_t CurrentVehicle = 0x2C68; // Updated
    inline uintptr_t VehicleActive = 0x813;
    inline uintptr_t VehicleGravity = 0x8A;
    inline uintptr_t RelativeLocation = 0x388;
    inline uintptr_t RotationInput = 0x528 + 0x8; // Updated
    inline uintptr_t AdditionalAimOffset = 0x29c0;

    inline uintptr_t PlayerName = 0xA08; // Updated (Matches USERNAME_COMPONENT)
    inline uintptr_t Platform = 0x440; // Confirmed
    inline uintptr_t CurrentWeapon = 0x990; // Confirmed
    inline uintptr_t WeaponData = 0x638; // Updated
    inline uintptr_t ItemName = 0x40; // Updated
    inline uintptr_t Tier = 0xA2; // Updated

    // local player
    inline uintptr_t LocalPlayers = 0x38; // Confirmed
    inline uintptr_t PlayerController = 0x30; // Confirmed
    inline uintptr_t AcknowledgedPawn = 0x358; // Confirmed
    inline uintptr_t TeamId = 0x11C1; // Confirmed (Matches TEAM_INDEX)

    // player state
    inline uintptr_t PawnPrivate = 0x328; // Confirmed
    inline uintptr_t PlayerState = 0x2B8; // Confirmed
    inline uintptr_t TeamIndex = 0x11C1; // Confirmed

    // pawn/mesh
    inline uintptr_t Mesh = 0x330; // Confirmed
    inline uintptr_t BoneArray = 0x628; // Confirmed
    inline uintptr_t ComponentToWorld = 0x1E0; // Confirmed
    inline uintptr_t bIsDying = 0x728; // Confirmed

    // visibility (Found in USkinnedMeshComponent)
    inline uintptr_t bRecentlyRendered = 0x328; // Updated from LAST_SUBMIT_TIME_ON_SCREEN
    inline uintptr_t LastRenderTime = 0x330; // Confirmed

    // camera
    inline uintptr_t CameraLocation = 0x180; // Confirmed
    inline uintptr_t CameraRotation = 0x190; // Confirmed
    inline uintptr_t CameraFOV = 0x3B4; // Updated (Matches PLAYER_FOV)

    // aimbot
    inline uintptr_t ControlRotation = 0x328; 
    inline uintptr_t PlayerAim = 0x29F0; 

    // rarity
    inline uintptr_t Rarity = 0xA2; // Updated (Matches TIER)
    inline uintptr_t LastFireLocation = 0x5ba0;
    inline uintptr_t LastFireDirection = 0x0; // Updated from WEAPON_FIRE_DIRECTION
    inline uintptr_t ProjectedImpactDistance = 0x1378; 

    inline uintptr_t FOVMinimum = 0x2ae8;
    inline uintptr_t FOVMaximum = 0x2aec;

    // UWorld Decryption Function
    inline uint64_t DecryptUworld(uint64_t world)
    {
        if (!world) return 0;
        return ((world << 32) | (world >> (64 - 32))) ^ 0x35E5647853A0CBFULL;
    }
}
