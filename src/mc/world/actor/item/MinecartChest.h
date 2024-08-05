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

class MinecartChest : public ::Minecart {
public:
    // prevent constructor by default
    MinecartChest& operator=(MinecartChest const&);
    MinecartChest(MinecartChest const&);
    MinecartChest();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~MinecartChest() = default;

    // vIndex: 151
    virtual void destroy(class ActorDamageSource const& source, bool dropMinecartComponents);

    // vIndex: 152
    virtual ::MinecartType getType();

    // vIndex: 153
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 155
    virtual void applyNaturalSlowdown(class BlockSource& region);

    MCAPI MinecartChest(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const ITEMS_SIZE;

    // NOLINTEND
};
