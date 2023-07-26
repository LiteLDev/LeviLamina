#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileChunkInfo {

public:
    // prevent constructor by default
    FileChunkInfo& operator=(FileChunkInfo const&) = delete;
    FileChunkInfo(FileChunkInfo const&)            = delete;
    FileChunkInfo()                                = delete;

public:
    /**
     * @symbol ??0FileChunkInfo\@\@QEAA\@H_K0\@Z
     */
    MCAPI FileChunkInfo(int, unsigned __int64, unsigned __int64); // NOLINT
    /**
     * @symbol ?isValid\@FileChunkInfo\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ?size\@FileChunkInfo\@\@QEBAHXZ
     */
    MCAPI int size() const; // NOLINT
};
