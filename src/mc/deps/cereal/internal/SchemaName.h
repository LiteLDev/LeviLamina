#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct SchemaName {
public:
    // prevent constructor by default
    SchemaName& operator=(SchemaName const&);
    SchemaName(SchemaName const&);
    SchemaName();

public:
    // NOLINTBEGIN
    // symbol: ??1SchemaName@internal@cereal@@QEAA@XZ
    MCAPI ~SchemaName();

    // NOLINTEND
};

}; // namespace cereal::internal
