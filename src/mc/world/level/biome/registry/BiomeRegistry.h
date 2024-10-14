#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"

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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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

    MCAPI void forEachNonConstBiome(std::function<void(class Biome&)> callback);

    MCAPI std::vector<class Biome const*> getBiomesInDimension(DimensionType type) const;

    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>&
    getTagRegistry();

    MCAPI class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&
    getTagRegistry() const;

    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager& levelStorageManager);

    MCAPI bool isRegistrationFinished() const;

    MCAPI class Biome* lookupByHash(class HashedString const& hash) const;

    MCAPI class Biome* lookupById(int id) const;

    MCAPI class Biome* lookupByName(std::string const& name) const;

    MCAPI class Biome& registerBiome(std::string const& name);

    MCAPI static struct BiomeRegistry::LoadedBiome upgradeJsonComponents(
        std::string const&      biomeName,
        class Json::Value&      parsedJson,
        class SemVersion const& engineVersion
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initTagRegistry();

    MCAPI void _save(class LevelStorage& levelStorage) const;

    MCAPI static struct BiomeRegistry::LoadedBiome
    _loadSingleBiome(class ResourcePackManager& loader, std::string const& biomeName, bool loadFromPacks);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
