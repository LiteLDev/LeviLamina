#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/VanillaBiomeTypes.h"

// auto generated inclusion list
#include "mc/common/InheritanceTree.h"
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/entity/gamerefs_entity/IEntityRegistryOwner.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BiomeRegistry : public ::IEntityRegistryOwner {
public:
    // BiomeRegistry inner types declare
    // clang-format off
    struct BiomeParent;
    // clang-format on

    // BiomeRegistry inner types define
    struct BiomeParent {
    public:
        // prevent constructor by default
        BiomeParent& operator=(BiomeParent const&);
        BiomeParent(BiomeParent const&);
        BiomeParent();

    public:
        // NOLINTBEGIN
        // symbol: ??1BiomeParent@BiomeRegistry@@QEAA@XZ
        MCAPI ~BiomeParent();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BiomeRegistry& operator=(BiomeRegistry const&);
    BiomeRegistry(BiomeRegistry const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BiomeRegistry@@UEAA@XZ
    virtual ~BiomeRegistry();

    // symbol: ?getEntityRegistry@BiomeRegistry@@UEBA?AV?$StackRefResultT@UEntityRegistryConstRefTraits@@@@XZ
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;

    // symbol: ?getEntityRegistry@BiomeRegistry@@UEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();

    // symbol: ??0BiomeRegistry@@QEAA@XZ
    MCAPI BiomeRegistry();

    // symbol: ?forEachBiome@BiomeRegistry@@QEBAXV?$function@$$A6AXAEAVBiome@@@Z@std@@@Z
    MCAPI void forEachBiome(std::function<void(class Biome&)> callback) const;

    // symbol:
    // ?getTagRegistry@BiomeRegistry@@QEAAAEAV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@XZ
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>&
    getTagRegistry();

    // symbol:
    // ?getTagRegistry@BiomeRegistry@@QEBAAEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@XZ
    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&
    getTagRegistry() const;

    // symbol: ?initializeWithLevelStorageManager@BiomeRegistry@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    // symbol: ?isRegistrationFinished@BiomeRegistry@@QEBA_NXZ
    MCAPI bool isRegistrationFinished() const;

    // symbol: ?lookupByHash@BiomeRegistry@@QEBAPEAVBiome@@AEBVHashedString@@@Z
    MCAPI class Biome* lookupByHash(class HashedString const&) const;

    // symbol: ?lookupById@BiomeRegistry@@QEBAPEAVBiome@@H@Z
    MCAPI class Biome* lookupById(int id) const;

    // symbol:
    // ?lookupByName@BiomeRegistry@@QEBAPEAVBiome@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Biome* lookupByName(std::string const& name) const;

    // symbol:
    // ?registerBiome@BiomeRegistry@@QEAAAEAVBiome@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Biome& registerBiome(std::string const& name);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addToInheritanceTree@BiomeRegistry@@AEAA_NAEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVValue@Json@@AEBVSemVersion@@@Z
    MCAPI bool
    _addToInheritanceTree(class InheritanceTree<struct BiomeRegistry::BiomeParent>&, std::string const&, class Json::Value&&, class SemVersion const&);

    // symbol:
    // ?_buildInheritanceTree@BiomeRegistry@@AEAA?AV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEAVResourcePackManager@@@Z
    MCAPI class InheritanceTree<struct BiomeRegistry::BiomeParent>
    _buildInheritanceTree(class ResourcePackManager& loader);

    // symbol: ?_initTagRegistry@BiomeRegistry@@AEAAXXZ
    MCAPI void _initTagRegistry();

    // symbol:
    // ?_loadSingleBiome@BiomeRegistry@@AEAA_NAEAVResourcePackManager@@AEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool _loadSingleBiome(
        class ResourcePackManager&                                loader,
        class InheritanceTree<struct BiomeRegistry::BiomeParent>& inheritance,
        std::string const&                                        biomeName
    );

    // symbol:
    // ?_mergeDataInheritance@BiomeRegistry@@AEAAXAEAVValue@Json@@AEAVSemVersion@@AEAV?$InheritanceTree@UBiomeParent@BiomeRegistry@@@@AEBUBiomeParent@1@@Z
    MCAPI void
    _mergeDataInheritance(class Json::Value&, class SemVersion&, class InheritanceTree<struct BiomeRegistry::BiomeParent>&, struct BiomeRegistry::BiomeParent const&);

    // symbol: ?_save@BiomeRegistry@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _save(class LevelStorage&);

    // NOLINTEND
};
