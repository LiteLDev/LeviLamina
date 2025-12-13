#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerUseNameTagAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcf33a9;
    ::ll::UntypedStorage<8, 32> mUnkc0bba3;
    ::ll::UntypedStorage<8, 40> mUnk998f69;
    ::ll::UntypedStorage<8, 32> mUnke881ae;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerUseNameTagAfterEvent& operator=(ScriptPlayerUseNameTagAfterEvent const&);
    ScriptPlayerUseNameTagAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerUseNameTagAfterEvent(::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent&&);

    MCNAPI ScriptPlayerUseNameTagAfterEvent(::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent const&);

    MCNAPI ScriptPlayerUseNameTagAfterEvent(
        ::Player const&                       player,
        ::Actor const&                        entityNamed,
        ::std::string                         newName,
        ::std::optional<::std::string>        previousName,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI ::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent&&);

    MCNAPI ~ScriptPlayerUseNameTagAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerUseNameTagAfterEvent const&);

    MCNAPI void* $ctor(
        ::Player const&                       player,
        ::Actor const&                        entityNamed,
        ::std::string                         newName,
        ::std::optional<::std::string>        previousName,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
