#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

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
    MCNAPI ::ScriptModuleMinecraft::ScriptRawMessageScoreInterface&
    operator=(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface&&);

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptRawMessageScoreInterface const& other) const;

    MCNAPI ~ScriptRawMessageScoreInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptRawMessageScoreInterface> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
