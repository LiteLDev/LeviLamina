#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileChunkManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk75a1ec;
    ::ll::UntypedStorage<4, 4>  mUnk14ab71;
    ::ll::UntypedStorage<8, 8>  mUnk357f73;
    ::ll::UntypedStorage<8, 8>  mUnk28283b;
    ::ll::UntypedStorage<8, 8>  mUnkf83456;
    ::ll::UntypedStorage<8, 8>  mUnka2a2bc;
    ::ll::UntypedStorage<8, 24> mUnkac2dc4;
    ::ll::UntypedStorage<8, 24> mUnk29e33c;
    // NOLINTEND

public:
    // prevent constructor by default
    FileChunkManager& operator=(FileChunkManager const&);
    FileChunkManager(FileChunkManager const&);
    FileChunkManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _generateChunkInfo();

    MCAPI void reset(uint64 totalSize, uint chunkSize);
    // NOLINTEND
};
