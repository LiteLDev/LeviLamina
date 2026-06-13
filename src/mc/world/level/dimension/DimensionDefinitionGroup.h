#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/dimension/DimensionType.h"

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
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
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
    DimensionDefinitionGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DimensionDefinitionGroup(
        ::cereal::ReflectionCtx const& ctx,
        ::ResourcePackManager* const   rpm,
        ::IMinecraftEventing&          eventing
    );

#ifdef LL_PLAT_C
    MCAPI void forEachDimensionDefinition(
        ::std::function<void(::std::string const&, ::DimensionDefinitionGroup::DimensionDefinition const&)> callback
    ) const;
#endif

    MCAPI ::std::optional<::DimensionDefinitionGroup::DimensionDefinition>
    getDimensionDefinition(::std::string const& dimensionName) const;

    MCAPI bool isEmpty() const;

    MCAPI bool tryAddDimensionDefinition(
        ::std::string const&                                   dimensionName,
        ::DimensionDefinitionGroup::DimensionDefinition const& dimensionDefinition
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
    MCAPI void*
    $ctor(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager* const rpm, ::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
