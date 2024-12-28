#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class BaseGameVersion;
class Block;
class BlockDefinitionGroup;
class BlockLegacy;
class CompoundTag;
class CreativeItemRegistry;
class Experiments;
class HashedString;
class IPackLoadContext;
class Item;
class ItemRegistryRef;
class ResourcePackManager;
struct ItemParseContext;
struct ItemRegistryComplexAlias;
namespace Core { class Path; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemRegistry : public ::std::enable_shared_from_this<::ItemRegistry> {
public:
    // ItemRegistry inner types declare
    // clang-format off
    struct ItemAlias;
    struct ItemHashAlias;
    struct ItemLoadResult;
    struct LoadedItemAsset;
    // clang-format on

    // ItemRegistry inner types define
    struct LoadedItemAsset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk3d8ae0;
        ::ll::UntypedStorage<8, 112> mUnkb0fb71;
        ::ll::UntypedStorage<8, 16>  mUnk48eade;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadedItemAsset& operator=(LoadedItemAsset const&);
        LoadedItemAsset(LoadedItemAsset const&);
        LoadedItemAsset();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~LoadedItemAsset();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct ItemAlias {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48>  mUnk2254ff;
        ::ll::UntypedStorage<8, 120> mUnk541114;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemAlias& operator=(ItemAlias const&);
        ItemAlias(ItemAlias const&);
        ItemAlias();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ItemAlias();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct ItemHashAlias {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnk627c3a;
        ::ll::UntypedStorage<8, 120> mUnk99d309;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemHashAlias& operator=(ItemHashAlias const&);
        ItemHashAlias(ItemHashAlias const&);
        ItemHashAlias();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ItemHashAlias();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct ItemLoadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 152> mUnkbbb797;
        ::ll::UntypedStorage<8, 32>  mUnkb57c73;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemLoadResult& operator=(ItemLoadResult const&);
        ItemLoadResult(ItemLoadResult const&);
        ItemLoadResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ItemLoadResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk5b7196;
    ::ll::UntypedStorage<8, 24>  mUnk12efcf;
    ::ll::UntypedStorage<8, 64>  mUnk8c8c84;
    ::ll::UntypedStorage<8, 64>  mUnkdcbe8c;
    ::ll::UntypedStorage<8, 64>  mUnk2d62da;
    ::ll::UntypedStorage<8, 64>  mUnkf8b308;
    ::ll::UntypedStorage<8, 64>  mUnkc47a3b;
    ::ll::UntypedStorage<8, 64>  mUnk40fcc7;
    ::ll::UntypedStorage<8, 64>  mUnkbbed37;
    ::ll::UntypedStorage<8, 64>  mUnkdcc53e;
    ::ll::UntypedStorage<8, 64>  mUnk267d32;
    ::ll::UntypedStorage<2, 2>   mUnk55b84d;
    ::ll::UntypedStorage<8, 24>  mUnk18da5d;
    ::ll::UntypedStorage<8, 64>  mUnk2474ae;
    ::ll::UntypedStorage<8, 64>  mUnk658173;
    ::ll::UntypedStorage<1, 1>   mUnkfead93;
    ::ll::UntypedStorage<1, 1>   mUnkf3fce1;
    ::ll::UntypedStorage<8, 64>  mUnkb9764d;
    ::ll::UntypedStorage<8, 8>   mUnk672d95;
    ::ll::UntypedStorage<8, 16>  mUnke1379d;
    ::ll::UntypedStorage<8, 24>  mUnk1383da;
    ::ll::UntypedStorage<8, 120> mUnke36140;
    ::ll::UntypedStorage<1, 1>   mUnke4ff6a;
    ::ll::UntypedStorage<8, 16>  mUnkbd3231;
    ::ll::UntypedStorage<8, 8>   mUnk677d0c;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRegistry& operator=(ItemRegistry const&);
    ItemRegistry(ItemRegistry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemRegistry();

    MCAPI void
    _loadItemDefinition(::ItemRegistry::LoadedItemAsset const& loadedItemAsset, ::ItemParseContext& parseContext);

    MCAPI void addItemToTagMap(::Item const& item);

    MCAPI void clearItemAndCreativeItemRegistry();

    MCAPI void digestServerItemComponents(::std::vector<::std::pair<::std::string, ::CompoundTag>> const& items);

    MCAPI void finishedRegistration(::Experiments const& experiments);

    MCAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasSplitNames(::HashedString const& oldName) const;

    MCAPI ::WeakPtr<::Item> getItem(short id);

    MCAPI ::WeakPtr<::Item> getItem(::HashedString const& id);

    MCAPI ::std::pair<::HashedString, int> getNameFromAlias(::HashedString const& name, int aux) const;

    MCAPI void
    init(::Experiments const& experiments, ::BaseGameVersion const& baseGameVersion, ::ResourcePackManager* rpm);

    MCAPI void initCreativeItemsServer(
        ::ActorInfoRegistry*    actorInfoRegistry,
        ::BlockDefinitionGroup* blockDefinitionGroup,
        bool                    isClient,
        ::Experiments const&    experiments,
        ::std::function<
            void(::ItemRegistryRef, ::ActorInfoRegistry*, ::BlockDefinitionGroup*, ::CreativeItemRegistry*, bool, ::BaseGameVersion const&, ::Experiments const&)>
            registerCallback
    );

    MCAPI bool isComplexAlias(::HashedString const& oldName) const;

    MCAPI ::WeakPtr<::Item> lookupByName(::HashedString const& inString) const;

    MCAPI ::WeakPtr<::Item> lookupByName(int& inOutItemAux, ::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::std::string_view inString) const;

    MCAPI ::WeakPtr<::Item> lookupByNameNoParsing(int& inOutItemAux, ::HashedString const& fullName) const;

    MCAPI void
    registerAlias(::HashedString const& alias, ::HashedString const& name, ::BaseGameVersion const& fromVersion);

    MCAPI ::WeakPtr<::Item>
    registerComplexAlias(::HashedString const& alias, ::ItemRegistryComplexAlias const& complexAlias);

    MCAPI void registerItem(::SharedPtr<::Item> item);

    MCAPI void registerLegacyID(::HashedString const& name, short id);

    MCAPI void registerLegacyMapping(
        ::HashedString const&    alias,
        ::HashedString const&    name,
        ::BaseGameVersion const& fromVersion
    );

    MCAPI void setCheckForItemWorldCompatibility(bool value);

    MCAPI void unregisterItem(::HashedString const& itemName);

    MCAPI ::std::vector<::std::string>
    validateServerItemComponents(::std::vector<::std::pair<::std::string, ::CompoundTag>> const& items);

    MCAPI ~ItemRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ItemRegistry::LoadedItemAsset> _loadAllItemAssets(
        ::ResourcePackManager const&   resourcePackManager,
        ::Experiments const&           experiments,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI static ::ItemRegistry::ItemLoadResult _tryLoadItemAsset(
        ::std::string                         jsonData,
        ::std::shared_ptr<::IPackLoadContext> packLoadContext,
        ::Core::Path const&                   filenameWithExtension,
        ::cereal::ReflectionCtx const&        ctx
    );

    MCAPI static short getBlockItemId(::Block const& block);

    MCAPI static short getBlockItemId(::BlockLegacy const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool const& LOG_CREATIVE_ITEM_REGISTRY_DURING_INIT();

    MCAPI static ::std::string_view const& MINECRAFT_NAMESPACE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
