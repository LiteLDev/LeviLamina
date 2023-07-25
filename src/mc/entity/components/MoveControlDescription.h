#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveControlDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLDESCRIPTION
public:
    MoveControlDescription& operator=(MoveControlDescription const&) = delete;
    MoveControlDescription(MoveControlDescription const&)            = delete;
    MoveControlDescription()                                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROLDESCRIPTION
    /**
     * @symbol ?deserializeData\@MoveControlDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    MCVAPI void deserializeData(struct DeserializeDataParams);
#endif
};
