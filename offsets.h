#pragma once
#include <cstdint>
#include <string>
#include <windows.h>
#include <wininet.h>
#include <iostream>

#pragma comment(lib, "wininet.lib")

// game offsets - Updated: Jan 27, 2026
namespace offsets {
    // --- World & Game Systems ---
    inline uintptr_t UWorld = 0x178685D8;
    inline uintptr_t GNames = 0x17A50D00;
    inline uintptr_t GameInstance = 0x248;
    inline uintptr_t OwningGameInstance = 0x248;
    inline uintptr_t GameState = 0x1D0;
    inline uintptr_t PlayerArray = 0x2C8;
    inline uintptr_t ServerWorldTimeSecondsDelta = 0x2E8; 
    inline uintptr_t seconds = 0x190 + 0x10; // Derived from CameraRotation + 0x10

    // --- Player Info & State ---
    inline uintptr_t HabaneroComponent = 0x948;
    inline uintptr_t Username = 0xA00;
    inline uintptr_t Platform = 0x440;
    inline uintptr_t KillScore = 0x11C8;
    inline uintptr_t TargetedFortPawn = 0x1830;
    inline uintptr_t TeamId = 0x11B1;
    inline uintptr_t TeamIndex = 0x11B1;
    inline uintptr_t PlayerState = 0x2D0;
    inline uintptr_t PawnPrivate = 0x328;

    // --- Local Player / Controller ---
    inline uintptr_t LocalPlayers = 0x38;
    inline uintptr_t PlayerController = 0x30;
    inline uintptr_t AcknowledgedPawn = 0x358;
    inline uintptr_t ControlRotation = 0x380;

    // --- Weapon Data ---
    inline uintptr_t CurrentWeapon = 0x990;
    inline uintptr_t WeaponData = 0x688;
    inline uintptr_t ItemName = 0x40;         // Standard FText offset within ItemDefinition
    inline uintptr_t WeaponMesh = 0x330;       // Points back to the character's mesh or component
    inline uintptr_t AmmoCount = 0x144C;
    inline uintptr_t WeaponRecoil = 0x2C10;

    // --- Pawn & Mesh ---
    inline uintptr_t Mesh = 0x330;
    inline uintptr_t BoneArray = 0x5F0;
    inline uintptr_t BoneCache = 0x5F0 + 0x10;
    inline uintptr_t ComponentToWorld = 0x1E0;
    inline uintptr_t bIsDying = 0x728;
    inline uintptr_t bIsDBNO = 0x841;

    // --- Visibility & Camera ---
    inline uintptr_t bRecentlyRendered = 0x328 + 0x1C; // Derived from BoundScale logic
    inline uintptr_t LastRenderTime = 0x328;
    inline uintptr_t CameraLocation = 0x180;
    inline uintptr_t CameraRotation = 0x190;
    inline uintptr_t CameraFOV = 0x3B4;

    // --- Aimbot & Prediction ---
    inline uintptr_t PlayerAim = 0x2BD0;
    inline uintptr_t ComponentVelocity = 0x188;

    // --- Update Logic ---
    inline std::string LastUpdate = "2026-01-27 21:00"; 
    bool Initialize();
    uintptr_t ParseFromRaw(const std::string& content, const std::string& varName);
}
