#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptStatEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                       mTick;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptStat>> mStats;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};
