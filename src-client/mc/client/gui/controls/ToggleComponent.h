#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
// clang-format on

class ToggleComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mCheckedStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mUncheckedStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mCheckedHoverStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mUncheckedHoverStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mCheckedLockedStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mCheckedLockedHoverStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mUncheckedLockedStateControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mUncheckedLockedHoverStateControl;
    bool                                                    mChecked                   : 1;
    bool                                                    mHover                     : 1;
    bool                                                    mRadioToggleGroup          : 1;
    bool                                                    mDefaultState              : 1;
    bool                                                    mEnableDirectionalToggling : 1;
    ::ll::TypedStorage<8, 32, ::std::string>                mGridCollectionName;
    ::ll::TypedStorage<4, 4, uint>                          mToggleNameId;
    ::ll::TypedStorage<4, 4, uint>                          mToggleOnButtonId;
    ::ll::TypedStorage<4, 4, uint>                          mToggleOffButtonId;
    ::ll::TypedStorage<4, 4, int>                           mForcedIndex;
    ::ll::TypedStorage<4, 4, int>                           mDefaultGroupSelectedIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                mTTSValueOn;
    ::ll::TypedStorage<8, 32, ::std::string>                mTTSValueOff;
    ::ll::TypedStorage<8, 32, ::std::string>                mDescriptiveText;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ToggleComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl&) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual ::std::string const& getTextToSpeechComponentValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _updateControlVisibility();

    MCAPI void setChecked(bool checked);

    MCAPI void setForcedGroupIndex(int forcedIndex);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
