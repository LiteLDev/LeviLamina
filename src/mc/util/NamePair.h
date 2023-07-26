#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TextureSetHelpers {

class NamePair {

public:
    // prevent constructor by default
    NamePair& operator=(NamePair const&) = delete;
    NamePair(NamePair const&)            = delete;
    NamePair()                           = delete;

public:
    /**
     * @symbol ??1NamePair\@TextureSetHelpers\@\@QEAA\@XZ
     */
    MCAPI ~NamePair(); // NOLINT
};

}; // namespace TextureSetHelpers
