#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"
#include "mc/deps/cereal/ResultCode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct LoaderConfig; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal {

class NonStrictJsonLoader : public ::cereal::BasicLoader {
public:
    // prevent constructor by default
    NonStrictJsonLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NonStrictJsonLoader(
        ::cereal::ReflectionCtx const& reflectionCtx,
        ::cereal::ResultCode           errorCodes,
        ::cereal::LoaderConfig const&  config
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(
        ::cereal::ReflectionCtx const& reflectionCtx,
        ::cereal::ResultCode           errorCodes,
        ::cereal::LoaderConfig const&  config
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
