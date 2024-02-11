#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/VanillaBiomeTypes.h"

// auto generated inclusion list
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/entity/gamerefs_entity/IEntityRegistryOwner.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BiomeRegistry : public ::IEntityRegistryOwner {
public:
    // BiomeRegistry inner types declare
    // clang-format off
    struct LoadedBiome;
    // clang-format on

    // BiomeRegistry inner types define
    struct LoadedBiome {
    public:
        // prevent constructor by default
        LoadedBiome& operator=(LoadedBiome const&);
        LoadedBiome(LoadedBiome const&);
        LoadedBiome();

    public:
        // NOLINTBEGIN
        // symbol: ??1LoadedBiome@BiomeRegistry@@QEAA@XZ
        MCAPI ~LoadedBiome();

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

    // vIndex: 1, symbol: ?getEntityRegistry@BiomeRegistry@@UEBA?AV?$StackRefResult@$$CBVEntityRegistry@@@@XZ
    virtual class StackRefResult<class EntityRegistry const> getEntityRegistry() const;

    // vIndex: 2, symbol: ?getEntityRegistry@BiomeRegistry@@UEAA?AV?$StackRefResult@VEntityRegistry@@@@XZ
    virtual class StackRefResult<class EntityRegistry> getEntityRegistry();

    // symbol: ??0BiomeRegistry@@QEAA@XZ
    MCAPI BiomeRegistry();

    // symbol: ?forEachBiome@BiomeRegistry@@QEBAXV?$function@$$A6AXAEAVBiome@@@Z@std@@@Z
    MCAPI void forEachBiome(std::function<void(class Biome&)> callback) const;

    // symbol:
    // ?getBiomesInDimension@BiomeRegistry@@QEBA?AV?$vector@PEBVBiome@@V?$allocator@PEBVBiome@@@std@@@std@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI std::vector<class Biome const*> getBiomesInDimension(DimensionType) const;

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
    MCAPI class Biome* lookupByHash(class HashedString const& hash) const;

    // symbol: ?lookupById@BiomeRegistry@@QEBAPEAVBiome@@H@Z
    MCAPI class Biome* lookupById(int id) const;

    // symbol:
    // ?lookupByName@BiomeRegistry@@QEBAPEAVBiome@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Biome* lookupByName(std::string const& name) const;

    // symbol:
    // ?registerBiome@BiomeRegistry@@QEAAAEAVBiome@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Biome& registerBiome(std::string const& name);

    // symbol:
    // ?upgradeJsonComponents@BiomeRegistry@@SA?AULoadedBiome@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@AEBVSemVersion@@@Z
    MCAPI static struct BiomeRegistry::LoadedBiome
    upgradeJsonComponents(std::string const&, class Json::Value&, class SemVersion const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initTagRegistry@BiomeRegistry@@AEAAXXZ
    MCAPI void _initTagRegistry();

    // symbol: ?_save@BiomeRegistry@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _save(class LevelStorage&);

    // symbol:
    // ?_loadSingleBiome@BiomeRegistry@@CA?AULoadedBiome@1@AEAVResourcePackManager@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI static struct BiomeRegistry::LoadedBiome
    _loadSingleBiome(class ResourcePackManager&, std::string const&, bool);

    // NOLINTEND
};
