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
#include "mc/enums/MinecartType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MinecartTNT : public ::Minecart {
public:
    // prevent constructor by default
    MinecartTNT& operator=(MinecartTNT const&);
    MinecartTNT(MinecartTNT const&);
    MinecartTNT();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~MinecartTNT() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    // vIndex: 98
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 151
    virtual void destroy(class ActorDamageSource const& source, bool dropMinecartComponents);

    // vIndex: 152
    virtual ::MinecartType getType();

    // vIndex: 153
    virtual class Block const* getDefaultDisplayBlock() const;

    MCAPI MinecartTNT(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void primeFuse(::ActorDamageCause cause);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const DEFAULT_FUSE_LENGTH;

    // NOLINTEND
};
