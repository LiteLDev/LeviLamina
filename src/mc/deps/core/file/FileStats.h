#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk954c4f;
    ::ll::UntypedStorage<8, 8> mUnk34e919;
    ::ll::UntypedStorage<8, 8> mUnk9b7184;
    ::ll::UntypedStorage<8, 8> mUnk466072;
    ::ll::UntypedStorage<8, 8> mUnkfe28ac;
    ::ll::UntypedStorage<8, 8> mUnk6d82ec;
    ::ll::UntypedStorage<8, 8> mUnk6a1655;
    ::ll::UntypedStorage<8, 8> mUnkc48866;
    // NOLINTEND

public:
    // prevent constructor by default
    FileStats& operator=(FileStats const&);
    FileStats(FileStats const&);
    FileStats();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();
    // NOLINTEND
};

} // namespace Core
