#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { struct ScriptSelectionManifestData; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
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

    MCNAPI ::Scripting::Promise<double, ::Scripting::Error, void>
    deselectBlocks(::Scripting::ScriptObjectFactory& factory, ::std::string const& blockIdentifier);

    MCNAPI ::Scripting::Promise<::Editor::ScriptModule::ScriptSelectionManifestData, ::Scripting::Error, void>
    generateManifest(::Scripting::ScriptObjectFactory& factory);

    MCNAPI ::std::optional<::Editor::ScriptModule::ScriptSelectionManifestData> getCurrentManifest() const;

    MCNAPI ::Scripting::Promise<double, ::Scripting::Error, void> replaceBlocks(
        ::Scripting::ScriptObjectFactory& factory,
        ::std::string const&              fromBlockIdentifier,
        ::std::string const&              toBlockIdentifier
    );

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
