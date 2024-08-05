#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/HangingActor.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 10
    virtual ~LeashFenceKnotActor() = default;

    // vIndex: 13
    virtual void remove();

    // vIndex: 23
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool);

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 124
    virtual bool getInteraction(class Player& player, class ActorInteraction& interaction, class Vec3 const& location);

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
