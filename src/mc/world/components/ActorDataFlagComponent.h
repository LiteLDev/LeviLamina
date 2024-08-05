#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"

struct ActorDataFlagComponent {
public:
    // prevent constructor by default
    ActorDataFlagComponent& operator=(ActorDataFlagComponent const&);
    ActorDataFlagComponent(ActorDataFlagComponent const&);
    ActorDataFlagComponent();

public:
    // NOLINTBEGIN
    MCAPI uint64 getFlags(int) const;

    MCAPI bool getStatusFlag(::ActorFlags) const;

    MCAPI static uint64 getFlags(std::bitset<119> const&, int);

    MCAPI static std::bitset<119> const ALL_HIGHER_ONES;

    MCAPI static std::bitset<119> const ALL_LOWER_ONES;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::optional<std::bitset<119>> setFlags(uint64, int);

    MCAPI void setStatusFlag(::ActorFlags, bool);

    MCAPI static std::optional<std::bitset<119>> setFlags(std::bitset<119>&, uint64, int);

    // NOLINTEND
};
