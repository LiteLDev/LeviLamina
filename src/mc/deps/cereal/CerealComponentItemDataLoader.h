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
    MCAPI CerealComponentItemDataLoader(class SemVersion, struct cereal::ReflectionCtx const&);

    MCAPI ~CerealComponentItemDataLoader();

    // NOLINTEND
};
