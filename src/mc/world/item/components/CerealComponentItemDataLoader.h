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
    MCAPI CerealComponentItemDataLoader(class SemVersion engineVersion, struct cereal::ReflectionCtx const& ctx);

    MCAPI ~CerealComponentItemDataLoader();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class SemVersion engineVersion, struct cereal::ReflectionCtx const& ctx);

    MCAPI void dtor$();

    // NOLINTEND
};
