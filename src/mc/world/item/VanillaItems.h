#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockDefinitionGroup;
class CreativeItemRegistry;
class Experiments;
class ItemRegistryRef;
class ResourcePackManager;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaItems {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void registerHardCodedItemTags(::ItemRegistryRef itemRegistry);

    MCNAPI static void registerItems(
        ::cereal::ReflectionCtx& ctx,
        ::ItemRegistryRef        itemRegistry,
        ::BaseGameVersion const& baseGameVersion,
        ::Experiments const&     experiments
    );

    MCNAPI static void serverInitCreativeItemsCallback(
        ::ItemRegistryRef              itemRegistry,
        ::BlockDefinitionGroup const&  blockDefinitionGroup,
        ::CreativeItemRegistry*        creativeItemRegistry,
        ::BaseGameVersion const&       worldVersion,
        ::Experiments const&           experiments,
        ::ResourcePackManager const&   resourcePackManager,
        ::cereal::ReflectionCtx const& ctx
    );
    // NOLINTEND
};
