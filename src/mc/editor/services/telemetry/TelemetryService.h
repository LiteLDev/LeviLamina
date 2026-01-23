#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/TelemetryServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Services {

class TelemetryService : public ::Editor::Services::IEditorService,
                         public ::Editor::Services::TelemetryServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke5590c;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryService& operator=(TelemetryService const&);
    TelemetryService(TelemetryService const&);
    TelemetryService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TelemetryService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void fireEditorEventToolActivated(::std::string const& toolName) /*override*/;

    virtual void fireUndoEvent(::std::string const& transactionName) /*override*/;

    virtual void fireRedoEvent(::std::string const& transactionName) /*override*/;

    virtual void
    fireEditorKeybindUpdate(::std::string const& keybindName, int const key, int const modifiers) /*override*/;

    virtual void fireEditorScriptEvent(
        ::std::string const& source,
        ::std::string const& eventName,
        ::std::string const& metadata
    ) /*override*/;

    virtual void fireTutorialEvent(
        ::std::string_view                    type,
        ::std::optional<::std::string> const& state,
        ::std::string const&                  currentStage,
        ::std::optional<::std::string> const& previousStage
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TelemetryService(::Editor::ServiceProviderCollection& providers, ::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers, ::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $fireEditorEventToolActivated(::std::string const& toolName);

    MCNAPI void $fireUndoEvent(::std::string const& transactionName);

    MCNAPI void $fireRedoEvent(::std::string const& transactionName);

    MCNAPI void $fireEditorKeybindUpdate(::std::string const& keybindName, int const key, int const modifiers);

    MCNAPI void
    $fireEditorScriptEvent(::std::string const& source, ::std::string const& eventName, ::std::string const& metadata);

    MCNAPI void $fireTutorialEvent(
        ::std::string_view                    type,
        ::std::optional<::std::string> const& state,
        ::std::string const&                  currentStage,
        ::std::optional<::std::string> const& previousStage
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForTelemetryServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
