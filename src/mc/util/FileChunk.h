#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileChunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf0ebcc;
    ::ll::UntypedStorage<8, 24> mUnkb34edc;
    // NOLINTEND

public:
    // prevent constructor by default
    FileChunk& operator=(FileChunk const&);
    FileChunk(FileChunk const&);
    FileChunk();
};
