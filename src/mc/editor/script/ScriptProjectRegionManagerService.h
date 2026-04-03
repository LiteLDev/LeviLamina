#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct ProjectRegionManagerChunkProcessingState; }
namespace Editor::ScriptModule { class ScriptProjectRegionExtents; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptProjectRegionManagerService
: public ::EnableGetWeakRef<::Editor::ScriptModule::ScriptProjectRegionManagerService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf40b20;
    ::ll::UntypedStorage<8, 8>  mUnka2853a;
    ::ll::UntypedStorage<8, 8>  mUnk424aaa;
    ::ll::UntypedStorage<8, 24> mUnk9240b2;
    ::ll::UntypedStorage<8, 16> mUnk2672b8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectRegionManagerService& operator=(ScriptProjectRegionManagerService const&);
    ScriptProjectRegionManagerService(ScriptProjectRegionManagerService const&);
    ScriptProjectRegionManagerService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptProjectRegionManagerService(
        ::Editor::ServiceProviderCollection& services,
        ::Scripting::WeakLifetimeScope&      scope
    );

    MCNAPI void _handleChunkProcessingChangeEvent(
        ::Scripting::Result_deprecated<::Editor::ProjectRegionManagerChunkProcessingState> const& state
    );

    MCNAPI ::Scripting::Result_deprecated<bool> isProcessingChunks() const;

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::Promise<::Editor::ProjectRegionManagerChunkProcessingState, ::Scripting::Error>>
    pruneRegion(
        ::std::string const&                                                     dimensionId,
        ::std::vector<::Editor::ScriptModule::ScriptProjectRegionExtents> const& boundsList,
        ::Scripting::ScriptObjectFactory&                                        factory
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::Promise<::Editor::ProjectRegionManagerChunkProcessingState, ::Scripting::Error>>
    regenerateRegion(
        ::std::string const&                                                     dimensionId,
        ::std::vector<::Editor::ScriptModule::ScriptProjectRegionExtents> const& boundsList,
        bool                                                                     areBoundsExcluded,
        ::Scripting::ScriptObjectFactory&                                        factory
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::InterfaceBinding bindScriptProcessingState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope& scope);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
