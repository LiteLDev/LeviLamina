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
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> name;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> objective;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRawMessageScoreInterface(ScriptRawMessageScoreInterface const&);
    ScriptRawMessageScoreInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptRawMessageScoreInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&);

    MCFOLD bool operator==(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const& other) const;

    MCAPI ~ScriptRawMessageScoreInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
