#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct UpdatePlayerFromCameraDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk233da1;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdatePlayerFromCameraDefinition& operator=(UpdatePlayerFromCameraDefinition const&);
    UpdatePlayerFromCameraDefinition(UpdatePlayerFromCameraDefinition const&);
    UpdatePlayerFromCameraDefinition();

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
