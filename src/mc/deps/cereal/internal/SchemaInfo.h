#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { struct SchemaId; }
// clang-format on

namespace cereal::internal {

struct SchemaInfo {
public:
    // prevent constructor by default
    SchemaInfo& operator=(SchemaInfo const&);
    SchemaInfo(SchemaInfo const&);
    SchemaInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0SchemaInfo@internal@cereal@@QEAA@USchemaId@12@@Z
    MCAPI explicit SchemaInfo(struct cereal::internal::SchemaId);

    // symbol: ??0SchemaInfo@internal@cereal@@QEAA@$$QEAU012@@Z
    MCAPI SchemaInfo(struct cereal::internal::SchemaInfo&&);

    // symbol: ??1SchemaInfo@internal@cereal@@QEAA@XZ
    MCAPI ~SchemaInfo();

    // NOLINTEND
};

}; // namespace cereal::internal
