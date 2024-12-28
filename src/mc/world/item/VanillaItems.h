#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class BaseGameVersion;
class BlockDefinitionGroup;
class CreativeItemRegistry;
class Experiments;
class HardcodedCreativeItemsHelper;
class ItemRegistryRef;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaItems {
public:
    // prevent constructor by default
    VanillaItems& operator=(VanillaItems const&);
    VanillaItems(VanillaItems const&);
    VanillaItems();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _addCommandOnlyCategory(::HardcodedCreativeItemsHelper& hardcodedCreativeItemsHelper, ::CreativeItemRegistry* creativeItemRegistry, ::ItemRegistryRef itemRegistry, ::BaseGameVersion const&, ::Experiments const&);

    MCAPI static void
    _addConstructionCategory(::HardcodedCreativeItemsHelper& hardcodedCreativeItemsHelper, ::CreativeItemRegistry* creativeItemRegistry, ::ItemRegistryRef itemRegistry, ::BaseGameVersion const&, ::Experiments const&);

    MCAPI static void
    _addEquipmentCategory(::HardcodedCreativeItemsHelper& hardcodedCreativeItemsHelper, ::CreativeItemRegistry* creativeItemRegistry, ::ItemRegistryRef itemRegistry, ::BaseGameVersion const&, ::Experiments const&);

    MCAPI static void
    _addItemsCategory(::HardcodedCreativeItemsHelper& hardcodedCreativeItemsHelper, ::CreativeItemRegistry* creativeItemRegistry, ::ItemRegistryRef itemRegistry, ::BaseGameVersion const& worldVersion, ::Experiments const&);

    MCAPI static void
    _addNatureCategory(::HardcodedCreativeItemsHelper& hardcodedCreativeItemsHelper, ::CreativeItemRegistry* creativeItemRegistry, ::ItemRegistryRef itemRegistry, ::BaseGameVersion const& worldVersion, ::Experiments const&);

    MCAPI static void registerHardCodedItemTags(::ItemRegistryRef itemRegistry);

    MCAPI static void registerItems(
        ::cereal::ReflectionCtx& ctx,
        ::ItemRegistryRef        itemRegistry,
        ::BaseGameVersion const& baseGameVersion,
        ::Experiments const&     experiments
    );

    MCAPI static void serverInitCreativeItemsCallback(
        ::ItemRegistryRef itemRegistry,
        ::ActorInfoRegistry*,
        ::BlockDefinitionGroup*  blockDefinitionGroup,
        ::CreativeItemRegistry*  creativeItemRegistry,
        bool                     isClient,
        ::BaseGameVersion const& worldVersion,
        ::Experiments const&     experiments
    );
    // NOLINTEND
};
