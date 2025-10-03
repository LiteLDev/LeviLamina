#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraOrbitDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbdcc69;
    ::ll::UntypedStorage<4, 4> mUnk8cdf00;
    ::ll::UntypedStorage<4, 4> mUnkd0f9a2;
    ::ll::UntypedStorage<4, 4> mUnk4d164f;
    ::ll::UntypedStorage<4, 4> mUnk2be2e7;
    ::ll::UntypedStorage<4, 4> mUnk5c05de;
    ::ll::UntypedStorage<4, 4> mUnke35e62;
    ::ll::UntypedStorage<4, 4> mUnk12a489;
    ::ll::UntypedStorage<1, 1> mUnkcf9ee2;
    ::ll::UntypedStorage<1, 1> mUnk92ec99;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraOrbitDefinition& operator=(CameraOrbitDefinition const&);
    CameraOrbitDefinition(CameraOrbitDefinition const&);
    CameraOrbitDefinition();

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
