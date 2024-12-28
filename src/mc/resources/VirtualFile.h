#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VirtualFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk50663a;
    ::ll::UntypedStorage<8, 32> mUnk3b3aa5;
    // NOLINTEND

public:
    // prevent constructor by default
    VirtualFile& operator=(VirtualFile const&);
    VirtualFile(VirtualFile const&);
    VirtualFile();
};
