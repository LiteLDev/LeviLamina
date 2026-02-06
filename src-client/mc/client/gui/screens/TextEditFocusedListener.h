#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct VisualTree;
// clang-format on

class TextEditFocusedListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mHasAlwaysListeningTextEditControl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void update(
        ::VisualTree*                                                      visualTree,
        ::std::vector<::std::shared_ptr<::UIControl>> const&               textEditControls,
        ::std::shared_ptr<::UIControl> const&                              focusedControl,
        ::std::function<void(::std::string const&, int, bool, bool, bool)> focusGainedCallback,
        ::std::function<void()>                                            focusLostCallback
    );
    // NOLINTEND
};
