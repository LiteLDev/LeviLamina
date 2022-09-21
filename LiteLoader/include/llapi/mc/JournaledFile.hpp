/**
 * @file  MC/JournaledFile.hpp
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
 * @brief MC class JournaledFile.
 *
 */
class JournaledFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JOURNALEDFILE
public:
    class JournaledFile& operator=(class JournaledFile const &) = delete;
    JournaledFile(class JournaledFile const &) = delete;
    JournaledFile() = delete;
#endif

public:
    /**
     * @hash   -198905902
     * @symbol ??0JournaledFile@@QEAA@$$QEAV?$function@$$A6A?AVResult@Core@@VPath@2@@Z@std@@@Z
     */
    MCAPI JournaledFile(class std::function<class Core::Result (class Core::Path)> &&);
    /**
     * @hash   -1727495219
     * @symbol ?open@JournaledFile@@QEAA?AVResult@Core@@VPath@3@VFileOpenMode@3@W4FileBufferingMode@3@@Z
     */
    MCAPI class Core::Result open(class Core::Path, class Core::FileOpenMode, enum Core::FileBufferingMode);
    /**
     * @hash   -1493131966
     * @symbol ?write@JournaledFile@@QEAA?AVResult@Core@@PEBX_K@Z
     */
    MCAPI class Core::Result write(void const *, unsigned __int64);
    /**
     * @hash   -1755721842
     * @symbol ??1JournaledFile@@QEAA@XZ
     */
    MCAPI ~JournaledFile();
    /**
     * @hash   -123416586
     * @symbol ?findBackupPath@JournaledFile@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@VPath@3@@Z
     */
    MCAPI static class Core::PathBuffer<std::string> findBackupPath(class Core::Path);
    /**
     * @hash   2105933078
     * @symbol ?findReadPath@JournaledFile@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@VPath@3@@Z
     */
    MCAPI static class Core::PathBuffer<std::string> findReadPath(class Core::Path);
    /**
     * @hash   1642170381
     * @symbol ?isOldFile@JournaledFile@@SA_NVPath@Core@@@Z
     */
    MCAPI static bool isOldFile(class Core::Path);
    /**
     * @hash   866898090
     * @symbol ?populateImportantFiles@JournaledFile@@SAXVPath@Core@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI static void populateImportantFiles(class Core::Path, std::vector<std::string> &);
    /**
     * @hash   1514741951
     * @symbol ?replaceHeadFileWithBackup@JournaledFile@@SA?AVResult@Core@@VPath@3@@Z
     */
    MCAPI static class Core::Result replaceHeadFileWithBackup(class Core::Path);

//private:
    /**
     * @hash   -1635905860
     * @symbol ?_flushFiles@JournaledFile@@AEAAXXZ
     */
    MCAPI void _flushFiles();

private:

};