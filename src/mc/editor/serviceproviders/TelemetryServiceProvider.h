#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class TelemetryServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TelemetryServiceProvider() = default;

    virtual void fireEditorEventToolActivated(::std::string const& toolName) = 0;

    virtual void fireUndoEvent(::std::string const& transactionName) = 0;

    virtual void fireRedoEvent(::std::string const& transactionName) = 0;

    virtual void fireEditorKeybindUpdate(::std::string const& keybindName, int const key, int const modifiers) = 0;

    virtual void fireEditorScriptEvent(
        ::std::string const& source,
        ::std::string const& eventName,
        ::std::string const& metadata
    ) = 0;

    virtual void fireTutorialEvent(
        ::std::string_view                    type,
        ::std::optional<::std::string> const& state,
        ::std::string const&                  currentStage,
        ::std::optional<::std::string> const& previousStage
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
