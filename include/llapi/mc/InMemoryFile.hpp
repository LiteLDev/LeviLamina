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
     * @symbol  ??0InMemoryFile\@\@QEAA\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI InMemoryFile(class Core::Path const &);
    /**
     * @symbol  ?append\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@AEBVSlice\@3\@\@Z
     */
    MCAPI class leveldb::Status append(class leveldb::Slice const &);
    /**
     * @symbol  ?close\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@W4InMemoryAccessMode\@\@\@Z
     */
    MCAPI class leveldb::Status close(enum class InMemoryAccessMode);
    /**
     * @symbol  ?flushToDisk\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@PEAVEnv\@3\@\@Z
     */
    MCAPI class leveldb::Status flushToDisk(class leveldb::Env *);
    /**
     * @symbol  ?getFilename\@InMemoryFile\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getFilename() const;
    /**
     * @symbol  ?isMarkedDirty\@InMemoryFile\@\@QEBA_NXZ
     */
    MCAPI bool isMarkedDirty() const;
    /**
     * @symbol  ?isSafeToDelete\@InMemoryFile\@\@QEBA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isSafeToDelete(std::string &) const;
    /**
     * @symbol  ?markForDelete\@InMemoryFile\@\@QEAAXXZ
     */
    MCAPI void markForDelete();
    /**
     * @symbol  ?open\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@W4InMemoryAccessMode\@\@\@Z
     */
    MCAPI class leveldb::Status open(enum class InMemoryAccessMode);
    /**
     * @symbol  ?read\@InMemoryFile\@\@QEBA?AVStatus\@leveldb\@\@_K0PEAVSlice\@3\@PEADAEA_K\@Z
     */
    MCAPI class leveldb::Status read(unsigned __int64, unsigned __int64, class leveldb::Slice *, char *, unsigned __int64 &) const;
    /**
     * @symbol  ?rename\@InMemoryFile\@\@QEAAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI void rename(class Core::Path const &);
    /**
     * @symbol  ??1InMemoryFile\@\@QEAA\@XZ
     */
    MCAPI ~InMemoryFile();

};