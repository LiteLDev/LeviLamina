/**
 * @file  MC/SnapshotWritableFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~SnapshotWritableFile();
    /**
     * @hash   884123259
     * @vftbl  1
     * @symbol ?Append@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
     */
    virtual class leveldb::Status Append(class leveldb::Slice const &);
    /**
     * @hash   -963918700
     * @vftbl  2
     * @symbol ?Close@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@XZ
     */
    virtual class leveldb::Status Close();
    /**
     * @hash   853329280
     * @vftbl  3
     * @symbol ?Flush@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@XZ
     */
    virtual class leveldb::Status Flush();
    /**
     * @hash   -491217705
     * @vftbl  4
     * @symbol ?Sync@SnapshotWritableFile@@UEAA?AVStatus@leveldb@@XZ
     */
    virtual class leveldb::Status Sync();
    /**
     * @hash   1600843776
     * @symbol ??0SnapshotWritableFile@@QEAA@$$QEAPEAVWritableFile@leveldb@@AEAVshared_mutex@std@@@Z
     */
    MCAPI SnapshotWritableFile(class leveldb::WritableFile *&&, class std::shared_mutex &);

};