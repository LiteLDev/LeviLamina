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
class JigsawStructureRegistry;
class StructureManager;
class StructureSpawnRegistry;
class SurfaceBuilderRegistry;
struct DerivedDimensionArguments;
// clang-format on

class IWorldRegistriesProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldRegistriesProvider() = default;

    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;

    virtual ::BiomeRegistry& getBiomeRegistry() = 0;

    virtual ::BlockPalette const& getBlockPalette() const = 0;

    virtual ::BlockPalette& getBlockPalette() = 0;

    virtual ::FeatureRegistry const& getFeatureRegistry() const = 0;

    virtual ::FeatureRegistry& getFeatureRegistry() = 0;

    virtual ::FeatureTypeFactory const& getFeatureTypeFactory() const = 0;

    virtual ::FeatureTypeFactory& getFeatureTypeFactory() = 0;

    virtual ::JigsawStructureRegistry const& getJigsawStructureRegistry() const = 0;

    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() = 0;

    virtual ::StructureSpawnRegistry const& getStructureSpawnRegistry() const = 0;

    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const getStructureManager() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager() = 0;

    virtual ::BiomeComponentFactory const& getBiomeComponentFactory() const = 0;

    virtual ::BiomeComponentFactory& getBiomeComponentFactory() = 0;

    virtual ::SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const = 0;

    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() = 0;

    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const& getDimensionFactory() const = 0;

    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& getDimensionFactory() = 0;

    virtual ::ActorDefinitionGroup* getEntityDefinitions() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
