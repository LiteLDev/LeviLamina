#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/OwnerPtrFactory.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BiomeComponentFactory;
class BiomeRegistry;
class BlockPalette;
class Dimension;
class FeatureRegistry;
class FeatureTypeFactory;
class ILevel;
class JigsawStructureRegistry;
class Scheduler;
class StructureManager;
class StructureSpawnRegistry;
class SurfaceBuilderRegistry;
// clang-format on

class IWorldRegistriesProvider {
public:
    // prevent constructor by default
    IWorldRegistriesProvider& operator=(IWorldRegistriesProvider const&);
    IWorldRegistriesProvider(IWorldRegistriesProvider const&);
    IWorldRegistriesProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IWorldRegistriesProvider() = default;

    // vIndex: 2
    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;

    // vIndex: 1
    virtual ::BiomeRegistry& getBiomeRegistry() = 0;

    // vIndex: 4
    virtual ::BlockPalette const& getBlockPalette() const = 0;

    // vIndex: 3
    virtual ::BlockPalette& getBlockPalette() = 0;

    // vIndex: 6
    virtual ::FeatureRegistry const& getFeatureRegistry() const = 0;

    // vIndex: 5
    virtual ::FeatureRegistry& getFeatureRegistry() = 0;

    // vIndex: 8
    virtual ::FeatureTypeFactory const& getFeatureTypeFactory() const = 0;

    // vIndex: 7
    virtual ::FeatureTypeFactory& getFeatureTypeFactory() = 0;

    // vIndex: 10
    virtual ::JigsawStructureRegistry const& getJigsawStructureRegistry() const = 0;

    // vIndex: 9
    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() = 0;

    // vIndex: 12
    virtual ::StructureSpawnRegistry const& getStructureSpawnRegistry() const = 0;

    // vIndex: 11
    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() = 0;

    // vIndex: 14
    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const getStructureManager() const = 0;

    // vIndex: 13
    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager() = 0;

    // vIndex: 16
    virtual ::BiomeComponentFactory const& getBiomeComponentFactory() const = 0;

    // vIndex: 15
    virtual ::BiomeComponentFactory& getBiomeComponentFactory() = 0;

    // vIndex: 18
    virtual ::SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const = 0;

    // vIndex: 17
    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() = 0;

    // vIndex: 20
    virtual ::OwnerPtrFactory<::Dimension, ::ILevel&, ::Scheduler&> const& getDimensionFactory() const = 0;

    // vIndex: 19
    virtual ::OwnerPtrFactory<::Dimension, ::ILevel&, ::Scheduler&>& getDimensionFactory() = 0;

    // vIndex: 21
    virtual ::ActorDefinitionGroup* getEntityDefinitions() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
