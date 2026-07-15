#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockSelector.h"

// auto generated forward declare list
// clang-format off
class Block;
class Random;
// clang-format on

class MossStoneSelector : public ::BlockSelector {
public:
    // MossStoneSelector inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // MossStoneSelector inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> mCobblestone;
        ::ll::TypedStorage<8, 8, ::Block const*> mMossyCobblestone;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::MossStoneSelector::LocalRegistry> mLocalRegistry;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const& next(::Random&, int, int, int, bool) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
