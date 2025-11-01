#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraOffsetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkc308aa;
    ::ll::UntypedStorage<4, 12> mUnk653314;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraOffsetDefinition& operator=(CameraOffsetDefinition const&);
    CameraOffsetDefinition(CameraOffsetDefinition const&);
    CameraOffsetDefinition();

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
