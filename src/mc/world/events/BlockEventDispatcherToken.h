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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockEventDispatcherToken();

    MCAPI BlockEventDispatcherToken(::BlockEventDispatcherToken&& rhs);

    MCFOLD ::BlockEventDispatcher* getDispatcher() const;

    MCFOLD int getHandle() const;

    MCAPI bool isValid() const;

    MCAPI ::BlockEventDispatcherToken& operator=(::BlockEventDispatcherToken&& rhs);

    MCAPI void unregister();

    MCAPI ~BlockEventDispatcherToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockEventDispatcherToken&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
