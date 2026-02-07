#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"

struct ChatScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, bool)>>      mSetText;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::std::string> const&()>> mGetIntellisenseMessages;
    ::ll::TypedStorage<8, 64, ::std::function<::ui::DirtyFlag()>>                     mTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChatScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
