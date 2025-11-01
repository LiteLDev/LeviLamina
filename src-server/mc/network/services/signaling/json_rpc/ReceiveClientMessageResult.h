#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class ReceiveClientMessageResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5afae3;
    ::ll::UntypedStorage<8, 32> mUnke30aea;
    ::ll::UntypedStorage<8, 32> mUnk6b6591;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiveClientMessageResult& operator=(ReceiveClientMessageResult const&);
    ReceiveClientMessageResult(ReceiveClientMessageResult const&);
    ReceiveClientMessageResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::JsonRpc::ReceiveClientMessageResult& operator=(::JsonRpc::ReceiveClientMessageResult&&);

    MCNAPI ~ReceiveClientMessageResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
