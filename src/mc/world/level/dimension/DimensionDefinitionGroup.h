#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/GeneratorType.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionDocument.h"

// auto generated forward declare list
// clang-format off
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
        int             mHeightMinimum; // this+0x0
        int             mHeightMaximum; // this+0x4
        ::GeneratorType mGeneratorType; // this+0x8
    };

public:
    std::map<std::string, DimensionDefinitionGroup::DimensionDefinition> mDimensionDefinitions;

public:
    // NOLINTBEGIN
    MCAPI DimensionDefinitionGroup(class DimensionDefinitionGroup const&);

    MCAPI DimensionDefinitionGroup(
        struct cereal::ReflectionCtx&    ctx,
        class ResourcePackManager* const rpm,
        bool                             cavesAndCliffsExperimentIsEnabled
    );

    MCAPI std::optional<struct DimensionDefinitionGroup::DimensionDefinition>
          getDimensionDefinition(std::string const& dimensionName) const;

    MCAPI bool isEmpty() const;

    MCAPI bool
    tryAddDimensionDefinitionByString(struct cereal::ReflectionCtx& ctx, std::string const& dimensionDefinitionJSON);

    MCAPI ~DimensionDefinitionGroup();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _checkValidDimensionBounds(struct DimensionDocument::Dimension const& dimension);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        struct cereal::ReflectionCtx&    ctx,
        class ResourcePackManager* const rpm,
        bool                             cavesAndCliffsExperimentIsEnabled
    );

    MCAPI void* ctor$(class DimensionDefinitionGroup const&);

    MCAPI void dtor$();

    // NOLINTEND
};
