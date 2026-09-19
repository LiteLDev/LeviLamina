#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Bedrock::Services {

struct DateTime {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8d5d91;
    // NOLINTEND

public:
    // prevent constructor by default
    DateTime& operator=(DateTime const&);
    DateTime(DateTime const&);
    DateTime();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Bedrock::Services
