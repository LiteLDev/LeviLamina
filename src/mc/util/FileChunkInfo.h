#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileChunkInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILECHUNKINFO
public:
    FileChunkInfo& operator=(FileChunkInfo const&) = delete;
    FileChunkInfo(FileChunkInfo const&)            = delete;
    FileChunkInfo()                                = delete;
#endif

public:
    /**
     * @symbol ??0FileChunkInfo\@\@QEAA\@H_K0\@Z
     */
    MCAPI FileChunkInfo(int, unsigned __int64, unsigned __int64);
    /**
     * @symbol ?isValid\@FileChunkInfo\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ?size\@FileChunkInfo\@\@QEBAHXZ
     */
    MCAPI int size() const;
};
