/**
 * @file  LevelDbWritableFile.hpp
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
 * @brief MC class LevelDbWritableFile.
 *
 */
class LevelDbWritableFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBWRITABLEFILE
public:
    class LevelDbWritableFile& operator=(class LevelDbWritableFile const &) = delete;
    LevelDbWritableFile(class LevelDbWritableFile const &) = delete;
    LevelDbWritableFile() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelDbWritableFile();
    /**
     * @vftbl  1
     * @symbol  ?Append\@LevelDbWritableFile\@\@UEAA?AVStatus\@leveldb\@\@AEBVSlice\@3\@\@Z
     */
    virtual class leveldb::Status Append(class leveldb::Slice const &);
    /**
     * @vftbl  2
     * @symbol  ?Close\@LevelDbWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Close();
    /**
     * @vftbl  3
     * @symbol  ?Flush\@LevelDbWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Flush();
    /**
     * @vftbl  4
     * @symbol  ?Sync\@LevelDbWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Sync();
    /**
     * @symbol  ??0LevelDbWritableFile\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAVFile\@Core\@\@\@Z
     */
    MCAPI LevelDbWritableFile(std::string, class Core::File &&);

//private:
    /**
     * @symbol  ?SyncDirIfManifest\@LevelDbWritableFile\@\@AEAA?AVStatus\@leveldb\@\@XZ
     */
    MCAPI class leveldb::Status SyncDirIfManifest();

private:

};