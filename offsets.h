#pragma once
#include <cstdint>
#include <string>

// Current Patch: v39. idk - Build 2

namespace Offsets
{
    // Constant Updates
    int Uworld = 0x178685D8; 
    int GNames = 0x17A50D00;
    int Actors = 0x1b0;
    int Levels = 0x1e8;//
    int GameState = 0x1D0;  
    int OverlappingBuildings = 0x1D48;
    int GameInstance = 0x248;
    int CameraLocation = 0x180;
    int CameraRotation = 0x190;
    int BoundScale = 0x310;
    int AmmoCount = 0x144C;
    int MouseSensitivityX = 0x7a8;
    int MouseSensitivityY = 0x7ac;
    int ProjectileSpeed = 0x2484; //
    int ProjectileGravity = 0x2488; // = Offsets::ProjectileSpeed + 0x4
    int seconds = Offsets::CameraRotation + 0x10;
    int playeraimoffset = 0x2bd0;//
    int additionalaimoffset = 0x2ba0;
    int bShouldDrawNativeReticle = 0xc40;
    int ViewState = 0xd0;  // Old = 0xd0     //8  TMap<FString, FFortTournamentLeaderboardViewState>ViewStates = class.UFortCareerSocialLeaderboardVM //0xc0
    int weaponrecoiloffset = 0x2C10;
    //chams
    int CustomDepthComponent = 0x5040;

    // dont know
    int bShouldUsePerfectAimWhenTargetingMinSpread = 0x4d0; // bool bShouldUsePerfectAimWhenTargetingMinSpread: 1 class.UFortWeaponRangedItemDefinition
    int LastRenderTime = Offsets::BoundScale + 0x1C;
    int lastrendertime_2 = 0x198;

    // Less Common
    int CurrentWeapon = 0x990;
    int WeaponData = 0x688;
    int WeaponList = 0x9c8;
    int WeaponCoreAnimation = 0x19b8;
    int TriggerType = 0x29c;
    int Rarity = 0xAA;
    int RankedProgress = 0xd8;
    int KillScore = 0x11C8; 
    int SeasonLevelUIDisplay = 0x11C4;
    int userplus = 0x8;
    int Username = 0xA00;
    int TeamIndex = 0x11B1;
    int SquadId = 0x1344;
    int bIsDBNO = 0x841;
    int bIsDying = 0x728;
    int bAlreadySearched = 0xD52;
    int ComponentVelocity = 0x188;
    int RelativeRotation = 0x158;
    int RelativeLocation = 0x140;
    int PlayerArray = 0x2C8;
    int PawnPrivate = 0x328;
    int Component_To_World = 0x1E0;
    int bIsReloadingWeapon = 0x3b9;
    int CurrentReloadDuration = 0x1438;
    int Bisabot = 0x2ba;
    int Spectators = 0xa98;
    int TargetedFortPawn = 0x1830;
    int LastFiredDirection = 0x5bc8;
    int LastFiredLocation = 0x5bb0;
    int CurrentProjectedImpactDistance = 0x1380;
    int LastFireTimeVerified = 0x13a0;

    // Rare
    int FOV_Camera = 0x740;
    int FOVAngle = 0x2D0;  
    int LocalPlayers = 0x38;
    int Projection = 0x940; 
    int AcknowledgedPawn = 0x358;
    int PlayerCameraManager = 0x368;
    int RotationInput = 0x530;
    int MyHud = 0x360;
    int RootComponent = 0x1B0;
    int PlayerState = 0x2D0;
    int Mesh = 0x330;
    int HabaneroComponent = 0x948;
    int Platform = 0x440;
    int Bone_Array = 0x5F0;
    int Bone_Cache = Bone_Array + 0x10;
    int PlayerController = 0x30;
    int PresistentLevel = 0x40;
}
