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
    MCAPI DurationFieldKeys(std::string, std::string, std::string, std::string);

    MCAPI DurationFieldKeys(
        std::string,
        std::string,
        std::string,
        std::string,
        std::string,
        std::string,
        std::string,
        std::string
    );

    MCAPI ~DurationFieldKeys();

    // NOLINTEND
};
