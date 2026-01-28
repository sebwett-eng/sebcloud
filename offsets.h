#pragma once
#include <cstdint>
#include <string>
#include <windows.h>
#include <wininet.h>
#include <iostream>

#pragma comment(lib, "wininet.lib")

// Current Patch: v39.30 - Build 3
namespace offsets {
    // --- World & Globals ---
    inline uintptr_t UWorld = 0x178685D8;
    inline uintptr_t GNames = 0x17A50D00;
    inline uintptr_t GameInstance = 0x248;
    inline uintptr_t OwningGameInstance = 0x248; // Alias
    inline uintptr_t GameState = 0x1D0;
    inline uintptr_t PlayerArray = 0x2C8;
    inline uintptr_t PersistentLevel = 0x40;
    inline uintptr_t Levels = 0x1E8;
    inline uintptr_t Actors = 0x1B0;
    inline uintptr_t ServerWorldTimeSecondsDelta = 0x2E8;
    inline uintptr_t seconds = 0x190 + 0x10; // CameraRotation + 0x10

    // --- Local Player / Controller ---
    inline uintptr_t LocalPlayers = 0x38;
    inline uintptr_t PlayerController = 0x30;
    inline uintptr_t AcknowledgedPawn = 0x358;
    inline uintptr_t PlayerCameraManager = 0x368;
    inline uintptr_t MyHud = 0x360;
    inline uintptr_t TeamId = 0x11B1;
    inline uintptr_t ControlRotation = 0x380;
    inline uintptr_t ViewState = 0xD0;

    // --- Player State ---
    inline uintptr_t PlayerState = 0x2D0;
    inline uintptr_t PawnPrivate = 0x328;
    inline uintptr_t TeamIndex = 0x11B1;
    inline uintptr_t SquadId = 0x1344;
    inline uintptr_t KillScore = 0x11C8;
    inline uintptr_t Username = 0xA00;
    inline uintptr_t Platform = 0x440;
    inline uintptr_t TargetedFortPawn = 0x1830;
    inline uintptr_t RankedProgress = 0xD8;
    inline uintptr_t SeasonLevelUIDisplay = 0x11C4;

    // --- Pawn & Mesh ---
    inline uintptr_t Mesh = 0x330;
    inline uintptr_t RootComponent = 0x1B0;
    inline uintptr_t HabaneroComponent = 0x948;
    inline uintptr_t BoneArray = 0x5F0;
    inline uintptr_t BoneCache = 0x5F0 + 0x10;
    inline uintptr_t ComponentToWorld = 0x1E0;
    inline uintptr_t ComponentVelocity = 0x188;
    inline uintptr_t RelativeLocation = 0x140;
    inline uintptr_t RelativeRotation = 0x158;
    inline uintptr_t bIsDying = 0x728;
    inline uintptr_t bIsDBNO = 0x841;

    // --- Visibility ---
    inline uintptr_t bRecentlyRendered = 0x7C8;
    inline uintptr_t LastRenderTime = 0x328; // Standard 0x310 + 0x18/1C 

    // --- Weapon ---
    inline uintptr_t CurrentWeapon = 0x990;
    inline uintptr_t WeaponData = 0x688;
    inline uintptr_t ItemName = 0x40; // FText inside WeaponData
    inline uintptr_t AmmoCount = 0x144C;
    inline uintptr_t WeaponMesh = 0x330; // Usually points to the pawn's weapon mesh component
    inline uintptr_t WeaponList = 0x9C8;
    inline uintptr_t bIsReloadingWeapon = 0x3B9;
    inline uintptr_t weaponrecoiloffset = 0x2C10;

    // --- Camera ---
    inline uintptr_t CameraLocation = 0x180;
    inline uintptr_t CameraRotation = 0x190;
    inline uintptr_t CameraFOV = 0x3B4;
    inline uintptr_t FOVAngle = 0x2D0;

    // --- Aimbot & Extras ---
    inline uintptr_t PlayerAim = 0x2BD0;
    inline uintptr_t mouse_sensitivity_x = 0x7A8;
    inline uintptr_t mouse_sensitivity_y = 0x7AC;
    inline uintptr_t ProjectileSpeed = 0x2484;
    inline uintptr_t ProjectileGravity = 0x2488;
    inline uintptr_t CustomDepthComponent = 0x5040;

    // --- Logic & Updating ---
    inline std::string LastUpdate = "2026-01-27"; 
    bool Initialize();
    uintptr_t ParseFromRaw(const std::string& content, const std::string& varName);
}
