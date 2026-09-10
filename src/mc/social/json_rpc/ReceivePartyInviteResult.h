#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

struct ReceivePartyInviteResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk869020;
    ::ll::UntypedStorage<8, 32> mUnk155495;
    ::ll::UntypedStorage<8, 32> mUnk89c277;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ReceivePartyInviteResult& operator=(ReceivePartyInviteResult const&);
    ReceivePartyInviteResult(ReceivePartyInviteResult const&);
    ReceivePartyInviteResult();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ReceivePartyInviteResult& operator=(ReceivePartyInviteResult const&);
    ReceivePartyInviteResult();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ReceivePartyInviteResult(::JsonRpc::ReceivePartyInviteResult const&);

    MCNAPI ~ReceivePartyInviteResult();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::JsonRpc::ReceivePartyInviteResult const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace JsonRpc
