#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FileChunkManager {

public:
    // prevent constructor by default
    FileChunkManager& operator=(FileChunkManager const&) = delete;
    FileChunkManager(FileChunkManager const&)            = delete;

public:
    /**
     * @symbol ??0FileChunkManager\@\@QEAA\@XZ
     */
    MCAPI FileChunkManager(); // NOLINT
    /**
     * @symbol ?getChunkInfo\@FileChunkManager\@\@QEBA?AUFileChunkInfo\@\@H\@Z
     */
    MCAPI struct FileChunkInfo getChunkInfo(int) const; // NOLINT
    /**
     * @symbol
     * ?getChunks\@FileChunkManager\@\@QEBAAEBV?$vector\@UFileChunkInfo\@\@V?$allocator\@UFileChunkInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct FileChunkInfo> const& getChunks() const; // NOLINT
    /**
     * @symbol ?getTotalNumberOfChunks\@FileChunkManager\@\@QEAAHXZ
     */
    MCAPI int getTotalNumberOfChunks(); // NOLINT
    /**
     * @symbol ?reset\@FileChunkManager\@\@QEAAXXZ
     */
    MCAPI void reset(); // NOLINT
    /**
     * @symbol ?reset\@FileChunkManager\@\@QEAAX_KI\@Z
     */
    MCAPI void reset(unsigned __int64, unsigned int); // NOLINT
    /**
     * @symbol ??1FileChunkManager\@\@QEAA\@XZ
     */
    MCAPI ~FileChunkManager(); // NOLINT

    // private:
    /**
     * @symbol ?_generateChunkInfo\@FileChunkManager\@\@AEAAXXZ
     */
    MCAPI void _generateChunkInfo(); // NOLINT

private:
};
