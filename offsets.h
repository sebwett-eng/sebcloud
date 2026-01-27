#pragma once
#include <cstdint>
#include <unordered_map>
#include <fstream>

// Current Patch: v39.30 - Build 3 (Merged Update)

namespace offsets {

    // ===== Globals =====
    uintptr_t UWorld = 0x178685D8; 
    uintptr_t UWorldXorKey = 0xFFFFFFFF30B9BBF9; 
    uintptr_t UWorldXorRotationCount = 0; 
    uintptr_t GNames = 0x1777E080; 
    uintptr_t GEngine = 0x17869ED8; 
    uintptr_t GObjects = 0x1785AFB0; 
    uintptr_t GObjectsCount = 0x1785AFB8; 
    uintptr_t GObjectsXorKey = 0xFFFFFFFFCCF54342ULL;
    uintptr_t GObjectsCountXorKey = 0x75DB1A01;
    uintptr_t StaticFindObject = 0x73AC13; 
    uintptr_t StaticLoadObject = 0x960153;

    uintptr_t ProcessEvent = 0x86FAA; 
    uintptr_t ProcessEventIndex = 71;
    uintptr_t DrawTransition = 0x513D88;
    uintptr_t BoneMatrix = 0x55B004;

    // ===== Player / Controller =====
    uintptr_t LocalPlayers = 0x38;
    uintptr_t PlayerController = 0x30;
    uintptr_t PlayerCameraManager = 0x360; 
    uintptr_t AcknowledgedPawn = 0x358;
    uintptr_t PlayerState = 0x2D0;
    uintptr_t NetConnection = 0x528;
    uintptr_t TeamIndex = 0x11B1;
    uintptr_t bIsDying = 0x728;
    uintptr_t bIsDBNO = 0x841;
    uintptr_t bIsABot = 0x2BA;

    uintptr_t Platform = 0x440;
    uintptr_t TargetedFortPawn = 0x1830;
    uintptr_t KillScore = 0x11C8;
    uintptr_t RebootCount = 0x1894;
    uintptr_t PlayerName = 0xA08;
    uintptr_t PlayerNamePrivate = 0x348;
    uintptr_t RankedProgress = 0xD8;
    uintptr_t PlayerAimOffset = 0x2BD0;

    // ===== World =====
    uintptr_t OwningGameInstance = 0x248; 
    uintptr_t GameState = 0x1D0; 
    uintptr_t PlayerArray = 0x2C8;
    uintptr_t WorldSettings = 0x2B8;
    uintptr_t WorldGravityZ = 0x330;
    uintptr_t WorldToMeters = 0x320;

    uintptr_t PersistentLevel = 0x40;
    uintptr_t Levels = 0x1E0;

    // ===== Actor / Pawn =====
    uintptr_t AActor = 0x208;
    uintptr_t RootComponent = 0x1B0;
    uintptr_t PawnPrivate = 0x328;
    uintptr_t MoveIgnoreActors = 0x348;
    uintptr_t SuperField = 0x40;

    // ===== Mesh / Components =====
    uintptr_t Mesh = 0x330;
    uintptr_t BoneArray = 0x5F0;
    uintptr_t BoneCache = 0x600; 
    uintptr_t MeshDeformerInstances = 0x5C0;

    uintptr_t ComponentToWorld = 0x1E0;
    uintptr_t RelativeLocation = 0x140;
    uintptr_t RelativeRotation = 0x158;
    uintptr_t RelativeScale3D = 0x170;
    uintptr_t ComponentVelocity = 0x188;
    uintptr_t AdditionalAimOffset = 0x2BA0;
    uintptr_t LastRenderTime = 0x328;
    uintptr_t LocationUnderReticle = 0x2A50;

    // ===== Camera =====
    uintptr_t CameraLocation = 0x170; 
    uintptr_t CameraRotation = 0x180; 
    uintptr_t CameraFOV = 0x3B4;

    // ===== Vehicles =====
    uintptr_t CurrentVehicle = 0x2C68; // updated: 0x2C58 -> 0x2C68

    // ===== Weapons =====
    uintptr_t CurrentWeapon = 0x990;
    uintptr_t WeaponData = 0x5A0; 
    uintptr_t WeaponOffsetCorrection = 0x2C00;
    uintptr_t AmmoCount = 0x14FC; 
    uintptr_t bIsReloadingWeapon = 0x3D1;
    uintptr_t ReloadAnimation = 0x1608;
    uintptr_t LWProjectile_ActivateRemovedTimestamp = 0x2968;

    uintptr_t ProjectileSpeed = 0xF40; // updated: 0x24AC -> 0xF40
    uintptr_t ProjectileGravity = 0xF18; // updated: 0x24B0 -> 0xF18
    uintptr_t MaxTargetingAimAdjustPerSecond = 0x23D0;
    uintptr_t ServerWorldTimeSecondsDelta = 0x2E8;

    uintptr_t LastFireTimeVerified = 0x142C; 
    uintptr_t WeaponCoreAnimation = 0x1A58; 

    // ===== Items / Loot =====
    uintptr_t PrimaryPickupItemEntry = 0x3A8;
    uintptr_t ItemName = 0x40; // updated: 0xB0 -> 0x40
    uintptr_t ItemType = 0xA8;
    uintptr_t PrimaryAssetOverride = 0xA9;
    uintptr_t ItemRarity = 0xAA;
    uintptr_t Tier = 0xAA; // added
    uintptr_t bAlreadySearched = 0xD52;

    // ===== Aim Source & Trace =====
    uintptr_t TargetSourceOffset = 0x1470; // added
    uintptr_t TargetSourceOffsetWhileTargeting = 0x14A0; // added
    uintptr_t TargetSourceOffsetWhileCrouched = 0x1488; // added
    uintptr_t bTraceThroughWorld = 0x1408; // added

    // ===== Spectators =====
    uintptr_t Spectators = 0xAA0; // added
    uintptr_t SpectatorArray = 0x108; // added

    // ===== Misc =====
    uintptr_t HabaneroComponent = 0x948;
};
