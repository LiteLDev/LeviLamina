#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct SchemaInfo {
public:
    // prevent constructor by default
    SchemaInfo& operator=(SchemaInfo const&);
    SchemaInfo(SchemaInfo const&);
    SchemaInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0SchemaInfo@internal@cereal@@QEAA@$$QEAU012@@Z
    MCAPI SchemaInfo(struct cereal::internal::SchemaInfo&&);

    // NOLINTEND
};

}; // namespace cereal::internal
