#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

struct FloatRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk74194f;
    ::ll::UntypedStorage<4, 4> mUnk6de176;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatRange& operator=(FloatRange const&);
    FloatRange(FloatRange const&);
    FloatRange();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
