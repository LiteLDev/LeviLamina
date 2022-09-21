/**
 * @file  MC/FileChunkManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FileChunkManager.
 *
 */
class FileChunkManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILECHUNKMANAGER
public:
    class FileChunkManager& operator=(class FileChunkManager const &) = delete;
    FileChunkManager(class FileChunkManager const &) = delete;
#endif

public:
    /**
     * @hash   -1274317496
     * @symbol ??0FileChunkManager@@QEAA@XZ
     */
    MCAPI FileChunkManager();
    /**
     * @hash   545496755
     * @symbol ?getChunkInfo@FileChunkManager@@QEBA?AUFileChunkInfo@@H@Z
     */
    MCAPI struct FileChunkInfo getChunkInfo(int) const;
    /**
     * @hash   303051052
     * @symbol ?getChunks@FileChunkManager@@QEBAAEBV?$vector@UFileChunkInfo@@V?$allocator@UFileChunkInfo@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct FileChunkInfo> const & getChunks() const;
    /**
     * @hash   1804496138
     * @symbol ?getTotalNumberOfChunks@FileChunkManager@@QEAAHXZ
     */
    MCAPI int getTotalNumberOfChunks();
    /**
     * @hash   1945738915
     * @symbol ?reset@FileChunkManager@@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   1478988044
     * @symbol ?reset@FileChunkManager@@QEAAX_KI@Z
     */
    MCAPI void reset(unsigned __int64, unsigned int);
    /**
     * @hash   -2106069162
     * @symbol ??1FileChunkManager@@QEAA@XZ
     */
    MCAPI ~FileChunkManager();

//private:
    /**
     * @hash   -1404984969
     * @symbol ?_generateChunkInfo@FileChunkManager@@AEAAXXZ
     */
    MCAPI void _generateChunkInfo();

private:

};