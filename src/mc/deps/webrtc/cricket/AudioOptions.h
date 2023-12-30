#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct AudioOptions {
public:
    // prevent constructor by default
    AudioOptions& operator=(AudioOptions const&);
    AudioOptions(AudioOptions const&);

public:
    // NOLINTBEGIN
    // symbol: ??0AudioOptions@cricket@@QEAA@XZ
    MCAPI AudioOptions();

    // symbol: ?ToString@AudioOptions@cricket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??1AudioOptions@cricket@@QEAA@XZ
    MCAPI ~AudioOptions();

    // NOLINTEND
};

}; // namespace cricket
