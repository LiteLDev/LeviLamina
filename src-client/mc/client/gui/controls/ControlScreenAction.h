#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class ControlScreenAction {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ControlScreenAction() = default;

    virtual bool getDirty() = 0;

    virtual bool getDirty(::ui::DirtyFlag) = 0;

    virtual ::ui::DirtyFlag getDirtyValue() = 0;

    virtual void addDirtyFlag(::ui::DirtyFlag) = 0;

    virtual void measureControls(::UIControl&) = 0;

    virtual void markToRemoveDeadDependencies(::std::shared_ptr<::UIControl>) = 0;

    virtual void updateControlCollection(::std::shared_ptr<::UIControl>) = 0;

    virtual void updateControlCollectionFromRoot() = 0;

    virtual void removeFromControlCollection(::std::shared_ptr<::UIControl>) = 0;

    virtual void updateControlBinds(::std::shared_ptr<::UIControl>) = 0;

    virtual void updateBindsFromRoot() = 0;

    virtual void markTextEditFocusChanged() = 0;

    virtual void markTextEditAlwaysListeningChanged() = 0;

    virtual ::std::shared_ptr<::UIControl> getControlWithName(::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
