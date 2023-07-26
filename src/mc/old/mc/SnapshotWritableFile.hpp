/**
 * @file  SnapshotWritableFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SnapshotWritableFile.
 *
 */
class SnapshotWritableFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPSHOTWRITABLEFILE
public:
    class SnapshotWritableFile& operator=(class SnapshotWritableFile const &) = delete;
    SnapshotWritableFile(class SnapshotWritableFile const &) = delete;
    SnapshotWritableFile() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SnapshotWritableFile();
    /**
     * @vftbl  1
     * @symbol  ?Append\@SnapshotWritableFile\@\@UEAA?AVStatus\@leveldb\@\@AEBVSlice\@3\@\@Z
     */
    virtual class leveldb::Status Append(class leveldb::Slice const &);
    /**
     * @vftbl  2
     * @symbol  ?Close\@SnapshotWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Close();
    /**
     * @vftbl  3
     * @symbol  ?Flush\@SnapshotWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Flush();
    /**
     * @vftbl  4
     * @symbol  ?Sync\@SnapshotWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Sync();
    /**
     * @symbol  ??0SnapshotWritableFile\@\@QEAA\@$$QEAPEAVWritableFile\@leveldb\@\@AEAVshared_mutex\@std\@\@\@Z
     */
    MCAPI SnapshotWritableFile(class leveldb::WritableFile *&&, class std::shared_mutex &);

};