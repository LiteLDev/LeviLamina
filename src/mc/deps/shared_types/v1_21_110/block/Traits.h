#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct Traits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk20de38;
    ::ll::UntypedStorage<8, 24> mUnkc357c9;
    // NOLINTEND

public:
    // prevent constructor by default
    Traits& operator=(Traits const&);
    Traits(Traits const&);
    Traits();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
