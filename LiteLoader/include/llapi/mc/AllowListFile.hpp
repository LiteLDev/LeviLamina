/**
 * @file  AllowListFile.hpp
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
     * @hash   524973496
     * @symbol ?getAllowList@AllowListFile@@QEBAAEAVAllowList@@XZ
     */
    MCAPI class AllowList & getAllowList() const;
    /**
     * @hash   1173930340
     * @symbol ?reload@AllowListFile@@QEAA?AW4FileReadResult@@XZ
     */
    MCAPI enum FileReadResult reload();
    /**
     * @hash   -422021735
     * @symbol ?syncToDisc@AllowListFile@@QEAAXXZ
     */
    MCAPI void syncToDisc();
    /**
     * @hash   -699477281
     * @symbol ??1AllowListFile@@QEAA@XZ
     */
    MCAPI ~AllowListFile();
    /**
     * @hash   -610441655
     * @symbol ?loadFromDefaultLocations@AllowListFile@@SA?AV1@AEAVIFileSystem@Core@@@Z
     */
    MCAPI static class AllowListFile loadFromDefaultLocations(class Core::IFileSystem &);

};