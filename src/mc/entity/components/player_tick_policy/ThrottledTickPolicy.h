#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IPlayerTickPolicy.h"

namespace PlayerTickPolicy {

struct ThrottledTickPolicy : public ::IPlayerTickPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb54545;
    ::ll::UntypedStorage<8, 8> mUnk5554b9;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledTickPolicy& operator=(ThrottledTickPolicy const&);
    ThrottledTickPolicy(ThrottledTickPolicy const&);
    ThrottledTickPolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual uint64 getMaxTickCount(uint64 const creditTicks, bool hasQueuedInput) const /*override*/;

    // vIndex: 2
    virtual ::IPlayerTickPolicy::TickAction
    shouldTickPlayer(uint64 const creditTicks, uint64 unprocessedTicksSize) const /*override*/;

    // vIndex: 0
    virtual ~ThrottledTickPolicy() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint64 $getMaxTickCount(uint64 const creditTicks, bool hasQueuedInput) const;

    MCAPI ::IPlayerTickPolicy::TickAction
    $shouldTickPlayer(uint64 const creditTicks, uint64 unprocessedTicksSize) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerTickPolicy
