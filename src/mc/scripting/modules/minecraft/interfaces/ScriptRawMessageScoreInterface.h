#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

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
    ScriptRawMessageScoreInterface& operator=(ScriptRawMessageScoreInterface const&);
    ScriptRawMessageScoreInterface(ScriptRawMessageScoreInterface const&);
    ScriptRawMessageScoreInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptRawMessageScoreInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface&&);

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const& other) const;

    MCAPI ~ScriptRawMessageScoreInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptRawMessageScoreInterface> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
