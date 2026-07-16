#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbLazyFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc14c3f;
    ::ll::UntypedStorage<8, 16> mUnk59f9b8;
    ::ll::UntypedStorage<8, 16> mUnk6129c9;
    ::ll::UntypedStorage<1, 2>  mUnk60005c;
    ::ll::UntypedStorage<4, 4>  mUnkc82210;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbLazyFile& operator=(LevelDbLazyFile const&);
    LevelDbLazyFile(LevelDbLazyFile const&);
    LevelDbLazyFile();
};
