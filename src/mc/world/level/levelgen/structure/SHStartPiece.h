#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/SHStairsDown.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class SHStartPiece : public ::SHStairsDown {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka76256;
    ::ll::UntypedStorage<8, 8>  mUnk7618fd;
    ::ll::UntypedStorage<8, 32> mUnkbf6972;
    ::ll::UntypedStorage<8, 32> mUnk1f9403;
    ::ll::UntypedStorage<8, 24> mUnkad8592;
    // NOLINTEND

public:
    // prevent constructor by default
    SHStartPiece& operator=(SHStartPiece const&);
    SHStartPiece(SHStartPiece const&);
    SHStartPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::StructurePieceType getType() const /*override*/;

    virtual ~SHStartPiece() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::StructurePieceType $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
