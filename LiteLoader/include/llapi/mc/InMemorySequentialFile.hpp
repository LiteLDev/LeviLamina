/**
 * @file  InMemorySequentialFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InMemorySequentialFile.
 *
 */
class InMemorySequentialFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYSEQUENTIALFILE
public:
    class InMemorySequentialFile& operator=(class InMemorySequentialFile const &) = delete;
    InMemorySequentialFile(class InMemorySequentialFile const &) = delete;
    InMemorySequentialFile() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InMemorySequentialFile();
    /**
     * @hash   1618730565
     * @vftbl  1
     * @symbol  ?Read\@InMemorySequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_KPEAVSlice\@3\@PEAD\@Z
     */
    virtual class leveldb::Status Read(unsigned __int64, class leveldb::Slice *, char *);
    /**
     * @hash   1023338394
     * @vftbl  2
     * @symbol  ?Skip\@InMemorySequentialFile\@\@UEAA?AVStatus\@leveldb\@\@_K\@Z
     */
    virtual class leveldb::Status Skip(unsigned __int64);
    /**
     * @hash   1440796209
     * @symbol  ??0InMemorySequentialFile\@\@QEAA\@V?$shared_ptr\@VInMemoryFile\@\@\@std\@\@\@Z
     */
    MCAPI InMemorySequentialFile(class std::shared_ptr<class InMemoryFile>);

};