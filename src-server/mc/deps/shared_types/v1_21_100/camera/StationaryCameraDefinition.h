#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct StationaryCameraDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkdbefcc;
    ::ll::UntypedStorage<4, 8> mUnk734c64;
    // NOLINTEND

public:
    // prevent constructor by default
    StationaryCameraDefinition& operator=(StationaryCameraDefinition const&);
    StationaryCameraDefinition(StationaryCameraDefinition const&);
    StationaryCameraDefinition();

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
