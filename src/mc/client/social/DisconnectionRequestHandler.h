#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class DisconnectionRequestHandler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnk4aa6b5;
    ::ll::UntypedStorage<4, 4>   mUnkf7568f;
    ::ll::UntypedStorage<8, 16>  mUnkae7d70;
    ::ll::UntypedStorage<8, 8>   mUnk9b8fde;
    // NOLINTEND

public:
    // prevent constructor by default
    DisconnectionRequestHandler& operator=(DisconnectionRequestHandler const&);
    DisconnectionRequestHandler(DisconnectionRequestHandler const&);
    DisconnectionRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DisconnectionRequestHandler() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
