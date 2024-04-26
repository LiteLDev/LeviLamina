#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"


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
    SerializedAbilitiesData();

public:
    // NOLINTBEGIN
    // symbol: ??0SerializedAbilitiesData@@QEAA@UActorUniqueID@@AEBVLayeredAbilities@@@Z
    MCAPI SerializedAbilitiesData(struct ActorUniqueID, class LayeredAbilities const&);

    // symbol: ?fillIn@SerializedAbilitiesData@@QEBAXAEAVLayeredAbilities@@@Z
    MCAPI void fillIn(class LayeredAbilities&) const;

    // symbol: ?getTargetPlayer@SerializedAbilitiesData@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getTargetPlayer() const;

    // symbol: ??1SerializedAbilitiesData@@QEAA@XZ
    MCAPI ~SerializedAbilitiesData();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?ABILITIES_LAYER_MAP@SerializedAbilitiesData@@0V?$array@W4SerializedAbilitiesLayer@SerializedAbilitiesData@@$04@std@@B
    MCAPI static std::array<::SerializedAbilitiesData::SerializedAbilitiesLayer, 5> const ABILITIES_LAYER_MAP;

    // NOLINTEND
};
