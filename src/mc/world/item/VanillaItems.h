#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaItems {
public:
    // prevent constructor by default
    VanillaItems& operator=(VanillaItems const&);
    VanillaItems(VanillaItems const&);
    VanillaItems();

public:
    // NOLINTBEGIN
    MCAPI static void registerHardCodedItemTags(class ItemRegistryRef);

    MCAPI static void
    registerItems(struct cereal::ReflectionCtx&, class ItemRegistryRef, class BaseGameVersion const&, class Experiments const&);

    MCAPI static void serverInitCreativeItemsCallback(
        class ItemRegistryRef,
        class ActorInfoRegistry*,
        class BlockDefinitionGroup*  blockDefinitionGroup,
        class CreativeItemRegistry*  creativeItemRegistry,
        bool                         isClient,
        class BaseGameVersion const& worldVersion,
        class Experiments const&     experiments
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _addCommandOnlyCategory(class CreativeItemRegistry* creativeItemRegistry, class ItemRegistryRef, class BaseGameVersion const&, class Experiments const&);

    MCAPI static void
    _addConstructionCategory(class CreativeItemRegistry* creativeItemRegistry, class ItemRegistryRef, class BaseGameVersion const&, class Experiments const&);

    MCAPI static void _addEquipmentCategory(
        class CreativeItemRegistry* creativeItemRegistry,
        class ItemRegistryRef,
        class BaseGameVersion const& worldVersion,
        class Experiments const&     experiments
    );

    MCAPI static void
    _addItemsCategory(class CreativeItemRegistry* creativeItemRegistry, class ItemRegistryRef, class BaseGameVersion const& worldVersion, class Experiments const&);

    MCAPI static void _addNatureCategory(
        class CreativeItemRegistry* creativeItemRegistry,
        class ItemRegistryRef,
        class BaseGameVersion const& worldVersion,
        class Experiments const&     experiments
    );

    // NOLINTEND
};
