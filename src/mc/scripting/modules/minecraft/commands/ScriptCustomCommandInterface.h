#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptCustomCommandParamInterface; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mName;
    ::ll::TypedStorage<8, 32, ::std::string>           mDescription;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mPermissionLevel;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>    mCheatsRequired;
    ::ll::
        TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptCustomCommandParamInterface>>>
            mMandatoryParams;
    ::ll::
        TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptCustomCommandParamInterface>>>
            mOptionalParams;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandInterface& operator=(ScriptCustomCommandInterface const&);
    ScriptCustomCommandInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptCustomCommandInterface(::ScriptModuleMinecraft::ScriptCustomCommandInterface&&);

    MCAPI ScriptCustomCommandInterface(::ScriptModuleMinecraft::ScriptCustomCommandInterface const&);

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptCustomCommandInterface const& other) const;

    MCAPI ~ScriptCustomCommandInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandInterface&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptCustomCommandInterface const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
