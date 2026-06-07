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
    // prevent constructor by default
    ChatScreenControllerProxyCallbacks& operator=(ChatScreenControllerProxyCallbacks const&);
    ChatScreenControllerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChatScreenControllerProxyCallbacks(::ChatScreenControllerProxyCallbacks const&);

    MCAPI ~ChatScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ChatScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
