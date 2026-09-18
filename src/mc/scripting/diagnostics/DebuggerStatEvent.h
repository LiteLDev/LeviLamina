#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DebuggerStat;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DebuggerStatEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                         mTick;
    ::ll::TypedStorage<8, 24, ::std::vector<::DebuggerStat>> mStats;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
