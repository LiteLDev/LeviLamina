#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

struct ReceiveChatResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkadb7b0;
    ::ll::UntypedStorage<8, 32> mUnke888c2;
    ::ll::UntypedStorage<8, 32> mUnk11940a;
    ::ll::UntypedStorage<8, 32> mUnkf9dcd4;
    ::ll::UntypedStorage<8, 32> mUnk5f28e7;
    ::ll::UntypedStorage<8, 32> mUnk26f1d9;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ReceiveChatResult& operator=(ReceiveChatResult const&);
    ReceiveChatResult(ReceiveChatResult const&);
    ReceiveChatResult();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ReceiveChatResult(ReceiveChatResult const&);
    ReceiveChatResult();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ReceiveChatResult(::JsonRpc::ReceiveChatResult&&);

    MCNAPI ::JsonRpc::ReceiveChatResult& operator=(::JsonRpc::ReceiveChatResult&&);

    MCNAPI ::JsonRpc::ReceiveChatResult& operator=(::JsonRpc::ReceiveChatResult const&);

    MCNAPI ~ReceiveChatResult();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::JsonRpc::ReceiveChatResult&&);
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
