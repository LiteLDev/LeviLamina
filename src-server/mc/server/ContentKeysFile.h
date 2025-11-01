#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContentKeysFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk13b0be;
    ::ll::UntypedStorage<8, 64> mUnkf77bd6;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentKeysFile& operator=(ContentKeysFile const&);
    ContentKeysFile(ContentKeysFile const&);
    ContentKeysFile();

};
