#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/controls/ControlScreenAction.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class UIControl;
class UIControlFactory;
class UIMeasureStrategy;
class VisualTreeProxy;
// clang-format on

class VisualTree : public ::ControlScreenAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>> mRootControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>   mInitialSelectedControl;
    ::ll::TypedStorage<8, 32, ::std::string>                  mRootControlName;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                 mDirty;
    ::ll::TypedStorage<1, 1, bool>                            mClearPersistantMeshes;
    ::ll::TypedStorage<8, 8, ::UIMeasureStrategy*>            mMeasureStrategy;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<void*, ::std::weak_ptr<::UIControl>>>>
                                                                             mNeedsToRemoveDeadDependencies;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mControlsToUpdate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mControlsToUpdateBacklog;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mControlsToRemoveFromCollections;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mControlsToBind;
    ::ll::TypedStorage<1, 1, bool>                                           mUpdateCollectionsFromRoot;
    ::ll::TypedStorage<1, 1, bool>                                           mUpdateBindsFromRoot;
    ::ll::TypedStorage<1, 1, bool>                                           mTextEditFocusChanged;
    ::ll::TypedStorage<1, 1, bool>                                           mTextEditAlwaysListeningChanged;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                 mInitGlobalVars;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VisualTreeProxy>>           mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    VisualTree();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VisualTree() /*override*/;

    virtual ::std::shared_ptr<::UIControl> getControlWithName(::std::string const& name) /*override*/;

    virtual bool getDirty() /*override*/;

    virtual bool getDirty(::ui::DirtyFlag flag) /*override*/;

    virtual ::ui::DirtyFlag getDirtyValue() /*override*/;

    virtual void addDirtyFlag(::ui::DirtyFlag flag) /*override*/;

    virtual void measureControls(::UIControl& measureRoot) /*override*/;

    virtual void markToRemoveDeadDependencies(::std::shared_ptr<::UIControl> control) /*override*/;

    virtual void updateControlCollection(::std::shared_ptr<::UIControl> control) /*override*/;

    virtual void updateControlCollectionFromRoot() /*override*/;

    virtual void removeFromControlCollection(::std::shared_ptr<::UIControl> control) /*override*/;

    virtual void updateControlBinds(::std::shared_ptr<::UIControl> control) /*override*/;

    virtual void updateBindsFromRoot() /*override*/;

    virtual void markTextEditFocusChanged() /*override*/;

    virtual void markTextEditAlwaysListeningChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VisualTree(::std::string const& rootControlName, ::Json::Value const& initGlobalVars);

    MCAPI void clearControlsUpdate(bool clearBacklog);

    MCAPI ::std::shared_ptr<::UIControl> getControlByName(::std::string const& name, bool visibleOnly);

    MCAPI ::std::vector<::std::shared_ptr<::UIControl>>
    getControls(::std::function<bool(::UIControl const&)> predicate);

    MCAPI ::std::shared_ptr<::UIControl> getFirstControl(::std::function<bool(::UIControl const&)> const& predicate);

    MCAPI ::std::shared_ptr<::UIControl>
    getFirstControl(::UIControl& control, ::std::function<bool(::UIControl const&)> const& predicate);

    MCAPI ::std::shared_ptr<::UIControl>
    getFirstVisibleControl(::std::function<bool(::UIControl const&)> const& predicate);

    MCAPI ::std::vector<::std::shared_ptr<::UIControl>>
    getVisibleControls(::std::function<bool(::UIControl const&)> predicate);

    MCAPI void initRootControl(::std::shared_ptr<::UIControl> rootControl);

    MCAPI ::std::unique_ptr<::VisualTree> recreateControlTree(::UIControlFactory& controlFactory);

    MCAPI void removeDeadDependencies();

    MCAPI void setRootControlName(::std::string const& name);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _destroyAsync(::TaskGroup& taskGroup, ::std::shared_ptr<::UIControl> control);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& rootControlName, ::Json::Value const& initGlobalVars);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UIControl> $getControlWithName(::std::string const& name);

    MCAPI bool $getDirty();

    MCAPI bool $getDirty(::ui::DirtyFlag flag);

    MCFOLD ::ui::DirtyFlag $getDirtyValue();

    MCAPI void $addDirtyFlag(::ui::DirtyFlag flag);

    MCAPI void $measureControls(::UIControl& measureRoot);

    MCAPI void $markToRemoveDeadDependencies(::std::shared_ptr<::UIControl> control);

    MCAPI void $updateControlCollection(::std::shared_ptr<::UIControl> control);

    MCAPI void $updateControlCollectionFromRoot();

    MCAPI void $removeFromControlCollection(::std::shared_ptr<::UIControl> control);

    MCAPI void $updateControlBinds(::std::shared_ptr<::UIControl> control);

    MCAPI void $updateBindsFromRoot();

    MCAPI void $markTextEditFocusChanged();

    MCAPI void $markTextEditAlwaysListeningChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
