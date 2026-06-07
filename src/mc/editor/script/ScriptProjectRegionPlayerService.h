#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ProjectRegion; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptProjectRegion; }
namespace Editor::ScriptModule { class ScriptProjectRegionOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptProjectRegionPlayerService : public ::EnableGetWeakRef<::Editor::ProjectRegion> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkadb191;
    ::ll::UntypedStorage<8, 8>  mUnkb55685;
    ::ll::UntypedStorage<8, 8>  mUnka1a39b;
    ::ll::UntypedStorage<8, 64> mUnk40dedf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectRegionPlayerService& operator=(ScriptProjectRegionPlayerService const&);
    ScriptProjectRegionPlayerService(ScriptProjectRegionPlayerService const&);
    ScriptProjectRegionPlayerService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptProjectRegionPlayerService(
        ::Editor::ServiceProviderCollection& playerServices,
        ::Scripting::WeakLifetimeScope&      scope
    );

    MCNAPI ::Scripting::Result_deprecated<void> disposeAllRegions();

    MCNAPI ::Scripting::Result_deprecated<bool> disposeRegion(::std::string const& id);

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptProjectRegion>>
    getCursorRegion();

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptProjectRegion>>
    getSelectionRegion();

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptProjectRegion>>
    leaseRegion(::Editor::ScriptModule::ScriptProjectRegionOptions const& options);

    MCNAPI ~ScriptProjectRegionPlayerService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& playerServices, ::Scripting::WeakLifetimeScope& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
