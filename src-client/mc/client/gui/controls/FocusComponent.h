#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class FocusManager;
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
// clang-format on

class FocusComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FocusManager*>                                               mFocusManager;
    ::ll::TypedStorage<4, 4, int>                                                           mDefaultFocusPrecedence;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                                   mCapturedFocusPoint;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mFocusIdentifier;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ui::CardinalDirection, ::std::string>> mDirectionalFocusOverrides;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::unordered_map<::ui::CardinalDirection, ::std::string>>>
         mNamedMappingLookupData;
    bool mFocusEnabled       : 1;
    bool mFocusWrapEnabled   : 1;
    bool mFocusPointCaptured : 1;
    bool mFocusMagnetEnabled : 1;
    bool mResetOnFocusLost   : 1;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FocusComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _captureFocusPoint();

    MCAPI void _resetDirectionalOverrides();

    MCAPI bool checkFocusChangeOverride(::ui::CardinalDirection dir, ::std::string const& checkName) const;

    MCAPI void registerNewLookupMapEntry(
        ::std::string const&                                                focusID,
        ::std::unordered_map<::ui::CardinalDirection, ::std::string> const& mapping
    );

    MCAPI void setFocusChangeOverride(::ui::CardinalDirection dir, ::std::string const& str);

    MCAPI void setFocusIdentifier(::std::string const& str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    MCAPI ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
