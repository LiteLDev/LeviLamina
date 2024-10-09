#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct SchemaDescriptor {
public:
    // prevent constructor by default
    SchemaDescriptor& operator=(SchemaDescriptor const&);
    SchemaDescriptor(SchemaDescriptor const&);
    SchemaDescriptor();

public:
    // NOLINTBEGIN
    MCAPI ~SchemaDescriptor();

    // NOLINTEND
};

}; // namespace cereal::internal
