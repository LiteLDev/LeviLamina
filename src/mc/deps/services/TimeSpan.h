#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Bedrock::Services {

struct TimeSpan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk818229;
    // NOLINTEND

public:
    // prevent constructor by default
    TimeSpan& operator=(TimeSpan const&);
    TimeSpan(TimeSpan const&);
    TimeSpan();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Bedrock::Services
