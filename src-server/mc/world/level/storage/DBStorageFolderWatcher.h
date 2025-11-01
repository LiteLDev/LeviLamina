#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DBStorageFolderWatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1d5032;
    ::ll::UntypedStorage<8, 24> mUnk2a3157;
    ::ll::UntypedStorage<8, 24> mUnk57c511;
    ::ll::UntypedStorage<8, 72> mUnk6e028c;
    ::ll::UntypedStorage<8, 24> mUnk484f55;
    ::ll::UntypedStorage<8, 8> mUnkc37605;
    ::ll::UntypedStorage<8, 80> mUnk98da5c;
    // NOLINTEND

public:
    // prevent constructor by default
    DBStorageFolderWatcher& operator=(DBStorageFolderWatcher const&);
    DBStorageFolderWatcher(DBStorageFolderWatcher const&);
    DBStorageFolderWatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void captureWorldExitSnapshot();

    MCNAPI void captureWorldStartSnapshot();

    MCNAPI void pushSnapshot();
    // NOLINTEND

};
