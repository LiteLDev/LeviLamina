#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { struct SchemaInfo; }
// clang-format on

namespace cereal::internal {

struct ExtendedSchemaInfo {
public:
    // prevent constructor by default
    ExtendedSchemaInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0ExtendedSchemaInfo@internal@cereal@@QEAA@$$QEAU012@@Z
    MCAPI ExtendedSchemaInfo(struct cereal::internal::ExtendedSchemaInfo&&);

    // symbol: ??0ExtendedSchemaInfo@internal@cereal@@QEAA@AEBU012@@Z
    MCAPI ExtendedSchemaInfo(struct cereal::internal::ExtendedSchemaInfo const&);

    // symbol: ??0ExtendedSchemaInfo@internal@cereal@@QEAA@USchemaInfo@12@@Z
    MCAPI explicit ExtendedSchemaInfo(struct cereal::internal::SchemaInfo);

    // symbol: ??4ExtendedSchemaInfo@internal@cereal@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct cereal::internal::ExtendedSchemaInfo& operator=(struct cereal::internal::ExtendedSchemaInfo&&);

    // symbol: ??4ExtendedSchemaInfo@internal@cereal@@QEAAAEAU012@AEBU012@@Z
    MCAPI struct cereal::internal::ExtendedSchemaInfo& operator=(struct cereal::internal::ExtendedSchemaInfo const&);

    // symbol: ??1ExtendedSchemaInfo@internal@cereal@@QEAA@XZ
    MCAPI ~ExtendedSchemaInfo();

    // NOLINTEND
};

}; // namespace cereal::internal
