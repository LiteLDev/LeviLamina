#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaInfo {
public:
    // prevent constructor by default
    JSONSchemaInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0JSONSchemaInfo@internal@ext@cereal@@QEAA@$$QEAU0123@@Z
    MCAPI JSONSchemaInfo(struct cereal::ext::internal::JSONSchemaInfo&&);

    // symbol: ??0JSONSchemaInfo@internal@ext@cereal@@QEAA@AEBU0123@@Z
    MCAPI JSONSchemaInfo(struct cereal::ext::internal::JSONSchemaInfo const&);

    // symbol: ??4JSONSchemaInfo@internal@ext@cereal@@QEAAAEAU0123@$$QEAU0123@@Z
    MCAPI struct cereal::ext::internal::JSONSchemaInfo& operator=(struct cereal::ext::internal::JSONSchemaInfo&&);

    // symbol: ??4JSONSchemaInfo@internal@ext@cereal@@QEAAAEAU0123@AEBU0123@@Z
    MCAPI struct cereal::ext::internal::JSONSchemaInfo& operator=(struct cereal::ext::internal::JSONSchemaInfo const&);

    // symbol: ??1JSONSchemaInfo@internal@ext@cereal@@QEAA@XZ
    MCAPI ~JSONSchemaInfo();

    // NOLINTEND
};

}; // namespace cereal::ext::internal
