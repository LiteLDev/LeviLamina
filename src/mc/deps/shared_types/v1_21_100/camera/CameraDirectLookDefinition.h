#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraDirectLookDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkba3032;
    ::ll::UntypedStorage<4, 4> mUnk5062f0;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraDirectLookDefinition& operator=(CameraDirectLookDefinition const&);
    CameraDirectLookDefinition(CameraDirectLookDefinition const&);
    CameraDirectLookDefinition();

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

} // namespace SharedTypes::v1_21_100
