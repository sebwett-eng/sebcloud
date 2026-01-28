#pragma once
#include <cstdint>

// Current Patch: v39.30 - Build 3 (Merged & Unified)

namespace offsets {
    // --- Global / World ---
    inline uintptr_t Gworld = 0x178685D8;
    inline uintptr_t GNames = 0x17A50D00;
    inline uintptr_t GameInstance = 0x248;
    inline uintptr_t GameState = 0x1D0;
    inline uintptr_t PlayerArray = 0x2C8;
    inline uintptr_t PersistentLevel = 0x40;
    inline uintptr_t seconds = 0x190 + 0x10; // (CameraRotation + 0x10)

    // --- Local Player / Controller ---
    inline uintptr_t LocalPlayers = 0x38;
    inline uintptr_t PlayerController = 0x30;
    inline uintptr_t AcknowledgedPawn = 0x358;
    inline uintptr_t PlayerCameraManager = 0x368;
    inline uintptr_t MyHud = 0x360;
    inline uintptr_t ControlRotation = 0x380;

    // --- Player State ---
    inline uintptr_t PlayerState = 0x2D0;
    inline uintptr_t PawnPrivate = 0x328;
    inline uintptr_t TeamIndex = 0x11B1;
    inline uintptr_t KillScore = 0x11C8;
    inline uintptr_t Username = 0xA00;
    inline uintptr_t Platform = 0x440;
    inline uintptr_t TargetedFortPawn = 0x1830; // Used for Spectator List

    // --- Actor / Pawn ---
    inline uintptr_t Mesh = 0x330;
    inline uintptr_t RootComponent = 0x1B0;
    inline uintptr_t HabaneroComponent = 0x948; // Health & Shield
    inline uintptr_t bIsDying = 0x728;
    inline uintptr_t bIsDBNO = 0x841;
    inline uintptr_t CurrentWeapon = 0x990;

    // --- Mesh / Bones ---
    inline uintptr_t BoneArray = 0x5F0;
    inline uintptr_t BoneCache = 0x5F0 + 0x10;
    inline uintptr_t ComponentToWorld = 0x1E0;
    inline uintptr_t LastRenderTime = 0x328; // Used for Visibility Check

    // --- Weapon Data ---
    inline uintptr_t WeaponData = 0x688;
    inline uintptr_t ItemName = 0x40;         // FText Name (Usually 0x40 within WeaponData)
    inline uintptr_t AmmoCount = 0x144C;
    inline uintptr_t WeaponRecoilOffset = 0x2C10;

    // --- Camera ---
    inline uintptr_t CameraLocation = 0x170; // From PlayerCameraManager
    inline uintptr_t CameraRotation = 0x180;
    inline uintptr_t CameraFOV = 0x3B4;

    // --- Aimbot / Prediction ---
    inline uintptr_t PlayerAim = 0x2BD0;
    inline uintptr_t ComponentVelocity = 0x188;
}
