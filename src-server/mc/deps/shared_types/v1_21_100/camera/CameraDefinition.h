#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CameraDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2110a6;
    ::ll::UntypedStorage<4, 4> mUnk16f626;
    ::ll::UntypedStorage<4, 4> mUnk45dff9;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraDefinition& operator=(CameraDefinition const&);
    CameraDefinition(CameraDefinition const&);
    CameraDefinition();

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
