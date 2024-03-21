#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealComponentItemDataLoader {
public:
    // prevent constructor by default
    CerealComponentItemDataLoader& operator=(CerealComponentItemDataLoader const&);
    CerealComponentItemDataLoader(CerealComponentItemDataLoader const&);
    CerealComponentItemDataLoader();

public:
    // NOLINTBEGIN
    // symbol: ??0CerealComponentItemDataLoader@@QEAA@VSemVersion@@AEBUReflectionCtx@cereal@@@Z
    MCAPI CerealComponentItemDataLoader(class SemVersion, struct cereal::ReflectionCtx const&);

    // symbol: ??1CerealComponentItemDataLoader@@QEAA@XZ
    MCAPI ~CerealComponentItemDataLoader();

    // NOLINTEND
};
