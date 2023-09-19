#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SneakTriggerSystem {
public:
    // SneakTriggerSystem inner types declare
    // clang-format off
    struct PlayerPoseTransitions;
    // clang-format on

    // SneakTriggerSystem inner types define
    struct PlayerPoseTransitions {
    public:
        // prevent constructor by default
        PlayerPoseTransitions& operator=(PlayerPoseTransitions const&);
        PlayerPoseTransitions(PlayerPoseTransitions const&);
        PlayerPoseTransitions();
    };

public:
    // prevent constructor by default
    SneakTriggerSystem& operator=(SneakTriggerSystem const&);
    SneakTriggerSystem(SneakTriggerSystem const&);
    SneakTriggerSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createTriggerSystem@SneakTriggerSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo createTriggerSystem(bool);

    // symbol:
    // ?updatePlayerState@SneakTriggerSystem@@SA?AUPlayerPoseTransitions@1@AEBVGetCollisionShapeInterface@@AEBVAABB@@AEBVVec2@@_N3333333MAEBVIConstBlockSource@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    MCAPI static struct SneakTriggerSystem::PlayerPoseTransitions
    updatePlayerState(class GetCollisionShapeInterface const&, class AABB const&, class Vec2 const&, bool, bool, bool, bool, bool, bool, bool, bool, float, class IConstBlockSource const&, std::vector<class AABB>&);

    // NOLINTEND
};
