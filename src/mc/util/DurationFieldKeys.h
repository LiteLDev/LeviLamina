#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DurationFieldKeys {
public:
    // prevent constructor by default
    DurationFieldKeys& operator=(DurationFieldKeys const&);
    DurationFieldKeys(DurationFieldKeys const&);
    DurationFieldKeys();

public:
    // NOLINTBEGIN
    MCAPI DurationFieldKeys(std::string days, std::string hours, std::string minutes, std::string seconds);

    MCAPI DurationFieldKeys(
        std::string days,
        std::string hours,
        std::string minutes,
        std::string seconds,
        std::string day,
        std::string hour,
        std::string minute,
        std::string second
    );

    MCAPI ~DurationFieldKeys();

    // NOLINTEND
};
