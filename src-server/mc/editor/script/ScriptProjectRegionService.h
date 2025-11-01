#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ProjectRegion; }
namespace Editor::ScriptModule { class ScriptProjectRegion; }
namespace Editor::ScriptModule { class ScriptProjectRegionOptions; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptProjectRegionService : public ::EnableGetWeakRef<::Editor::ProjectRegion> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk52d039;
    ::ll::UntypedStorage<8, 8> mUnkce957b;
    ::ll::UntypedStorage<8, 8> mUnk98822a;
    ::ll::UntypedStorage<8, 64> mUnk907587;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectRegionService& operator=(ScriptProjectRegionService const&);
    ScriptProjectRegionService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptProjectRegionService(::Editor::ScriptModule::ScriptProjectRegionService const&);

    MCNAPI ::Scripting::Result_deprecated<void> disposeAllRegions();

    MCNAPI ::Scripting::Result_deprecated<bool> disposeRegion(::std::string const& id);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptProjectRegion>> getCursorRegion();

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptProjectRegion>> getSelectionRegion();

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptProjectRegion>> leaseRegion(::Editor::ScriptModule::ScriptProjectRegionOptions const& options);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptProjectRegionService const&);
    // NOLINTEND

};

}
