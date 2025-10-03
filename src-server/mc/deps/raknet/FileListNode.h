#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct FileListNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk932b62;
    ::ll::UntypedStorage<8, 8>  mUnk41bd53;
    ::ll::UntypedStorage<8, 8>  mUnkf52c4d;
    ::ll::UntypedStorage<4, 4>  mUnkd63424;
    ::ll::UntypedStorage<4, 4>  mUnk38e6f3;
    ::ll::UntypedStorage<8, 32> mUnk93daa7;
    ::ll::UntypedStorage<1, 1>  mUnke85f4d;
    // NOLINTEND

public:
    // prevent constructor by default
    FileListNode& operator=(FileListNode const&);
    FileListNode(FileListNode const&);
    FileListNode();
};

} // namespace RakNet
