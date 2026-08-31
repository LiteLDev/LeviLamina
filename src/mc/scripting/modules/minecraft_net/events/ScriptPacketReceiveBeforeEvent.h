#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptPacketReceiveBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk826d68;
    ::ll::UntypedStorage<8, 40> mUnka3f897;
    ::ll::UntypedStorage<4, 4>  mUnk15e5c1;
    ::ll::UntypedStorage<1, 1>  mUnka6d7f0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPacketReceiveBeforeEvent& operator=(ScriptPacketReceiveBeforeEvent const&);
    ScriptPacketReceiveBeforeEvent(ScriptPacketReceiveBeforeEvent const&);
    ScriptPacketReceiveBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
