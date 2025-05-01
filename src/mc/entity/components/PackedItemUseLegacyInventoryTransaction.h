#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackedItemUseLegacyInventoryTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16>  mUnk38632c;
    ::ll::UntypedStorage<8, 24>  mUnk90121e;
    ::ll::UntypedStorage<8, 264> mUnk88c309;
    // NOLINTEND

public:
    // prevent constructor by default
    PackedItemUseLegacyInventoryTransaction& operator=(PackedItemUseLegacyInventoryTransaction const&);
    PackedItemUseLegacyInventoryTransaction(PackedItemUseLegacyInventoryTransaction const&);
    PackedItemUseLegacyInventoryTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackedItemUseLegacyInventoryTransaction(::PackedItemUseLegacyInventoryTransaction&&);

    MCNAPI ~PackedItemUseLegacyInventoryTransaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackedItemUseLegacyInventoryTransaction&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
