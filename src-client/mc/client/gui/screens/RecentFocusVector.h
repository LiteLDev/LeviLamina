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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::UIControl>
    _getValidControl(int startIndex, int endIndex, ::std::shared_ptr<::UIControl> lastFocusedControl);

    MCNAPI bool _isCurrentIndexControl(::std::weak_ptr<::UIControl> control) const;

    MCNAPI void addRecentFocusControl(::std::weak_ptr<::UIControl> control);

    MCNAPI ::std::shared_ptr<::UIControl> getLastGoodFocusedControl(::std::shared_ptr<::UIControl> lastFocusedControl);

    MCNAPI ~RecentFocusVector();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
