#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NBBridgeCrossing.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class NBStartPiece : public ::NBBridgeCrossing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf837b7;
    ::ll::UntypedStorage<8, 24> mUnk50f3f8;
    ::ll::UntypedStorage<8, 24> mUnk323fd5;
    ::ll::UntypedStorage<8, 24> mUnka13de3;
    // NOLINTEND

public:
    // prevent constructor by default
    NBStartPiece& operator=(NBStartPiece const&);
    NBStartPiece(NBStartPiece const&);
    NBStartPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::StructurePieceType getType() const /*override*/;

    // vIndex: 0
    virtual ~NBStartPiece() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NBStartPiece(::Random& random, int west, int north);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Random& random, int west, int north);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::StructurePieceType $getType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
