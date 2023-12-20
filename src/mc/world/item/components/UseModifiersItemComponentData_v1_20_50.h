#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct UseModifiersItemComponentData_v1_20_50 {
public:
    // prevent constructor by default
    UseModifiersItemComponentData_v1_20_50& operator=(UseModifiersItemComponentData_v1_20_50 const&);
    UseModifiersItemComponentData_v1_20_50(UseModifiersItemComponentData_v1_20_50 const&);

public:
    // NOLINTBEGIN
    // symbol: ??0UseModifiersItemComponentData_v1_20_50@@QEAA@XZ
    MCAPI UseModifiersItemComponentData_v1_20_50();

    // symbol:
    // ?bindType@UseModifiersItemComponentData_v1_20_50@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // NOLINTEND
};
