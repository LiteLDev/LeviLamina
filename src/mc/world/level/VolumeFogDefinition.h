#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct VolumeFogDefinition {
public:
    // prevent constructor by default
    VolumeFogDefinition& operator=(VolumeFogDefinition const&);
    VolumeFogDefinition(VolumeFogDefinition const&);
    VolumeFogDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity, class VolumeFogComponent& component) const;

    MCAPI ~VolumeFogDefinition();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
