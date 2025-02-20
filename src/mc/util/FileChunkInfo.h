#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileChunkInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8667ac;
    ::ll::UntypedStorage<8, 8> mUnk166ab6;
    ::ll::UntypedStorage<8, 8> mUnk85b76a;
    // NOLINTEND

public:
    // prevent constructor by default
    FileChunkInfo& operator=(FileChunkInfo const&);
    FileChunkInfo(FileChunkInfo const&);
    FileChunkInfo();
};
