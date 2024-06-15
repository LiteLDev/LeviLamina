#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Json { class Value; }
// clang-format on

class BiomeRegistry : public ::Bedrock::EnableNonOwnerReferences {
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

    // symbol: ??0BiomeRegistry@@QEAA@XZ
    MCAPI BiomeRegistry();

    // symbol: ?forEachBiome@BiomeRegistry@@QEBAXV?$function@$$A6AXAEBVBiome@@@Z@std@@@Z
    MCAPI void forEachBiome(std::function<void(class Biome const&)> callback) const;

    // symbol: ?forEachNonConstBiome@BiomeRegistry@@QEAAXV?$function@$$A6AXAEAVBiome@@@Z@std@@@Z
    MCAPI void forEachNonConstBiome(std::function<void(class Biome&)>);

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

    // symbol: ?_save@BiomeRegistry@@AEBAXAEAVLevelStorage@@@Z
    MCAPI void _save(class LevelStorage&) const;

    // symbol:
    // ?_loadSingleBiome@BiomeRegistry@@CA?AULoadedBiome@1@AEAVResourcePackManager@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI static struct BiomeRegistry::LoadedBiome
    _loadSingleBiome(class ResourcePackManager&, std::string const&, bool);

    // NOLINTEND
};
