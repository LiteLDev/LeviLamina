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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InMemoryWritableFile();
    /**
     * @hash   1354818525
     * @vftbl  1
     * @symbol  ?Append\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@AEBVSlice\@3\@\@Z
     */
    virtual class leveldb::Status Append(class leveldb::Slice const &);
    /**
     * @hash   -978297630
     * @vftbl  2
     * @symbol  ?Close\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    virtual class leveldb::Status Close();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INMEMORYWRITABLEFILE
    /**
     * @hash   -2116509154
     * @symbol  ?Flush\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    MCVAPI class leveldb::Status Flush();
    /**
     * @hash   833818901
     * @symbol  ?Sync\@InMemoryWritableFile\@\@UEAA?AVStatus\@leveldb\@\@XZ
     */
    MCVAPI class leveldb::Status Sync();
#endif
    /**
     * @hash   1400783600
     * @symbol  ??0InMemoryWritableFile\@\@QEAA\@V?$shared_ptr\@VInMemoryFile\@\@\@std\@\@\@Z
     */
    MCAPI InMemoryWritableFile(class std::shared_ptr<class InMemoryFile>);

};