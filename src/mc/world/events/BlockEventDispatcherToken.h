#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BlockEventDispatcher;
// clang-format on

class BlockEventDispatcherToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                 mHandle;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::BlockEventDispatcher>> mDispatcher;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEventDispatcherToken& operator=(BlockEventDispatcherToken const&);
    BlockEventDispatcherToken(BlockEventDispatcherToken const&);
    BlockEventDispatcherToken();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockEventDispatcherToken& operator=(::BlockEventDispatcherToken&& rhs);

    MCNAPI void unregister();

    MCNAPI ~BlockEventDispatcherToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
