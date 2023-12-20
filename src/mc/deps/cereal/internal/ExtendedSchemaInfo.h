#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ExtendedSchemaInfo {
public:
    // prevent constructor by default
    ExtendedSchemaInfo& operator=(ExtendedSchemaInfo const&);
    ExtendedSchemaInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0ExtendedSchemaInfo@internal@cereal@@QEAA@$$QEAU012@@Z
    MCAPI ExtendedSchemaInfo(struct cereal::internal::ExtendedSchemaInfo&&);

    // symbol: ??0ExtendedSchemaInfo@internal@cereal@@QEAA@AEBU012@@Z
    MCAPI ExtendedSchemaInfo(struct cereal::internal::ExtendedSchemaInfo const&);

    // symbol: ??4ExtendedSchemaInfo@internal@cereal@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct cereal::internal::ExtendedSchemaInfo& operator=(struct cereal::internal::ExtendedSchemaInfo&&);

    // symbol: ??1ExtendedSchemaInfo@internal@cereal@@QEAA@XZ
    MCAPI ~ExtendedSchemaInfo();

    // NOLINTEND
};

}; // namespace cereal::internal
