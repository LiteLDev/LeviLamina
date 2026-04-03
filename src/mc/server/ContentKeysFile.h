#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentKeysFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2d4e60;
    ::ll::UntypedStorage<8, 64> mUnk9f86c5;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentKeysFile& operator=(ContentKeysFile const&);
    ContentKeysFile(ContentKeysFile const&);
    ContentKeysFile();
};
