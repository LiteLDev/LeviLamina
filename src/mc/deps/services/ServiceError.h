#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Bedrock::Services {

struct ServiceError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk29e492;
    ::ll::UntypedStorage<8, 32> mUnkead729;
    ::ll::UntypedStorage<8, 32> mUnkeb26a8;
    ::ll::UntypedStorage<8, 64> mUnk94b61d;
    ::ll::UntypedStorage<8, 40> mUnkf894ec;
    ::ll::UntypedStorage<8, 8>  mUnk2ac627;
    ::ll::UntypedStorage<8, 24> mUnk7dc3e7;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceError& operator=(ServiceError const&);
    ServiceError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServiceError(::Bedrock::Services::ServiceError const&);

    MCNAPI ~ServiceError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Services::ServiceError const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Services
