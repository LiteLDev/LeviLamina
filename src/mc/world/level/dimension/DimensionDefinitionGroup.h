#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        // prevent constructor by default
        DimensionDefinition& operator=(DimensionDefinition const&);
        DimensionDefinition(DimensionDefinition const&);
        DimensionDefinition();
    };

public:
    // prevent constructor by default
    DimensionDefinitionGroup& operator=(DimensionDefinitionGroup const&);
    DimensionDefinitionGroup();

public:
    // NOLINTBEGIN
    MCAPI DimensionDefinitionGroup(class DimensionDefinitionGroup const&);

    MCAPI DimensionDefinitionGroup(struct cereal::ReflectionCtx&, class ResourcePackManager* const, bool);

    MCAPI std::optional<struct DimensionDefinitionGroup::DimensionDefinition>
          getDimensionDefinition(std::string const&) const;

    MCAPI bool isEmpty() const;

    MCAPI bool tryAddDimensionDefinitionByString(struct cereal::ReflectionCtx&, std::string const&);

    MCAPI ~DimensionDefinitionGroup();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _checkValidDimensionBounds(struct DimensionDocument::Dimension const& dimension);

    // NOLINTEND
};
