#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSelectionService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptSelectionService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcd03d3;
    ::ll::UntypedStorage<8, 8>  mUnk51563d;
    ::ll::UntypedStorage<8, 32> mUnk99837b;
    ::ll::UntypedStorage<8, 32> mUnk7f1725;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionService& operator=(ScriptSelectionService const&);
    ScriptSelectionService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSelectionService(::Editor::ScriptModule::ScriptSelectionService const&);

    MCNAPI
    ScriptSelectionService(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ~ScriptSelectionService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptSelectionService const&);

    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
