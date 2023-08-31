#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"

class CommandVersion {

public:
    int mFrom = 1, mTo = 0x7FFFFFFF;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandVersion\@\@QEAA\@HH\@Z
     */
    MCAPI CommandVersion(int32_t, int32_t);
    /**
     * @symbol ?covers\@CommandVersion\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool covers(class CommandVersion const&) const;
    /**
     * @symbol ?isCompatible\@CommandVersion\@\@QEBA_NH\@Z
     */
    MCAPI bool isCompatible(int32_t) const;
    /**
     * @symbol ??9CommandVersion\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class CommandVersion const&) const;
    /**
     * @symbol ?getLatestCompatibleSemVersion\@CommandVersion\@\@SA?AVSemVersion\@\@H\@Z
     */
    MCAPI static class SemVersion getLatestCompatibleSemVersion(int32_t);
    /**
     * @symbol ?getVersionMapping\@CommandVersion\@\@SA?BW4CurrentCmdVersion\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI static enum class CurrentCmdVersion const getVersionMapping(class SemVersion const&);
    /**
     * @symbol ?CurrentVersion\@CommandVersion\@\@2HB
     */
    MCAPI static int32_t const CurrentVersion;
    // NOLINTEND
};
