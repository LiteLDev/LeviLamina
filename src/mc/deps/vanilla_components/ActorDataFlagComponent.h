#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataComponentBase.h"
#include "mc/world/actor/ActorFlags.h"

struct ActorDataFlagComponent : public ::ActorDataComponentBase<::std::bitset<119>> {
public:
    // prevent constructor by default
    ActorDataFlagComponent& operator=(ActorDataFlagComponent const&);
    ActorDataFlagComponent(ActorDataFlagComponent const&);
    ActorDataFlagComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint64 getFlags(int id) const;

    MCAPI bool getStatusFlag(::ActorFlags flag) const;

    MCAPI ::std::optional<::std::bitset<119>> setFlags(uint64 flags, int id);

    MCAPI void setStatusFlag(::ActorFlags flag, bool value);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 getFlags(::std::bitset<119> const& bitset, int id);

    MCAPI static ::std::optional<::std::bitset<119>> setFlags(::std::bitset<119>& bitset, uint64 flags, int id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::bitset<119> const& ALL_HIGHER_ONES();

    MCAPI static ::std::bitset<119> const& ALL_LOWER_ONES();
    // NOLINTEND
};
