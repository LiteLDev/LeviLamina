#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraShakeSupportDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf83ac5;
    ::ll::UntypedStorage<4, 4> mUnkba44d1;
    ::ll::UntypedStorage<4, 4> mUnkd01b8e;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraShakeSupportDefinition& operator=(CameraShakeSupportDefinition const&);
    CameraShakeSupportDefinition(CameraShakeSupportDefinition const&);
    CameraShakeSupportDefinition();

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
