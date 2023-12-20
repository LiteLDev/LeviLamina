#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/FileReadResult.h"

class AllowListFile {
public:
    // prevent constructor by default
    AllowListFile& operator=(AllowListFile const&);
    AllowListFile(AllowListFile const&);
    AllowListFile();

public:
    // NOLINTBEGIN
    // symbol: ?getAllowList@AllowListFile@@QEBAAEAVAllowList@@XZ
    MCAPI class AllowList& getAllowList() const;

    // symbol: ?reload@AllowListFile@@QEAA?AW4FileReadResult@@XZ
    MCAPI ::FileReadResult reload();

    // symbol: ?syncToDisc@AllowListFile@@QEAAXXZ
    MCAPI void syncToDisc();

    // symbol: ??1AllowListFile@@QEAA@XZ
    MCAPI ~AllowListFile();

    // symbol: ?loadFromDefaultLocations@AllowListFile@@SA?AV1@XZ
    MCAPI static class AllowListFile loadFromDefaultLocations();

    // NOLINTEND
};
