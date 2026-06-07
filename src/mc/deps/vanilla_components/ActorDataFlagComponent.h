#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataComponentBase.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/world/actor/ActorFlags.h"

struct ActorDataFlagComponent : public ::ActorDataComponentBase<::brstd::bitset<130, uint64>> {
public:
    // member functions
    // NOLINTBEGIN
    MCFOLD uint64 getFlags(int id) const;

    MCFOLD bool getStatusFlag(::ActorFlags flag) const;

    MCAPI ::std::optional<::brstd::bitset<130, uint64>> setFlags(uint64 flags, int id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static uint64 getFlags(::brstd::bitset<130, uint64> const& bitset, int id);

    MCAPI static ::std::optional<::brstd::bitset<130, uint64>>
    setFlags(::brstd::bitset<130, uint64>& bitset, uint64 flags, int id);
    // NOLINTEND
};
