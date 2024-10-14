#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileChunkManager {
public:
    // prevent constructor by default
    FileChunkManager& operator=(FileChunkManager const&);
    FileChunkManager(FileChunkManager const&);

public:
    // NOLINTBEGIN
    MCAPI FileChunkManager();

    MCAPI struct FileChunkInfo getChunkInfo(int chunkID) const;

    MCAPI std::vector<struct FileChunkInfo> const& getChunks() const;

    MCAPI int getTotalNumberOfChunks();

    MCAPI void reset();

    MCAPI void reset(uint64 totalSize, uint chunkSize);

    MCAPI ~FileChunkManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _generateChunkInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
