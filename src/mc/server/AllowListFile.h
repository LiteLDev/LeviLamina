#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/FileReadResult.h"

class AllowListFile {
public:
    // prevent constructor by default
    AllowListFile& operator=(AllowListFile const&);
    AllowListFile(AllowListFile const&);
    AllowListFile();

public:
    // NOLINTBEGIN
    MCAPI class AllowList& getAllowList() const;

    MCAPI ::FileReadResult reload();

    MCAPI void syncToDisc();

    MCAPI ~AllowListFile();

    MCAPI static class AllowListFile loadFromDefaultLocations();

    // NOLINTEND
};
