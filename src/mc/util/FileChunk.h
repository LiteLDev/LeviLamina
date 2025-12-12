#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FileChunkInfo.h"

struct FileChunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> data;
    ::ll::TypedStorage<8, 24, ::FileChunkInfo>      info;
    // NOLINTEND

public:
    // prevent constructor by default
    FileChunk& operator=(FileChunk const&);
    FileChunk(FileChunk const&);
    FileChunk();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::FileChunk& operator=(::FileChunk&&);

    MCNAPI_C ~FileChunk();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
