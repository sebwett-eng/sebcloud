#pragma once
#include <cstdint>

// Current Patch: v39.30 - Build 3 (Merged Update)

namespace offsets {
    // world
    inline uintptr_t UWorld = 0x178685D8;
    inline uintptr_t OwningGameInstance = 0x248;
    inline uintptr_t GameState = 0x1D0;
    inline uintptr_t PlayerArray = 0x2C8;
    inline uintptr_t ServerWorldTimeSecondsDelta = 0x2E8; // New: Found in GameState

    // local player
    inline uintptr_t LocalPlayers = 0x38;
    inline uintptr_t PlayerController = 0x30;
    inline uintptr_t AcknowledgedPawn = 0x358;
    inline uintptr_t TeamId = 0x11B1;

    // player state
    inline uintptr_t PawnPrivate = 0x328;
    inline uintptr_t PlayerState = 0x2D0;
    inline uintptr_t TeamIndex = 0x11B1;

    // pawn/mesh
    inline uintptr_t Mesh = 0x330;
    inline uintptr_t BoneArray = 0x5F0;
    inline uintptr_t ComponentToWorld = 0x1E0;
    inline uintptr_t bIsDying = 0x728;

    // visibility (Found in USkinnedMeshComponent)
    inline uintptr_t bRecentlyRendered = 0x7C8;
    inline uintptr_t LastRenderTime = 0x328;

    // camera
    inline uintptr_t CameraLocation = 0x170;
    inline uintptr_t CameraRotation = 0x180;
    inline uintptr_t CameraFOV = 0x3b4;

    // aimbot
    inline uintptr_t ControlRotation = 0x380;
    inline uintptr_t PlayerAim = 0x2BD0;
}
