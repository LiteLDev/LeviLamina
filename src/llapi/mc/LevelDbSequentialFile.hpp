/**
 * @file  LevelDbSequentialFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelDbSequentialFile.
 *
 */
class LevelDbSequentialFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBSEQUENTIALFILE
public:
    class LevelDbSequentialFile& operator=(class LevelDbSequentialFile const &) = delete;
    LevelDbSequentialFile(class LevelDbSequentialFile const &) = delete;
    LevelDbSequentialFile() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelDbSequentialFile();
    /**
     * @vftbl  1
     * @symbol  ?Read\@LevelDbSequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_KPEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status Read(unsigned __int64, class leveldb::Slice *, char *);
    /**
     * @vftbl  2
     * @symbol  ?Skip\@LevelDbSequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_K\@Z
     */
    virtual class leveldb::Status Skip(unsigned __int64);
    /**
     * @symbol  ??0LevelDbSequentialFile\@\@QEAA\@$$QEAVFile\@Core\@\@\@Z
     */
    MCAPI LevelDbSequentialFile(class Core::File &&);

};