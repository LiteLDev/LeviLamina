#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveControlDescription {

public:
    // prevent constructor by default
    MoveControlDescription& operator=(MoveControlDescription const&) = delete;
    MoveControlDescription(MoveControlDescription const&)            = delete;
    MoveControlDescription()                                         = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLDESCRIPTION
    /**
     * @symbol ?deserializeData\@MoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    MCVAPI void deserializeData(struct DeserializeDataParams);
#endif
    // NOLINTEND
};
