#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FlyingItemCommand;
struct SelectNavigationTabCommand;
// clang-format on

struct ScreenViewCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::FlyingItemCommand&)>>           sendFlyingItems;
    ::ll::TypedStorage<8, 64, ::std::function<void(::SelectNavigationTabCommand&)>>  selectNavigationTab;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                               openKeyboard;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                               closeKeyboard;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>           selectControl;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>           selectVisibleControl;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, bool)>>     focusControl;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>           setFocusedTextBoxText;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&)>>           isFocusWithin;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&)>>           isSelected;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, bool)>>     scrollToControl;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>           scrollToControlAndSelect;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>      focusCollectionItem;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&, int, int)>> scrollToGridItemOffset;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&, int, ::std::string const&, int, int)>>
                                                                           scrollToGridItemOffsetCollectionIndex;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> resetScrollWithin;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::std::string const&, int)>>
                                                                           setFocusToFocusIdWhenVisible;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                     prepareFocusForModalPopup;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                     updateTTSForSlider;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                     forceRepeatTTS;
    ::ll::TypedStorage<8, 64, ::std::function<void(float)>>                setCustomObfuscatedTime;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> triggerAnimationEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenViewCommand(ScreenViewCommand const&);
    ScreenViewCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScreenViewCommand& operator=(::ScreenViewCommand const&);

    MCAPI ~ScreenViewCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
