#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UIPropertyBag;
struct SkinHandle;
// clang-format on

struct SkinPickerScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::SkinHandle*()>> mGetPreviewSkinHandle;
    ::ll::TypedStorage<8, 64, ::std::function<void(::UIPropertyBag const&, ::std::string const&)>>
        mDisplayJsonDefinedControlPopup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SkinPickerScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
