#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/BatchClippingState.h"
#include "mc/client/gui/screens/BatchVisualState.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct RenderControlMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>> control;
    ::ll::TypedStorage<4, 20, ::BatchClippingState>           clippingState;
    ::ll::TypedStorage<4, 8, ::BatchVisualState>              visualState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RenderControlMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
