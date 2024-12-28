#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class BlockTickConfigurationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk511b9b;
    ::ll::UntypedStorage<4, 4> mUnk8eba1a;
    ::ll::UntypedStorage<1, 1> mUnk595b3a;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTickConfigurationComponent& operator=(BlockTickConfigurationComponent const&);
    BlockTickConfigurationComponent(BlockTickConfigurationComponent const&);
    BlockTickConfigurationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getRandomTickDelay(::Random& random) const;
    // NOLINTEND
};
