#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/PlatformUpsellDialog.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct User; }
// clang-format on

class GenericPlatformUpsellDialog : public ::PlatformUpsellDialog {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericPlatformUpsellDialog() /*override*/ = default;

    virtual void show(::std::shared_ptr<::Social::User> const user, ::std::function<void(bool)> callback) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $show(::std::shared_ptr<::Social::User> const user, ::std::function<void(bool)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
