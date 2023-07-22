/**
 * @file  LevelDbRandomAccessFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelDbRandomAccessFile.
 *
 */
class LevelDbRandomAccessFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBRANDOMACCESSFILE
public:
    class LevelDbRandomAccessFile& operator=(class LevelDbRandomAccessFile const &) = delete;
    LevelDbRandomAccessFile(class LevelDbRandomAccessFile const &) = delete;
    LevelDbRandomAccessFile() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelDbRandomAccessFile();
    /**
     * @vftbl  1
     * @symbol  ?Read\@LevelDbRandomAccessFile\@\@UEBA?AVStatus\@leveldb\@\@_K0PEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status Read(unsigned __int64, unsigned __int64, class leveldb::Slice *, char *) const;
    /**
     * @symbol  ??0LevelDbRandomAccessFile\@\@QEAA\@$$QEAVFile\@Core\@\@\@Z
     */
    MCAPI LevelDbRandomAccessFile(class Core::File &&);

};