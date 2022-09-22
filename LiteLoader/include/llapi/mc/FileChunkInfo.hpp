/**
 * @file  FileChunkInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure FileChunkInfo.
 *
 */
struct FileChunkInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILECHUNKINFO
public:
    struct FileChunkInfo& operator=(struct FileChunkInfo const &) = delete;
    FileChunkInfo(struct FileChunkInfo const &) = delete;
    FileChunkInfo() = delete;
#endif

public:
    /**
     * @hash   538322018
     * @symbol ??0FileChunkInfo@@QEAA@H_K0@Z
     */
    MCAPI FileChunkInfo(int, unsigned __int64, unsigned __int64);
    /**
     * @hash   -1342741520
     * @symbol ?isValid@FileChunkInfo@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -847486440
     * @symbol ?size@FileChunkInfo@@QEBAHXZ
     */
    MCAPI int size() const;

};