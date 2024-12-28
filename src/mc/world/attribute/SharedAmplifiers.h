#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Amplifier;
// clang-format on

class SharedAmplifiers {
public:
    // prevent constructor by default
    SharedAmplifiers& operator=(SharedAmplifiers const&);
    SharedAmplifiers(SharedAmplifiers const&);
    SharedAmplifiers();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::Amplifier>& ABSORPTION();

    MCAPI static ::std::shared_ptr<::Amplifier>& FATAL_POISON();

    MCAPI static ::std::shared_ptr<::Amplifier>& HARM();

    MCAPI static ::std::shared_ptr<::Amplifier>& HEAL();

    MCAPI static ::std::shared_ptr<::Amplifier>& HUNGER_DURATION();

    MCAPI static ::std::shared_ptr<::Amplifier>& HUNGER_VALUE();

    MCAPI static ::std::shared_ptr<::Amplifier>& POISON();

    MCAPI static ::std::shared_ptr<::Amplifier>& REGENERATION();

    MCAPI static ::std::shared_ptr<::Amplifier>& SATURATION();

    MCAPI static ::std::shared_ptr<::Amplifier>& WITHER();
    // NOLINTEND
};
