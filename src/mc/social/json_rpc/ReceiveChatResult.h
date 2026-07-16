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

public:
    // prevent constructor by default
    ReceiveChatResult& operator=(ReceiveChatResult const&);
    ReceiveChatResult(ReceiveChatResult const&);
    ReceiveChatResult();
};

} // namespace JsonRpc
