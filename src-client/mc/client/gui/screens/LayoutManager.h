#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"

// auto generated forward declare list
// clang-format off
class LayoutVariables;
class UIControl;
struct VisualTree;
// clang-format on

class LayoutManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LayoutVariables>>        mVariables;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                  mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::UIControl>>> mDelayedLayout;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag _update(::VisualTree& visualTree, ::UIControl const* currentFocusedControl);

    MCAPI void processDelayedLayout();

    MCAPI ::ui::DirtyFlag update(::VisualTree& visualTree, ::UIControl const* currentFocusedControl);
    // NOLINTEND
};
