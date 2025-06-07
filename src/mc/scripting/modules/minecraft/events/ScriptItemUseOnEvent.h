#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke9534a;
    ::ll::UntypedStorage<4, 4>  mUnk90638f;
    ::ll::UntypedStorage<4, 12> mUnk62f204;
    ::ll::UntypedStorage<8, 32> mUnk259048;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnEvent& operator=(ScriptItemUseOnEvent const&);
    ScriptItemUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemUseOnEvent(::ScriptModuleMinecraft::ScriptItemUseOnEvent const&);

    MCNAPI ~ScriptItemUseOnEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemUseOnEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
