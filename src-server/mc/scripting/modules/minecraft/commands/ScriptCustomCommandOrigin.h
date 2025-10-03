#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd57353;
    ::ll::UntypedStorage<8, 40> mUnk5a2d82;
    ::ll::UntypedStorage<8, 40> mUnk74d2d5;
    ::ll::UntypedStorage<8, 40> mUnk9a2832;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandOrigin& operator=(ScriptCustomCommandOrigin const&);
    ScriptCustomCommandOrigin();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCustomCommandOrigin(::ScriptModuleMinecraft::ScriptCustomCommandOrigin&&);

    MCNAPI ScriptCustomCommandOrigin(::ScriptModuleMinecraft::ScriptCustomCommandOrigin const&);

    MCNAPI ~ScriptCustomCommandOrigin();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandOrigin&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandOrigin const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
