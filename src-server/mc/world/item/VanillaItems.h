#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockDefinitionGroup;
class CreativeItemRegistry;
class Experiments;
class IMinecraftEventing;
class ItemRegistryRef;
class LinkedAssetValidator;
class ResourcePackManager;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaItems {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void registerHardCodedItemTags(::ItemRegistryRef itemRegistry);

    MCAPI static void registerItems(::cereal::ReflectionCtx& ctx, ::ItemRegistryRef itemRegistry, ::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);

    MCAPI static void serverInitCreativeItemsCallback(::ItemRegistryRef itemRegistry, ::BlockDefinitionGroup const& blockDefinitionGroup, ::CreativeItemRegistry* creativeItemRegistry, ::BaseGameVersion const& worldVersion, ::Experiments const& experiments, ::ResourcePackManager const& resourcePackManager, ::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator, ::IMinecraftEventing& eventing);
    // NOLINTEND

};
