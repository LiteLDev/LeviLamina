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
        ::ll::UntypedStorage<8, 8> mUnk927816;
        ::ll::UntypedStorage<8, 8> mUnk5492bf;
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
    ::ll::UntypedStorage<8, 16> mUnkd83ee1;
    // NOLINTEND

public:
    // prevent constructor by default
    MossStoneSelector& operator=(MossStoneSelector const&);
    MossStoneSelector(MossStoneSelector const&);
    MossStoneSelector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Block const& next(::Random& random, int, int, int, bool) const /*override*/;

    // vIndex: 0
    virtual ~MossStoneSelector() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const& $next(::Random& random, int, int, int, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
