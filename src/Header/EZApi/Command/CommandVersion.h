#pragma once

#include "../dll.h"

class CommandVersion {
public:
    int minVersion, maxVersion;
    inline CommandVersion()
        : minVersion(0)
        , maxVersion(0x7FFFFFFF) {
    }
    inline CommandVersion(int minVersion, int maxVersion)
        : minVersion(minVersion)
        , maxVersion(maxVersion) {
    }
    static MCAPI int const CurrentVersion;
};