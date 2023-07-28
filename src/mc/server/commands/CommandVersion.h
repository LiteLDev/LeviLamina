#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandVersion {

public:
    int mFrom = 1, mTo = 0x7FFFFFFF;
    /**
     * @symbol ??0CommandVersion\@\@QEAA\@HH\@Z
     */
    MCAPI CommandVersion(int, int); // NOLINT
    /**
     * @symbol ?covers\@CommandVersion\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool covers(class CommandVersion const&) const; // NOLINT
    /**
     * @symbol ?isCompatible\@CommandVersion\@\@QEBA_NH\@Z
     */
    MCAPI bool isCompatible(int) const; // NOLINT
    /**
     * @symbol ??9CommandVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class CommandVersion const&) const; // NOLINT
    /**
     * @symbol ?getLatestCompatibleSemVersion\@CommandVersion\@\@SA?AVSemVersion\@\@H\@Z
     */
    MCAPI static class SemVersion getLatestCompatibleSemVersion(int); // NOLINT
    /**
     * @symbol ?getVersionMapping\@CommandVersion\@\@SA?BW4CurrentCmdVersion\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI static enum class CurrentCmdVersion const getVersionMapping(class SemVersion const&); // NOLINT
    /**
     * @symbol ?CurrentVersion\@CommandVersion\@\@2HB
     */
    MCAPI static int const CurrentVersion; // NOLINT
};
