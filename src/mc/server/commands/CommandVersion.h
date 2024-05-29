#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"

class CommandVersion {
public:
    int mFrom = 0, mTo = 0x7FFFFFFF;

    CommandVersion() = default;

public:
    // NOLINTBEGIN
    // symbol: ??0CommandVersion@@QEAA@HH@Z
    MCAPI CommandVersion(int from, int to);

    // symbol: ?covers@CommandVersion@@QEBA_NAEBV1@@Z
    MCAPI bool covers(class CommandVersion const& rhs) const;

    // symbol: ?isCompatible@CommandVersion@@QEBA_NH@Z
    MCAPI bool isCompatible(int version) const;

    // symbol: ??9CommandVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class CommandVersion const& rhs) const;

    // symbol: ?getLatestCompatibleSemVersion@CommandVersion@@SA?AVSemVersion@@H@Z
    MCAPI static class SemVersion getLatestCompatibleSemVersion(int version);

    // symbol: ?getVersionMapping@CommandVersion@@SA?BW4CurrentCmdVersion@@AEBVSemVersion@@@Z
    MCAPI static ::CurrentCmdVersion const getVersionMapping(class SemVersion const& engineVersion);

    // symbol: ?CurrentVersion@CommandVersion@@2HB
    MCAPI static int const CurrentVersion;

    // NOLINTEND
};
