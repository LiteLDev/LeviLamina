#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
struct TickingAreaDescription;
// clang-format on

struct PendingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka15d3e;
    ::ll::UntypedStorage<8, 32> mUnke345ff;
    ::ll::UntypedStorage<8, 8>  mUnk31f2e8;
    ::ll::UntypedStorage<4, 48> mUnk486d03;
    ::ll::UntypedStorage<4, 4>  mUnkb10c27;
    ::ll::UntypedStorage<1, 1>  mUnkea1855;
    ::ll::UntypedStorage<1, 1>  mUnk945e68;
    ::ll::UntypedStorage<1, 1>  mUnk30a5ed;
    ::ll::UntypedStorage<1, 1>  mUnk361e2b;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingArea& operator=(PendingArea const&);
    PendingArea(PendingArea const&);
    PendingArea();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TickingAreaDescription getDescription() const;

    MCAPI ::CompoundTag serialize(::DimensionType dimensionId) const;

    MCAPI ~PendingArea();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PendingArea load(::std::string const& key, ::CompoundTag const& tag);

    MCAPI static bool validTag(::CompoundTag const& tag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
