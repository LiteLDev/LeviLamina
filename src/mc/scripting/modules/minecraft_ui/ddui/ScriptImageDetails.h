#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptImageDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk9afa45;
    ::ll::UntypedStorage<8, 40> mUnked0aeb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptImageDetails& operator=(ScriptImageDetails const&);
    ScriptImageDetails(ScriptImageDetails const&);
    ScriptImageDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ScriptModuleMinecraftServerUI::ScriptImageDetails const& other) const;

    MCNAPI ~ScriptImageDetails();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
