#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/world/item/registry/ItemVersion.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemRegistry {
public:
    // ItemRegistry inner types declare
    // clang-format off
    struct ItemAlias;
    struct ItemHashAlias;
    // clang-format on

    // ItemRegistry inner types define
    struct ItemAlias {
    public:
        // prevent constructor by default
        ItemAlias& operator=(ItemAlias const&);
        ItemAlias(ItemAlias const&);
        ItemAlias();

    public:
        // NOLINTBEGIN
        MCAPI ~ItemAlias();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct ItemHashAlias {
    public:
        // prevent constructor by default
        ItemHashAlias& operator=(ItemHashAlias const&);
        ItemHashAlias(ItemHashAlias const&);
        ItemHashAlias();

    public:
        // NOLINTBEGIN
        MCAPI ~ItemHashAlias();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ItemRegistry& operator=(ItemRegistry const&);
    ItemRegistry(ItemRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI ItemRegistry();

    MCAPI ~ItemRegistry();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _loadItemData(
        class ResourcePackManager& resourcePackManager,
        std::function<
            void(class WeakPtr<class Item>&, class Json::Value const&, class SemVersion const&, bool, class Experiments const&)>
                                 initCallback,
        class Experiments const& experiments,
        ::ItemVersion            itemVersion
    );

    MCAPI void _loadItemDefinition(
        class Json::Value const& root,
        bool                     isBaseGamePack,
        std::function<
            void(class WeakPtr<class Item>&, class Json::Value const&, class SemVersion const&, bool, class Experiments const&)>
                                      initCallback,
        class Experiments const&      experiments,
        ::ItemVersion                 itemVersion,
        ::PackType                    packType,
        class SemVersion const&       documentVersion,
        struct cereal::ReflectionCtx& ctx
    );

    MCAPI std::string _parseItemDefinition(
        std::string jsonData,
        bool        isBaseGamePack,
        std::function<
            void(class WeakPtr<class Item>&, class Json::Value const&, class SemVersion const&, bool, class Experiments const&)>
                                      initCallback,
        class Experiments const&      experiments,
        ::ItemVersion                 itemVersion,
        ::PackType                    packType,
        class Core::Path const&       filenameWithExtension,
        struct cereal::ReflectionCtx& ctx
    );

    MCAPI void addItemToTagMap(class Item const& item);

    MCAPI void clearItemAndCreativeItemRegistry();

    MCAPI void digestServerItemComponents(std::vector<std::pair<std::string, class CompoundTag>> const& items);

    MCAPI void finishedRegistration();

    MCAPI std::vector<std::reference_wrapper<class HashedString const>> const&
          getComplexAliasSplitNames(class HashedString const& oldName) const;

    MCAPI class WeakPtr<class Item> getItem(class HashedString const& id);

    MCAPI class WeakPtr<class Item> getItem(short id);

    MCAPI std::pair<class HashedString, int> getNameFromAlias(class HashedString const& name, int aux) const;

    MCAPI class ItemRegistryRef getRef();

    MCAPI void init(
        struct cereal::ReflectionCtx& ctx,
        class Experiments const&      experiments,
        class BaseGameVersion const&  baseGameVersion,
        class ResourcePackManager*    rpm
    );

    MCAPI void initCreativeItemsServer(
        class ActorInfoRegistry*    actorInfoRegistry,
        class BlockDefinitionGroup* blockDefinitionGroup,
        bool                        isClient,
        class Experiments const&    experiments,
        std::function<
            void(class ItemRegistryRef, class ActorInfoRegistry*, class BlockDefinitionGroup*, class CreativeItemRegistry*, bool, class BaseGameVersion const&, class Experiments const&)>
            registerCallback
    );

    MCAPI void initServerData(
        class ResourcePackManager& resourcePackManager,
        class Experiments const&   experiments,
        ::ItemVersion              itemVersion
    );

    MCAPI class WeakPtr<class Item> lookupByName(class HashedString const& inString) const;

    MCAPI class WeakPtr<class Item> lookupByName(int& inOutItemAux, std::string_view inString) const;

    MCAPI class WeakPtr<class Item> lookupByNameNoAlias(std::string_view inString) const;

    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(int& inOutItemAux, class HashedString const& fullName) const;

    MCAPI void registerAlias(
        class HashedString const&    alias,
        class HashedString const&    name,
        class BaseGameVersion const& fromVersion
    );

    MCAPI class WeakPtr<class Item>
    registerComplexAlias(class HashedString const& alias, struct ItemRegistryComplexAlias const& complexAlias);

    MCAPI void registerItem(class SharedPtr<class Item> item);

    MCAPI void registerLegacyID(class HashedString const& name, short id);

    MCAPI void registerLegacyMapping(
        class HashedString const&    alias,
        class HashedString const&    name,
        class BaseGameVersion const& fromVersion
    );

    MCAPI void unregisterItem(class HashedString const& itemName);

    MCAPI std::vector<std::string>
          validateServerItemComponents(std::vector<std::pair<std::string, class CompoundTag>> const& items);

    MCAPI static short getBlockItemId(class Block const& block);

    MCAPI static short getBlockItemId(class BlockLegacy const& block);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static std::string_view const& MINECRAFT_NAMESPACE();

    // NOLINTEND
};
