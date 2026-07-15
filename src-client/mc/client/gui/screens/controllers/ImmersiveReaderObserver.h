#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/code_builder/platform/WebviewObserver.h"

class ImmersiveReaderObserver : public ::WebviewObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mImmersiveReaderInterface;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onMessageRecieved(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
