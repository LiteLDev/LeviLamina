#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

struct IntRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk787e1b;
    ::ll::UntypedStorage<4, 4> mUnk5011e3;
    // NOLINTEND

public:
    // prevent constructor by default
    IntRange& operator=(IntRange const&);
    IntRange(IntRange const&);
    IntRange();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
