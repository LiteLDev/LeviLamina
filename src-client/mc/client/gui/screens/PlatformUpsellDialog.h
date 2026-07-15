#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

class PlatformUpsellDialog {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlatformUpsellDialog() = default;

    virtual void show(::std::shared_ptr<::Social::User> const user, ::std::function<void(bool)> callback) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
