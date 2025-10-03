#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/BlockEventDispatcher.h"

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
    MCAPI ::BlockEventDispatcherToken& operator=(::BlockEventDispatcherToken&& rhs);

    MCAPI void unregister();

    MCAPI ~BlockEventDispatcherToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
