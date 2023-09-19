#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct SeatDescription;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSeat {
public:
    // prevent constructor by default
    ScriptSeat& operator=(ScriptSeat const&);
    ScriptSeat(ScriptSeat const&);
    ScriptSeat();

public:
    // NOLINTBEGIN
    // symbol: ?bind@ScriptSeat@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@USeatDescription@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct SeatDescription> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
