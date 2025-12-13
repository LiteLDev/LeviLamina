#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
class DimensionDataLoader;
class IMinecraftEventing;
class ResourcePackManager;
namespace SharedTypes::v1_21_60::DimensionDefinition { struct DimensionDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DimensionDefinitionGroup {
public:
    // DimensionDefinitionGroup inner types declare
    // clang-format off
    struct DimensionDefinition;
    // clang-format on

    // DimensionDefinitionGroup inner types define
    struct DimensionDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>             mHeightMinimum;
        ::ll::TypedStorage<4, 4, int>             mHeightMaximum;
        ::ll::TypedStorage<4, 4, ::GeneratorType> mGeneratorType;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::DimensionDefinitionGroup::DimensionDefinition>>
        mDimensionDefinitions;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionDefinitionGroup& operator=(DimensionDefinitionGroup const&);
    DimensionDefinitionGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DimensionDefinitionGroup(::DimensionDefinitionGroup const&);

    MCAPI DimensionDefinitionGroup(::DimensionDefinitionGroup&&);

    MCAPI DimensionDefinitionGroup(
        ::cereal::ReflectionCtx const& ctx,
        ::ResourcePackManager* const   rpm,
        ::IMinecraftEventing&          eventing
    );

    MCAPI ::Puv::LoadResult<::SharedTypes::v1_21_60::DimensionDefinition::DimensionDocument>
    tryAddDimensionDefinitionByString(
        ::std::string const&  dimensionDefinitionJSON,
        ::DimensionDataLoader dimensionLoader
    );

    MCAPI ~DimensionDefinitionGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DimensionDefinitionGroup const&);

    MCAPI void* $ctor(::DimensionDefinitionGroup&&);

    MCAPI void*
    $ctor(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager* const rpm, ::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
