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

class ScriptInternalPlayerServiceContext : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptInternalPlayerServiceContext> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk72f87f;
    ::ll::UntypedStorage<8, 8> mUnk5865f3;
    ::ll::UntypedStorage<8, 32> mUnk705f83;
    ::ll::UntypedStorage<8, 32> mUnk4c1358;
    ::ll::UntypedStorage<8, 32> mUnk33b9c0;
    ::ll::UntypedStorage<8, 32> mUnkba562f;
    ::ll::UntypedStorage<8, 32> mUnk28d71a;
    ::ll::UntypedStorage<8, 32> mUnkf85b4c;
    ::ll::UntypedStorage<8, 32> mUnk37c655;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInternalPlayerServiceContext& operator=(ScriptInternalPlayerServiceContext const&);
    ScriptInternalPlayerServiceContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptInternalPlayerServiceContext(::Editor::ScriptModule::ScriptInternalPlayerServiceContext const&);

    MCNAPI ScriptInternalPlayerServiceContext(::Editor::ServiceProviderCollection& playerServices, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ~ScriptInternalPlayerServiceContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptInternalPlayerServiceContext const&);

    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& playerServices, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
