#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptStat {
public:
    // ScriptStat inner types define
    enum class Type : uint {
        Bytes         = 0,
        Milliseconds  = 1,
        Microseconds  = 2,
        BiasedPercent = 3,
        String        = 4,
        Nanoseconds   = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2712c2;
    ::ll::UntypedStorage<1, 1>  mUnkf48bba;
    ::ll::UntypedStorage<8, 32> mUnk606277;
    ::ll::UntypedStorage<4, 8>  mUnk54fb0f;
    ::ll::UntypedStorage<8, 32> mUnkca689c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStat(ScriptStat const&);
    ScriptStat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptStat& operator=(::ScriptStat const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCNAPI bool operator==(::ScriptStat const&, ::ScriptStat const&);
// NOLINTEND
