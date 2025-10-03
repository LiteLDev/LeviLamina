#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct FileListReceiver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk3de840;
    ::ll::UntypedStorage<8, 136> mUnk88f252;
    ::ll::UntypedStorage<2, 2>   mUnk52efe1;
    ::ll::UntypedStorage<4, 4>   mUnka593e7;
    ::ll::UntypedStorage<4, 4>   mUnk766b2e;
    ::ll::UntypedStorage<4, 4>   mUnk30df75;
    ::ll::UntypedStorage<4, 4>   mUnk2f7b7f;
    ::ll::UntypedStorage<1, 1>   mUnk6e0a93;
    ::ll::UntypedStorage<1, 1>   mUnkc2fc97;
    ::ll::UntypedStorage<1, 1>   mUnk63a1ed;
    ::ll::UntypedStorage<4, 4>   mUnk5b6fd3;
    ::ll::UntypedStorage<8, 32>  mUnkae8526;
    ::ll::UntypedStorage<4, 4>   mUnk9b478d;
    // NOLINTEND

public:
    // prevent constructor by default
    FileListReceiver& operator=(FileListReceiver const&);
    FileListReceiver(FileListReceiver const&);
    FileListReceiver();
};

} // namespace RakNet
