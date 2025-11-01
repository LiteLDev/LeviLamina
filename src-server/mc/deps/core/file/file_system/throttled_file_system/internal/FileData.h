#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Internal {

class FileData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk26e6a0;
    ::ll::UntypedStorage<8, 8> mUnkf39728;
    ::ll::UntypedStorage<8, 8> mUnkec4a5d;
    ::ll::UntypedStorage<8, 64> mUnkdb1e96;
    ::ll::UntypedStorage<8, 64> mUnka79bc3;
    ::ll::UntypedStorage<4, 4> mUnk2c8bd7;
    ::ll::UntypedStorage<8, 16> mUnk80ab4b;
    ::ll::UntypedStorage<8, 8> mUnke248bb;
    ::ll::UntypedStorage<8, 8> mUnkaa0b7a;
    ::ll::UntypedStorage<1, 1> mUnkaa6ba1;
    ::ll::UntypedStorage<1, 1> mUnk91c180;
    ::ll::UntypedStorage<8, 8> mUnk7f49c0;
    // NOLINTEND

public:
    // prevent constructor by default
    FileData& operator=(FileData const&);
    FileData(FileData const&);
    FileData();

};

}
