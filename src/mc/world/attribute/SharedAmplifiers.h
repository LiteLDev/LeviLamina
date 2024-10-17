#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SharedAmplifiers {
public:
    // prevent constructor by default
    SharedAmplifiers& operator=(SharedAmplifiers const&);
    SharedAmplifiers(SharedAmplifiers const&);
    SharedAmplifiers();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::shared_ptr<class Amplifier>& ABSORPTION();

    MCAPI static std::shared_ptr<class Amplifier>& FATAL_POISON();

    MCAPI static std::shared_ptr<class Amplifier>& HARM();

    MCAPI static std::shared_ptr<class Amplifier>& HEAL();

    MCAPI static std::shared_ptr<class Amplifier>& HUNGER_DURATION();

    MCAPI static std::shared_ptr<class Amplifier>& HUNGER_VALUE();

    MCAPI static std::shared_ptr<class Amplifier>& POISON();

    MCAPI static std::shared_ptr<class Amplifier>& REGENERATION();

    MCAPI static std::shared_ptr<class Amplifier>& SATURATION();

    MCAPI static std::shared_ptr<class Amplifier>& WITHER();

    // NOLINTEND
};
