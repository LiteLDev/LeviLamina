#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketClientReceiveEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdd4238;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClientReceiveEvent& operator=(ScriptWebSocketClientReceiveEvent const&);
    ScriptWebSocketClientReceiveEvent(ScriptWebSocketClientReceiveEvent const&);
    ScriptWebSocketClientReceiveEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptWebSocketClientReceiveEvent(::std::string const& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& data);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
