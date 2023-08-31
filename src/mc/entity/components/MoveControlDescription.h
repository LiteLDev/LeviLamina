#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct MoveControlDescription : public ::ActorComponentDescription {

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
