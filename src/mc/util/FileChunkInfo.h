#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileChunkInfo {
public:
    // prevent constructor by default
    FileChunkInfo& operator=(FileChunkInfo const&);
    FileChunkInfo(FileChunkInfo const&);
    FileChunkInfo();

public:
    // NOLINTBEGIN
    MCAPI FileChunkInfo(int _chunk, uint64 _startByte, uint64 _endByte);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
