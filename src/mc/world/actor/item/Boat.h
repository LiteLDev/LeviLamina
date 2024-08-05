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
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Boat : public ::Actor {
public:
    // prevent constructor by default
    Boat& operator=(Boat const&);
    Boat(Boat const&);
    Boat();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Boat() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 31
    virtual std::string getExitTip(std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 97
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 100
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 121
    virtual float getPassengerYRotation(class Actor const&) const;

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 151
    virtual void destroy(class Actor* source);

    MCAPI Boat(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI uchar getWoodID() const;

    MCAPI void postNormalTick();

    // NOLINTEND
};
