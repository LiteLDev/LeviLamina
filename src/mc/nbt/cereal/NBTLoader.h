#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/BasicLoader.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicLoader; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class NBTLoader : public ::cereal::BasicLoader {
public:
    // prevent constructor by default
    NBTLoader& operator=(NBTLoader const&);
    NBTLoader(NBTLoader const&);
    NBTLoader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NBTLoader();

    MCAPI NBTLoader(gsl::not_null<class Tag const*> tag, struct cereal::ReflectionCtx const& reflectionCtx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(gsl::not_null<class Tag const*> tag, struct cereal::ReflectionCtx const& reflectionCtx);

    MCAPI void dtor$();

    // NOLINTEND
};
