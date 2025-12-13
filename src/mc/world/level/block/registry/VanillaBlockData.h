#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbfccfd;
    ::ll::UntypedStorage<4, 4> mUnk98e017;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockData& operator=(VanillaBlockData const&);
    VanillaBlockData(VanillaBlockData const&);
    VanillaBlockData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
