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

class LeashFenceKnotActor : public ::HangingActor {
public:
    // prevent constructor by default
    LeashFenceKnotActor& operator=(LeashFenceKnotActor const&);
    LeashFenceKnotActor(LeashFenceKnotActor const&);
    LeashFenceKnotActor();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~LeashFenceKnotActor() = default;

    // vIndex: 13
    virtual void remove();

    // vIndex: 23
    virtual void
    teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 124
    virtual bool getInteraction(class Player&, class ActorInteraction& interaction, class Vec3 const&);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 151
    virtual int getWidth() const;

    // vIndex: 152
    virtual int getHeight() const;

    // vIndex: 153
    virtual void dropItem();

    // vIndex: 155
    virtual bool wouldSurvive(class BlockSource& region);

    MCAPI LeashFenceKnotActor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI int numberofAnimalsAttached();

    MCAPI void removeAnimals();

    // NOLINTEND
};
