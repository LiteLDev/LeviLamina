#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/WebviewObserver.h"

class ImmersiveReaderObserver : public ::WebviewObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mImmersiveReaderInterface;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onMessageRecieved(::std::string const& message) /*override*/;

    virtual ~ImmersiveReaderObserver() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onMessageRecieved(::std::string const& message);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
