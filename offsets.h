#pragma once
#include <cstdint>

// Current Patch: v39.30 - Build 3 (Merged Update)
// nigger
namespace offsets {
    // world
    inline uintptr_t UWorld = 0x177E8AA8;
    inline uintptr_t OwningGameInstance = 0x240;
    inline uintptr_t GameState = 0x1C8;
    inline uintptr_t PlayerArray = 0x2C8;
    inline uintptr_t ServerWorldTimeSecondsDelta = 0x2E8; // New: Found in GameState
    inline uintptr_t TargetedFortPawn = 0x1830; 
    inline uintptr_t GameInstance = 0x1C8;
    inline uintptr_t HabaneroComponent = 0x948;
    inline uintptr_t RootComponent = 0x1B0;

    inline uintptr_t PlayerName = 0xA08;
    inline uintptr_t Platform = 0x440;
    inline uintptr_t CurrentWeapon = 0x990;
    inline uintptr_t WeaponData = 0x5A0;
    inline uintptr_t ItemName = 0x40;
    inline uintptr_t Tier = 0xAA;


    // local player
    inline uintptr_t LocalPlayers = 0x38;
    inline uintptr_t PlayerController = 0x30;
    inline uintptr_t AcknowledgedPawn = 0x358;
    inline uintptr_t TeamId = 0x11B1;

    // player state
    inline uintptr_t PawnPrivate = 0x328;
    inline uintptr_t PlayerState = 0x2D0;
    inline uintptr_t TeamIndex = 0x11A9;

    // pawn/mesh
    inline uintptr_t Mesh = 0x330;
    inline uintptr_t BoneArray = 0x5F0;
    inline uintptr_t ComponentToWorld = 0x1E0;
    inline uintptr_t bIsDying = 0x728;

    // visibility (Found in USkinnedMeshComponent)
    inline uintptr_t bRecentlyRendered = 0x7C8;
    inline uintptr_t LastRenderTime = 0x328;

    // camera
    inline uintptr_t CameraLocation = 0x178;
    inline uintptr_t CameraRotation = 0x188;
    inline uintptr_t CameraFOV = 0x3b4;

    // aimbot
    inline uintptr_t ControlRotation = 0x380;
    inline uintptr_t PlayerAim = 0x2BD0;
}
