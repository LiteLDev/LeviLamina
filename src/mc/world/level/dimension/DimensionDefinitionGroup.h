#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/dimension/DimensionDocument.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
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

    public:
        // prevent constructor by default
        DimensionDefinition& operator=(DimensionDefinition const&);
        DimensionDefinition(DimensionDefinition const&);
        DimensionDefinition();
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

    MCAPI DimensionDefinitionGroup(
        ::cereal::ReflectionCtx&     ctx,
        ::ResourcePackManager* const rpm,
        bool                         cavesAndCliffsExperimentIsEnabled
    );

    MCAPI bool _checkValidDimensionBounds(::DimensionDocument::Dimension const& dimension);

    MCAPI ::std::optional<::DimensionDefinitionGroup::DimensionDefinition>
    getDimensionDefinition(::std::string const& dimensionName) const;

    MCAPI bool isEmpty() const;

    MCAPI bool
    tryAddDimensionDefinitionByString(::cereal::ReflectionCtx& ctx, ::std::string const& dimensionDefinitionJSON);

    MCAPI ~DimensionDefinitionGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DimensionDefinitionGroup const&);

    MCAPI void*
    $ctor(::cereal::ReflectionCtx& ctx, ::ResourcePackManager* const rpm, bool cavesAndCliffsExperimentIsEnabled);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
