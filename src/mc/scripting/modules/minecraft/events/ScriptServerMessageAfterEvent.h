#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptServerMessageAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8b5a6f;
    ::ll::UntypedStorage<8, 32> mUnke2bc8e;
    ::ll::UntypedStorage<8, 32> mUnk7c27ea;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerMessageAfterEvent& operator=(ScriptServerMessageAfterEvent const&);
    ScriptServerMessageAfterEvent(ScriptServerMessageAfterEvent const&);
    ScriptServerMessageAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptServerMessageAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptServerMessageAfterEvent&&);

    MCNAPI ~ScriptServerMessageAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
