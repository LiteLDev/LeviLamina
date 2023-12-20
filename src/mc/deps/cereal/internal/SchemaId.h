#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct SchemaId {
public:
    // prevent constructor by default
    SchemaId& operator=(SchemaId const&);
    SchemaId();

public:
    // NOLINTBEGIN
    // symbol: ??0SchemaId@internal@cereal@@QEAA@$$QEAU012@@Z
    MCAPI SchemaId(struct cereal::internal::SchemaId&&);

    // symbol: ??0SchemaId@internal@cereal@@QEAA@AEBU012@@Z
    MCAPI SchemaId(struct cereal::internal::SchemaId const&);

    // symbol: ??1SchemaId@internal@cereal@@QEAA@XZ
    MCAPI ~SchemaId();

    // NOLINTEND
};

}; // namespace cereal::internal
