#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/HangingActor.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Painting : public ::HangingActor {
public:
    // prevent constructor by default
    Painting& operator=(Painting const&);
    Painting(Painting const&);
    Painting();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Painting() = default;

    // vIndex: 13
    virtual void remove();

    // vIndex: 25
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151
    virtual int getWidth() const;

    // vIndex: 152
    virtual int getHeight() const;

    // vIndex: 153
    virtual void dropItem();

    // vIndex: 154
    virtual bool placeHangingEntity(class BlockSource& region, int direction);

    MCAPI Painting(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI class Motif const& getCurrentMotif() const;

    // NOLINTEND
};
