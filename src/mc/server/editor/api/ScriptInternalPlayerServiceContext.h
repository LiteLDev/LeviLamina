#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptInternalPlayerServiceContext
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptInternalPlayerServiceContext> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk72f87f;
    ::ll::UntypedStorage<8, 8>  mUnk5865f3;
    ::ll::UntypedStorage<8, 32> mUnk705f83;
    ::ll::UntypedStorage<8, 32> mUnk4c1358;
    ::ll::UntypedStorage<8, 32> mUnk33b9c0;
    ::ll::UntypedStorage<8, 32> mUnkfb5af4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptInternalPlayerServiceContext& operator=(ScriptInternalPlayerServiceContext const&);
    ScriptInternalPlayerServiceContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptInternalPlayerServiceContext(::Editor::ScriptModule::ScriptInternalPlayerServiceContext const&);

    MCAPI ScriptInternalPlayerServiceContext(
        ::Editor::ServiceProviderCollection&  playerServices,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ~ScriptInternalPlayerServiceContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptInternalPlayerServiceContext>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptInternalPlayerServiceContext const&);

    MCAPI void* $ctor(::Editor::ServiceProviderCollection& playerServices, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
