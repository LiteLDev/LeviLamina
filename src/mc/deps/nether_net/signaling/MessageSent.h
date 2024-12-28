#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::SignalingEvents {

struct MessageSent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkca823f;
    ::ll::UntypedStorage<8, 8>  mUnk9af45a;
    ::ll::UntypedStorage<8, 32> mUnk63f325;
    ::ll::UntypedStorage<8, 32> mUnkd376b9;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageSent& operator=(MessageSent const&);
    MessageSent(MessageSent const&);
    MessageSent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MessageSent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::SignalingEvents
