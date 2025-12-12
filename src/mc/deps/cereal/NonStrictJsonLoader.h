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
    // virtual functions
    // NOLINTBEGIN
    virtual ~NonStrictJsonLoader() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NonStrictJsonLoader(::cereal::ReflectionCtx const&, ::cereal::ResultCode, ::cereal::LoaderConfig const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::cereal::ResultCode, ::cereal::LoaderConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
