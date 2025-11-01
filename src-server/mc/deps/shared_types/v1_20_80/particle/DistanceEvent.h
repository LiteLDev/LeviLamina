#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct DistanceEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4106c7;
    ::ll::UntypedStorage<8, 24> mUnke65994;
    // NOLINTEND

public:
    // prevent constructor by default
    DistanceEvent& operator=(DistanceEvent const&);
    DistanceEvent(DistanceEvent const&);
    DistanceEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
