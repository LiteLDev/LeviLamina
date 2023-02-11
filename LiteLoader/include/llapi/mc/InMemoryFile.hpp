/**
 * @file  InMemoryFile.hpp
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
 * @brief MC class InMemoryFile.
 *
 */
class InMemoryFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYFILE
public:
    class InMemoryFile& operator=(class InMemoryFile const &) = delete;
    InMemoryFile(class InMemoryFile const &) = delete;
    InMemoryFile() = delete;
#endif

public:
    /**
     * @hash   -1218647383
     * @symbol  ??0InMemoryFile\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI InMemoryFile(class Core::Path const &);
    /**
     * @hash   -1250318950
     * @symbol  ?append\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@AEBVSlice\@3\@\@Z
     */
    MCAPI class leveldb::Status append(class leveldb::Slice const &);
    /**
     * @hash   1294295835
     * @symbol  ?close\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@W4InMemoryAccessMode\@\@\@Z
     */
    MCAPI class leveldb::Status close(enum class InMemoryAccessMode);
    /**
     * @hash   -1321263727
     * @symbol  ?flushToDisk\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@PEAVEnv\@3\@\@Z
     */
    MCAPI class leveldb::Status flushToDisk(class leveldb::Env *);
    /**
     * @hash   -1742412795
     * @symbol  ?getFilename\@InMemoryFile\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getFilename() const;
    /**
     * @hash   1518879700
     * @symbol  ?isMarkedDirty\@InMemoryFile\@\@QEBA_NXZ
     */
    MCAPI bool isMarkedDirty() const;
    /**
     * @hash   -1709202593
     * @symbol  ?isSafeToDelete\@InMemoryFile\@\@QEBA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isSafeToDelete(std::string &) const;
    /**
     * @hash   813855923
     * @symbol  ?markForDelete\@InMemoryFile\@\@QEAAXXZ
     */
    MCAPI void markForDelete();
    /**
     * @hash   -266956583
     * @symbol  ?open\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@W4InMemoryAccessMode\@\@\@Z
     */
    MCAPI class leveldb::Status open(enum class InMemoryAccessMode);
    /**
     * @hash   -502129166
     * @symbol  ?read\@InMemoryFile\@\@QEBA?AVStatus\@leveldb\@\@_K0PEAVSlice\@3\@PEADAEA_K\@Z
     */
    MCAPI class leveldb::Status read(unsigned __int64, unsigned __int64, class leveldb::Slice *, char *, unsigned __int64 &) const;
    /**
     * @hash   -913945150
     * @symbol  ?rename\@InMemoryFile\@\@QEAAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI void rename(class Core::Path const &);
    /**
     * @hash   1076640940
     * @symbol  ??1InMemoryFile\@\@QEAA\@XZ
     */
    MCAPI ~InMemoryFile();

};