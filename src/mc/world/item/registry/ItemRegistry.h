#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharedPtr.h"
#include "mc/common/wrapper/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemRegistry {
public:
    // ItemRegistry inner types declare
    // clang-format off
    struct ComplexAlias;
    struct ItemAlias;
    struct ItemHashAlias;
    // clang-format on

    // ItemRegistry inner types define
    struct ComplexAlias {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRY_COMPLEXALIAS
    public:
        ComplexAlias& operator=(ComplexAlias const&) = delete;
        ComplexAlias(ComplexAlias const&)            = delete;
        ComplexAlias()                               = delete;
#endif

    public:
        /**
         * @symbol ??1ComplexAlias\@ItemRegistry\@\@QEAA\@XZ
         */
        MCAPI ~ComplexAlias();
    };

    struct ItemAlias {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRY_ITEMALIAS
    public:
        ItemAlias& operator=(ItemAlias const&) = delete;
        ItemAlias(ItemAlias const&)            = delete;
        ItemAlias()                            = delete;
#endif

    public:
        /**
         * @symbol ??1ItemAlias\@ItemRegistry\@\@QEAA\@XZ
         */
        MCAPI ~ItemAlias();
    };

    struct ItemHashAlias {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRY_ITEMHASHALIAS
    public:
        ItemHashAlias& operator=(ItemHashAlias const&) = delete;
        ItemHashAlias(ItemHashAlias const&)            = delete;
        ItemHashAlias()                                = delete;
#endif

    public:
        /**
         * @symbol ??1ItemHashAlias\@ItemRegistry\@\@QEAA\@XZ
         */
        MCAPI ~ItemHashAlias();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRY
public:
    ItemRegistry& operator=(ItemRegistry const&) = delete;
    ItemRegistry(ItemRegistry const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ItemRegistry\@\@QEAA\@XZ
     */
    MCAPI ItemRegistry();
    /**
     * @symbol ??1ItemRegistry\@\@QEAA\@XZ
     */
    MCAPI ~ItemRegistry();
    /**
     * @symbol ?MINECRAFT_NAMESPACE\@ItemRegistry\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const MINECRAFT_NAMESPACE;

    // private:
    /**
     * @symbol
     * ?_loadItemData\@ItemRegistry\@\@AEAAXAEAVResourcePackManager\@\@V?$function\@$$A6AXAEAV?$WeakPtr\@VItem\@\@\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z\@std\@\@AEBVExperiments\@\@W4ItemVersion\@\@\@Z
     */
    MCAPI void _loadItemData(
        class ResourcePackManager&,
        class std::function<
            void(class WeakPtr<class Item>&, class Json::Value&, class SemVersion const&, bool, class Experiments const&)>,
        class Experiments const&,
        enum class ItemVersion
    );
    /**
     * @symbol
     * ?_loadItemDefinition\@ItemRegistry\@\@AEAAXAEAVValue\@Json\@\@_NV?$function\@$$A6AXAEAV?$WeakPtr\@VItem\@\@\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z\@std\@\@AEBVExperiments\@\@W4ItemVersion\@\@W4PackType\@\@\@Z
     */
    MCAPI void _loadItemDefinition(
        class Json::Value&,
        bool,
        class std::function<
            void(class WeakPtr<class Item>&, class Json::Value&, class SemVersion const&, bool, class Experiments const&)>,
        class Experiments const&,
        enum class ItemVersion,
        enum class PackType
    );
    /**
     * @symbol
     * ?_parseItemDefinition\@ItemRegistry\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@_NV?$function\@$$A6AXAEAV?$WeakPtr\@VItem\@\@\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z\@3\@AEBVExperiments\@\@W4ItemVersion\@\@W4PackType\@\@\@Z
     */
    MCAPI std::string _parseItemDefinition(
        std::string const&,
        bool,
        class std::function<
            void(class WeakPtr<class Item>&, class Json::Value&, class SemVersion const&, bool, class Experiments const&)>,
        class Experiments const&,
        enum class ItemVersion,
        enum class PackType
    );
    /**
     * @symbol ?addItemToTagMap\@ItemRegistry\@\@AEAAXAEBVItem\@\@\@Z
     */
    MCAPI void addItemToTagMap(class Item const&);
    /**
     * @symbol ?clearItemAndCreativeItemRegistry\@ItemRegistry\@\@AEAAXXZ
     */
    MCAPI void clearItemAndCreativeItemRegistry();
    /**
     * @symbol
     * ?digestServerItemComponents\@ItemRegistry\@\@AEAAXAEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void digestServerItemComponents(std::vector<struct std::pair<std::string, class CompoundTag>> const&);
    /**
     * @symbol ?finishedRegistration\@ItemRegistry\@\@AEAAXXZ
     */
    MCAPI void finishedRegistration();
    /**
     * @symbol ?getItem\@ItemRegistry\@\@AEAA?AV?$WeakPtr\@VItem\@\@\@\@F\@Z
     */
    MCAPI class WeakPtr<class Item> getItem(short);
    /**
     * @symbol ?getItem\@ItemRegistry\@\@AEAA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> getItem(class HashedString const&);
    /**
     * @symbol ?getNameFromAlias\@ItemRegistry\@\@AEBA?AU?$pair\@VHashedString\@\@H\@std\@\@AEBVHashedString\@\@H\@Z
     */
    MCAPI struct std::pair<class HashedString, int> getNameFromAlias(class HashedString const&, int) const;
    /**
     * @symbol ?getRef\@ItemRegistry\@\@AEAA?AVItemRegistryRef\@\@XZ
     */
    MCAPI class ItemRegistryRef getRef();
    /**
     * @symbol ?init\@ItemRegistry\@\@AEAAXAEBVExperiments\@\@AEBVBaseGameVersion\@\@PEAVResourcePackManager\@\@\@Z
     */
    MCAPI void init(class Experiments const&, class BaseGameVersion const&, class ResourcePackManager*);
    /**
     * @symbol
     * ?initCreativeItemsServer\@ItemRegistry\@\@AEAAXPEAVActorInfoRegistry\@\@PEAVBlockDefinitionGroup\@\@_NAEBVExperiments\@\@V?$function\@$$A6AXVItemRegistryRef\@\@PEAVActorInfoRegistry\@\@PEAVBlockDefinitionGroup\@\@PEAVCreativeItemRegistry\@\@_NAEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    initCreativeItemsServer(class ActorInfoRegistry*, class BlockDefinitionGroup*, bool, class Experiments const&, class std::function<void(class ItemRegistryRef, class ActorInfoRegistry*, class BlockDefinitionGroup*, class CreativeItemRegistry*, bool, class BaseGameVersion const&, class Experiments const&)>);
    /**
     * @symbol ?initServerData\@ItemRegistry\@\@AEAAXAEAVResourcePackManager\@\@AEBVExperiments\@\@W4ItemVersion\@\@\@Z
     */
    MCAPI void initServerData(class ResourcePackManager&, class Experiments const&, enum class ItemVersion);
    /**
     * @symbol ?isComponentBasedItemSchema\@ItemRegistry\@\@AEAA_NAEBVSemVersion\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI bool isComponentBasedItemSchema(class SemVersion const&, class Json::Value const&);
    /**
     * @symbol ?lookupByName\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByName(class HashedString const&) const;
    /**
     * @symbol
     * ?lookupByName\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@AEAHV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class WeakPtr<class Item>
    lookupByName(int&, class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol
     * ?lookupByNameNoAlias\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class WeakPtr<class Item>
        lookupByNameNoAlias(class std::basic_string_view<char, struct std::char_traits<char>>) const;
    /**
     * @symbol ?lookupByNameNoParsing\@ItemRegistry\@\@AEBA?AV?$WeakPtr\@VItem\@\@\@\@AEAHAEBVHashedString\@\@\@Z
     */
    MCAPI class WeakPtr<class Item> lookupByNameNoParsing(int&, class HashedString const&) const;
    /**
     * @symbol ?registerAlias\@ItemRegistry\@\@AEAAXAEBVHashedString\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void registerAlias(class HashedString const&, class HashedString const&, class BaseGameVersion const&);
    /**
     * @symbol
     * ?registerComplexAlias\@ItemRegistry\@\@AEAA?AV?$WeakPtr\@VItem\@\@\@\@AEBVHashedString\@\@AEBUComplexAlias\@1\@\@Z
     */
    MCAPI class WeakPtr<class Item>
    registerComplexAlias(class HashedString const&, struct ItemRegistry::ComplexAlias const&);
    /**
     * @symbol ?registerItem\@ItemRegistry\@\@AEAAXV?$SharedPtr\@VItem\@\@\@\@\@Z
     */
    MCAPI void registerItem(class SharedPtr<class Item>);
    /**
     * @symbol ?registerLegacyID\@ItemRegistry\@\@AEAAXAEBVHashedString\@\@F\@Z
     */
    MCAPI void registerLegacyID(class HashedString const&, short);
    /**
     * @symbol ?registerLegacyMapping\@ItemRegistry\@\@AEAAXAEBVHashedString\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void
    registerLegacyMapping(class HashedString const&, class HashedString const&, class BaseGameVersion const&);
    /**
     * @symbol ?unregisterItem\@ItemRegistry\@\@AEAAXAEBVHashedString\@\@\@Z
     */
    MCAPI void unregisterItem(class HashedString const&);
    /**
     * @symbol
     * ?validateServerItemComponents\@ItemRegistry\@\@AEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTag\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI std::vector<std::string>
          validateServerItemComponents(std::vector<struct std::pair<std::string, class CompoundTag>> const&);

private:
};
