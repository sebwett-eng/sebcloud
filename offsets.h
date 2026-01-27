#pragma once
#include <cstdint>

// Current Patch: v39.30 - Build 2
// Last Updated: Jan 27 2026 - 12:20 PM

namespace offsets {

    // ===== Globals =====
    inline uintptr_t UWorld = 0x178685D8; 
    inline uintptr_t UWorldXorKey = 0xFFFFFFFF30B9BBF9; 
    inline uintptr_t UWorldXorRotationCount = 0; 
    inline uintptr_t GNames = 0x17A50D00; 
    inline uintptr_t GEngine = 0x17869ED8; 
    inline uintptr_t GObjects = 0x1785AFB0; 
    inline uintptr_t GObjectsCount = 0x1785AFB8; 
    inline uintptr_t GObjectsXorKey = 0xFFFFFFFFCCF54342ULL;
    inline uintptr_t GObjectsCountXorKey = 0x75DB1A01;
    inline uintptr_t StaticFindObject = 0x73AC13; 
    inline uintptr_t StaticLoadObject = 0x960153;

    inline uintptr_t ProcessEvent = 0x86FAA; 
    inline uintptr_t ProcessEventIndex = 71;
    inline uintptr_t DrawTransition = 0x513D88;
    inline uintptr_t BoneMatrix = 0x55B004;

    // ===== Player / Controller =====
    inline uintptr_t LocalPlayers = 0x38;
    inline uintptr_t PlayerController = 0x30;
    inline uintptr_t PlayerCameraManager = 0x368; 
    inline uintptr_t AcknowledgedPawn = 0x358;
    inline uintptr_t PlayerState = 0x2D0;
    inline uintptr_t MyHud = 0x360;
    inline uintptr_t TeamIndex = 0x11B1;
    inline uintptr_t SquadId = 0x1344;
    inline uintptr_t bIsDying = 0x728;
    inline uintptr_t bIsDBNO = 0x841;
    inline uintptr_t bIsABot = 0x2BA;

    inline uintptr_t Platform = 0x440;
    inline uintptr_t TargetedFortPawn = 0x1830;
    inline uintptr_t KillScore = 0x11C8;
    inline uintptr_t SeasonLevelUIDisplay = 0x11C4;
    inline uintptr_t RankedProgress = 0xD8;
    inline uintptr_t PlayerAimOffset = 0x2BD0;
    inline uintptr_t Username = 0xA00;

    // ===== World =====
    inline uintptr_t OwningGameInstance = 0x248; 
    inline uintptr_t GameState = 0x1D0; 
    inline uintptr_t PlayerArray = 0x2C8;
    inline uintptr_t PersistentLevel = 0x40;
    inline uintptr_t Levels = 0x1E8; 
    inline uintptr_t OverlappingBuildings = 0x1D48;

    // ===== Actor / Pawn =====
    inline uintptr_t RootComponent = 0x1B0;
    inline uintptr_t PawnPrivate = 0x328;
    inline uintptr_t BoundScale = 0x310;

    // ===== Mesh / Components =====
    inline uintptr_t Mesh = 0x330;
    inline uintptr_t BoneArray = 0x5F0;
    inline uintptr_t BoneCache = 0x600; 
    inline uintptr_t ComponentToWorld = 0x1E0;
    inline uintptr_t RelativeLocation = 0x140;
    inline uintptr_t RelativeRotation = 0x158;
    inline uintptr_t ComponentVelocity = 0x188;
    inline uintptr_t AdditionalAimOffset = 0x2BA0;
    inline uintptr_t LastRenderTime = 0x32C; // BoundScale + 0x1C
    inline uintptr_t CustomDepthComponent = 0x5040;

    // ===== Camera =====
    inline uintptr_t CameraLocation = 0x180; 
    inline uintptr_t CameraRotation = 0x170; 
    inline uintptr_t CameraFOV = 0x740; // FOV_Camera
    inline uintptr_t ViewState = 0xD0;

    // ===== Weapons =====
    inline uintptr_t CurrentWeapon = 0x990;
    inline uintptr_t WeaponData = 0x688; 
    inline uintptr_t WeaponList = 0x9C8;
    inline uintptr_t AmmoCount = 0x144C;
    inline uintptr_t bIsReloadingWeapon = 0x3B9;
    inline uintptr_t CurrentReloadDuration = 0x1438;
    inline uintptr_t WeaponRecoilOffset = 0x2C10;
    inline uintptr_t WeaponCoreAnimation = 0x19B8;
    inline uintptr_t TriggerType = 0x29C;

    inline uintptr_t ProjectileSpeed = 0x2484; 
    inline uintptr_t ProjectileGravity = 0x2488; 
    inline uintptr_t LastFireTimeVerified = 0x13A0;
    inline uintptr_t LastFiredDirection = 0x5BC8;
    inline uintptr_t LastFiredLocation = 0x5BB0;

    // ===== Items / Loot =====
    inline uintptr_t ItemRarity = 0xAA;
    inline uintptr_t bAlreadySearched = 0xD52;

    // ===== Misc =====
    inline uintptr_t HabaneroComponent = 0x948;
    inline uintptr_t MouseSensitivityX = 0x7A8;
    inline uintptr_t MouseSensitivityY = 0x7AC;
};
