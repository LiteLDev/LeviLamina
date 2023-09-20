/**
 * @file  InMemoryWritableFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InMemoryWritableFile.
 *
 */
class InMemoryWritableFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYWRITABLEFILE
public:
    class InMemoryWritableFile& operator=(class InMemoryWritableFile const &) = delete;
    InMemoryWritableFile(class InMemoryWritableFile const &) = delete;
    InMemoryWritableFile() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Append\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@AEBVSlice\@3\@\@Z
     */
    virtual class leveldb::Status Append(class leveldb::Slice const &);
    /**
     * @vftbl 2
     * @symbol ?Close\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Close();
    /**
     * @vftbl 3
     * @symbol ?Flush\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Flush();
    /**
     * @vftbl 4
     * @symbol ?Sync\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Sync();
    /**
     * @symbol ??0InMemoryWritableFile\@\@QEAA\@V?$shared_ptr\@VInMemoryFile\@\@\@std\@\@\@Z
     */
    MCAPI InMemoryWritableFile(class std::shared_ptr<class InMemoryFile>);

};
