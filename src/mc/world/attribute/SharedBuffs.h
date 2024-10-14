#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SharedBuffs {
public:
    // prevent constructor by default
    SharedBuffs& operator=(SharedBuffs const&);
    SharedBuffs(SharedBuffs const&);
    SharedBuffs();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::shared_ptr<class AttributeBuff>& ABSORPTION();

    MCAPI static std::shared_ptr<class AttributeBuff>& FATAL_POISON();

    MCAPI static std::shared_ptr<class AttributeBuff>& FOOD_POSIONING();

    MCAPI static std::shared_ptr<class AttributeBuff>& HARM();

    MCAPI static std::shared_ptr<class AttributeBuff>& HEAL();

    MCAPI static std::shared_ptr<class AttributeBuff>& POISON();

    MCAPI static std::shared_ptr<class AttributeBuff>& PUFFER_POSIONING();

    MCAPI static std::shared_ptr<class AttributeBuff>& REGENERATION();

    MCAPI static std::shared_ptr<class AttributeBuff>& SATURATION();

    MCAPI static std::shared_ptr<class AttributeBuff>& WITHER();

    // NOLINTEND
};
