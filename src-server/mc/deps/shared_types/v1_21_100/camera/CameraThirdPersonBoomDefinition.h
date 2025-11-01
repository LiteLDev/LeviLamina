#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraThirdPersonBoomDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf94d0e;
    ::ll::UntypedStorage<4, 8> mUnkfd8e1a;
    ::ll::UntypedStorage<1, 1> mUnkbf1c4e;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraThirdPersonBoomDefinition& operator=(CameraThirdPersonBoomDefinition const&);
    CameraThirdPersonBoomDefinition(CameraThirdPersonBoomDefinition const&);
    CameraThirdPersonBoomDefinition();

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

};

}
