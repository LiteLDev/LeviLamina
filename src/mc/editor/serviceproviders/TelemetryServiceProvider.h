#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class TelemetryServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TelemetryServiceProvider() = default;

    // vIndex: 1
    virtual void fireEditorEventToolActivated(::std::string const&) = 0;

    // vIndex: 2
    virtual void fireUndoEvent(::std::string const&) = 0;

    // vIndex: 3
    virtual void fireRedoEvent(::std::string const&) = 0;

    // vIndex: 4
    virtual void fireEditorKeybindUpdate(::std::string const&, int const, int const) = 0;

    // vIndex: 5
    virtual void fireEditorScriptEvent(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    // vIndex: 6
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
