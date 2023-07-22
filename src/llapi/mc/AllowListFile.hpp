/**
 * @file  AllowListFile.hpp
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
 * @brief MC class AllowListFile.
 *
 */
class AllowListFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLOWLISTFILE
public:
    class AllowListFile& operator=(class AllowListFile const &) = delete;
    AllowListFile(class AllowListFile const &) = delete;
    AllowListFile() = delete;
#endif

public:
    /**
     * @symbol  ?getAllowList\@AllowListFile\@\@QEBAAEAVAllowList\@\@XZ
     */
    MCAPI class AllowList & getAllowList() const;
    /**
     * @symbol  ?reload\@AllowListFile\@\@QEAA?AW4FileReadResult\@\@XZ
     */
    MCAPI enum class FileReadResult reload();
    /**
     * @symbol  ?syncToDisc\@AllowListFile\@\@QEAAXXZ
     */
    MCAPI void syncToDisc();
    /**
     * @symbol  ??1AllowListFile\@\@QEAA\@XZ
     */
    MCAPI ~AllowListFile();
    /**
     * @symbol  ?loadFromDefaultLocations\@AllowListFile\@\@SA?AV1\@AEAVIFileSystem\@Core\@\@\@Z
     */
    MCAPI static class AllowListFile loadFromDefaultLocations(class Core::IFileSystem &);

};