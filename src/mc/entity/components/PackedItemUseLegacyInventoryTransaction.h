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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackedItemUseLegacyInventoryTransaction();

    MCAPI PackedItemUseLegacyInventoryTransaction(::PackedItemUseLegacyInventoryTransaction&&);

    MCAPI ~PackedItemUseLegacyInventoryTransaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PackedItemUseLegacyInventoryTransaction&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
