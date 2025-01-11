#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BlockSelector.h"

// auto generated forward declare list
// clang-format off
class Block;
class Random;
// clang-format on

class SmoothStoneSelector : public ::BlockSelector {
public:
    // SmoothStoneSelector inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // SmoothStoneSelector inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk588583;
        ::ll::UntypedStorage<8, 8> mUnke7b278;
        ::ll::UntypedStorage<8, 8> mUnkb4a474;
        ::ll::UntypedStorage<8, 8> mUnk7f506e;
        ::ll::UntypedStorage<8, 8> mUnk1028ae;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalRegistry& operator=(LocalRegistry const&);
        LocalRegistry(LocalRegistry const&);
        LocalRegistry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke44132;
    // NOLINTEND

public:
    // prevent constructor by default
    SmoothStoneSelector& operator=(SmoothStoneSelector const&);
    SmoothStoneSelector(SmoothStoneSelector const&);
    SmoothStoneSelector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Block const& next(::Random& random, int, int, int, bool isEdge) const /*override*/;

    // vIndex: 0
    virtual ~SmoothStoneSelector() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const& $next(::Random& random, int, int, int, bool isEdge) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
