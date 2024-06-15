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
    // symbol: ??0DurationFieldKeys@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    MCAPI DurationFieldKeys(std::string, std::string, std::string, std::string);

    // symbol: ??0DurationFieldKeys@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0000000@Z
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

    // symbol: ??1DurationFieldKeys@@QEAA@XZ
    MCAPI ~DurationFieldKeys();

    // NOLINTEND
};
