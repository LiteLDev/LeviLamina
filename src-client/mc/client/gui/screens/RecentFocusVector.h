#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class RecentFocusVector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::UIControl>>> mRecentControlVector;
    ::ll::TypedStorage<4, 4, int>                                          mNextInsert;
    ::ll::TypedStorage<1, 1, bool>                                         mIncludeMagnetControls;
    // NOLINTEND

public:
    // prevent constructor by default
    RecentFocusVector();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecentFocusVector(int size, bool includeMagnetControls);

    MCAPI ::std::shared_ptr<::UIControl>
    _getValidControl(int startIndex, int endIndex, ::std::shared_ptr<::UIControl> lastFocusedControl);

    MCAPI bool _isCurrentIndexControl(::std::weak_ptr<::UIControl> control) const;

    MCAPI void addRecentFocusControl(::std::weak_ptr<::UIControl> control);

    MCAPI ::std::shared_ptr<::UIControl> getLastGoodFocusedControl(::std::shared_ptr<::UIControl> lastFocusedControl);

    MCAPI ~RecentFocusVector();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int size, bool includeMagnetControls);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
