#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"


struct SerializedAbilitiesData {
public:
    // SerializedAbilitiesData inner types declare
    // clang-format off
    struct SerializedLayer;
    // clang-format on

    // SerializedAbilitiesData inner types define
    enum class SerializedAbilitiesLayer : short {
        CustomCache = 0x0,
        Base        = 0x1,
        Spectator   = 0x2,
        Commands    = 0x3,
        Editor      = 0x4,
    };

    struct SerializedLayer {
    public:
        SerializedAbilitiesLayer mSerializedLayer; // this+0x0
        uint                     mAbilitiesSet;    // this+0x4
        uint                     mAbilityValues;   // this+0x8
        float                    mFlySpeed;        // this+0xC
        float                    mWalkSpeed;       // this+0x10

        // prevent constructor by default
        SerializedLayer& operator=(SerializedLayer const&);
        SerializedLayer(SerializedLayer const&);
        SerializedLayer();
    };

public:
    ActorUniqueID                mTargetPlayer;       // this+0x0
    CommandPermissionLevel       mCommandPermissions; // this+0x8
    PlayerPermissionLevel        mPlayerPermissions;  // this+0x9
    std::vector<SerializedLayer> mLayers;             // this+0x10

    // prevent constructor by default
    SerializedAbilitiesData& operator=(SerializedAbilitiesData const&);
    SerializedAbilitiesData(SerializedAbilitiesData const&);

public:
    // NOLINTBEGIN
    MCAPI SerializedAbilitiesData();

    MCAPI SerializedAbilitiesData(struct ActorUniqueID targetPlayer, class LayeredAbilities const& layeredAbilities);

    MCAPI void fillIn(class LayeredAbilities& layeredAbilities) const;

    MCAPI struct ActorUniqueID getTargetPlayer() const;

    MCAPI ~SerializedAbilitiesData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(struct ActorUniqueID targetPlayer, class LayeredAbilities const& layeredAbilities);

    MCAPI void dtor$();

    MCAPI static std::array<::SerializedAbilitiesData::SerializedAbilitiesLayer, 5> const& ABILITIES_LAYER_MAP();

    // NOLINTEND
};
