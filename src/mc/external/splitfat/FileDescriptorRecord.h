#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

struct FileDescriptorRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 128> mUnkd3350c;
    ::ll::UntypedStorage<4, 4>   mUnk5a8be7;
    ::ll::UntypedStorage<4, 4>   mUnk580643;
    ::ll::UntypedStorage<8, 8>   mUnk14c84e;
    ::ll::UntypedStorage<4, 4>   mUnkfa93a4;
    ::ll::UntypedStorage<4, 4>   mUnk5bc673;
    ::ll::UntypedStorage<8, 8>   mUnkd3bf38;
    ::ll::UntypedStorage<8, 8>   mUnk1adc39;
    ::ll::UntypedStorage<4, 4>   mUnk2f974b;
    ::ll::UntypedStorage<4, 4>   mUnkbfb288;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDescriptorRecord& operator=(FileDescriptorRecord const&);
    FileDescriptorRecord(FileDescriptorRecord const&);
    FileDescriptorRecord();
};

} // namespace SFAT
