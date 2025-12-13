#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraAvoidanceDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf34ce9;
    ::ll::UntypedStorage<8, 24> mUnk2dbc51;
    ::ll::UntypedStorage<4, 4>  mUnkc511a6;
    ::ll::UntypedStorage<4, 4>  mUnkdb8bce;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAvoidanceDefinition& operator=(CameraAvoidanceDefinition const&);
    CameraAvoidanceDefinition(CameraAvoidanceDefinition const&);
    CameraAvoidanceDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~CameraAvoidanceDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
