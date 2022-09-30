/**
 * @file  InMemoryFile.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -1926127895
     * @symbol ??0InMemoryFile@@QEAA@AEBVPath@Core@@@Z
     */
    MCAPI InMemoryFile(class Core::Path const &);
    /**
     * @hash   -1957784086
     * @symbol ?append@InMemoryFile@@QEAA?AVStatus@leveldb@@AEBVSlice@3@@Z
     */
    MCAPI class leveldb::Status append(class leveldb::Slice const &);
    /**
     * @hash   586830699
     * @symbol ?close@InMemoryFile@@QEAA?AVStatus@leveldb@@W4InMemoryAccessMode@@@Z
     */
    MCAPI class leveldb::Status close(enum class InMemoryAccessMode);
    /**
     * @hash   -2028728863
     * @symbol ?flushToDisk@InMemoryFile@@QEAA?AVStatus@leveldb@@PEAVEnv@3@@Z
     */
    MCAPI class leveldb::Status flushToDisk(class leveldb::Env *);
    /**
     * @hash   1845104741
     * @symbol ?getFilename@InMemoryFile@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getFilename() const;
    /**
     * @hash   811429940
     * @symbol ?isMarkedDirty@InMemoryFile@@QEBA_NXZ
     */
    MCAPI bool isMarkedDirty() const;
    /**
     * @hash   1878314943
     * @symbol ?isSafeToDelete@InMemoryFile@@QEBA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool isSafeToDelete(std::string &) const;
    /**
     * @hash   106406163
     * @symbol ?markForDelete@InMemoryFile@@QEAAXXZ
     */
    MCAPI void markForDelete();
    /**
     * @hash   -974406343
     * @symbol ?open@InMemoryFile@@QEAA?AVStatus@leveldb@@W4InMemoryAccessMode@@@Z
     */
    MCAPI class leveldb::Status open(enum class InMemoryAccessMode);
    /**
     * @hash   -1209578926
     * @symbol ?read@InMemoryFile@@QEBA?AVStatus@leveldb@@_K0PEAVSlice@3@PEADAEA_K@Z
     */
    MCAPI class leveldb::Status read(unsigned __int64, unsigned __int64, class leveldb::Slice *, char *, unsigned __int64 &) const;
    /**
     * @hash   -1621394910
     * @symbol ?rename@InMemoryFile@@QEAAXAEBVPath@Core@@@Z
     */
    MCAPI void rename(class Core::Path const &);
    /**
     * @hash   369175804
     * @symbol ??1InMemoryFile@@QEAA@XZ
     */
    MCAPI ~InMemoryFile();

};