#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct SchemaInfo {
public:
    // prevent constructor by default
    SchemaInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0SchemaInfo@internal@cereal@@QEAA@$$QEAU012@@Z
    MCAPI SchemaInfo(struct cereal::internal::SchemaInfo&&);

    // symbol: ??0SchemaInfo@internal@cereal@@QEAA@AEBU012@@Z
    MCAPI SchemaInfo(struct cereal::internal::SchemaInfo const&);

    // symbol: ??4SchemaInfo@internal@cereal@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct cereal::internal::SchemaInfo& operator=(struct cereal::internal::SchemaInfo&&);

    // symbol: ??4SchemaInfo@internal@cereal@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct cereal::internal::SchemaInfo& operator=(struct cereal::internal::SchemaInfo const&);

    // symbol: ??1SchemaInfo@internal@cereal@@QEAA@XZ
    MCAPI ~SchemaInfo();

    // NOLINTEND
};

}; // namespace cereal::internal
