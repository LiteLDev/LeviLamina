#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class TelemetryServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TelemetryServiceProvider() = default;

    virtual void fireEditorEventToolActivated(::std::string const&) = 0;

    virtual void fireUndoEvent(::std::string const&) = 0;

    virtual void fireRedoEvent(::std::string const&) = 0;

    virtual void fireEditorKeybindUpdate(::std::string const&, int const, int const) = 0;

    virtual void fireEditorScriptEvent(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual void fireTutorialEvent(
        ::std::string_view,
        ::std::optional<::std::string> const&,
        ::std::string const&,
        ::std::optional<::std::string> const&
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
