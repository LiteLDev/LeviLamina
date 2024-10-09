#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct SchemaInfo {
public:
    // prevent constructor by default
    SchemaInfo();

public:
    // NOLINTBEGIN
    MCAPI SchemaInfo(struct cereal::internal::SchemaInfo&&);

    MCAPI SchemaInfo(struct cereal::internal::SchemaInfo const&);

    MCAPI struct cereal::internal::SchemaInfo& operator=(struct cereal::internal::SchemaInfo&&);

    MCAPI struct cereal::internal::SchemaInfo& operator=(struct cereal::internal::SchemaInfo const&);

    MCAPI ~SchemaInfo();

    // NOLINTEND
};

}; // namespace cereal::internal
