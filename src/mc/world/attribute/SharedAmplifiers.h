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
    // symbol: ?ABSORPTION@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
    MCAPI static std::shared_ptr<class Amplifier> ABSORPTION;

    // symbol: ?FATAL_POISON@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
    MCAPI static std::shared_ptr<class Amplifier> FATAL_POISON;

    // symbol: ?HARM@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
    MCAPI static std::shared_ptr<class Amplifier> HARM;

    // symbol: ?HEAL@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
    MCAPI static std::shared_ptr<class Amplifier> HEAL;

    // symbol: ?HUNGER_DURATION@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
    MCAPI static std::shared_ptr<class Amplifier> HUNGER_DURATION;

    // symbol: ?HUNGER_VALUE@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
    MCAPI static std::shared_ptr<class Amplifier> HUNGER_VALUE;

    // symbol: ?POISON@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
    MCAPI static std::shared_ptr<class Amplifier> POISON;

    // symbol: ?REGENERATION@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
    MCAPI static std::shared_ptr<class Amplifier> REGENERATION;

    // symbol: ?SATURATION@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
    MCAPI static std::shared_ptr<class Amplifier> SATURATION;

    // symbol: ?WITHER@SharedAmplifiers@@2V?$shared_ptr@VAmplifier@@@std@@A
    MCAPI static std::shared_ptr<class Amplifier> WITHER;

    // NOLINTEND
};
