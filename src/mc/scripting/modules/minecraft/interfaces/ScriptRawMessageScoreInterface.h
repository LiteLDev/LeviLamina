#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptRawMessageScoreInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkf9185b;
    ::ll::UntypedStorage<8, 40> mUnkdfcdfc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRawMessageScoreInterface(ScriptRawMessageScoreInterface const&);
    ScriptRawMessageScoreInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptRawMessageScoreInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptRawMessageScoreInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const& other) const;

    MCNAPI ~ScriptRawMessageScoreInterface();
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

} // namespace ScriptModuleMinecraft
