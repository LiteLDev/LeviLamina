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
        MCAPI ~LoadedBiome();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BiomeRegistry& operator=(BiomeRegistry const&);
    BiomeRegistry(BiomeRegistry const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeRegistry();

    MCAPI BiomeRegistry();

    MCAPI void forEachBiome(std::function<void(class Biome const&)> callback) const;

    MCAPI void forEachNonConstBiome(std::function<void(class Biome&)>);

    MCAPI std::vector<class Biome const*> getBiomesInDimension(DimensionType) const;

    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>&
    getTagRegistry();

    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&
    getTagRegistry() const;

    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    MCAPI bool isRegistrationFinished() const;

    MCAPI class Biome* lookupByHash(class HashedString const& hash) const;

    MCAPI class Biome* lookupById(int id) const;

    MCAPI class Biome* lookupByName(std::string const& name) const;

    MCAPI class Biome& registerBiome(std::string const& name);

    MCAPI static struct BiomeRegistry::LoadedBiome
    upgradeJsonComponents(std::string const&, class Json::Value&, class SemVersion const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initTagRegistry();

    MCAPI void _save(class LevelStorage&) const;

    MCAPI static struct BiomeRegistry::LoadedBiome
    _loadSingleBiome(class ResourcePackManager&, std::string const&, bool);

    // NOLINTEND
};
