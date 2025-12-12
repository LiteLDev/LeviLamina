#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
// clang-format on

class ScatteredFeaturePiece : public ::StructurePiece {
public:
    // ScatteredFeaturePiece inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // ScatteredFeaturePiece inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka0d4c3;
        ::ll::UntypedStorage<8, 8> mUnke2e410;
        ::ll::UntypedStorage<8, 8> mUnk471d7e;
        ::ll::UntypedStorage<8, 8> mUnk5c5ca2;
        ::ll::UntypedStorage<8, 8> mUnk23b104;
        ::ll::UntypedStorage<8, 8> mUnkfcca70;
        ::ll::UntypedStorage<8, 8> mUnk80537b;
        ::ll::UntypedStorage<8, 8> mUnkef7b9d;
        ::ll::UntypedStorage<8, 8> mUnk39562f;
        ::ll::UntypedStorage<8, 8> mUnk106f39;
        ::ll::UntypedStorage<8, 8> mUnk7eed11;
        ::ll::UntypedStorage<8, 8> mUnkc68161;
        ::ll::UntypedStorage<8, 8> mUnk10e49e;
        ::ll::UntypedStorage<8, 8> mUnkfc6d83;
        ::ll::UntypedStorage<8, 8> mUnk558cc0;
        ::ll::UntypedStorage<8, 8> mUnk4be404;
        ::ll::UntypedStorage<8, 8> mUnka710eb;
        ::ll::UntypedStorage<8, 8> mUnkd95807;
        ::ll::UntypedStorage<8, 8> mUnk67dea5;
        ::ll::UntypedStorage<8, 8> mUnk42a369;
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
    ::ll::UntypedStorage<4, 4>   mUnk18d9e0;
    ::ll::UntypedStorage<4, 4>   mUnk7de789;
    ::ll::UntypedStorage<4, 4>   mUnkda278f;
    ::ll::UntypedStorage<4, 4>   mUnk113833;
    ::ll::UntypedStorage<8, 160> mUnk2a0bdd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScatteredFeaturePiece& operator=(ScatteredFeaturePiece const&);
    ScatteredFeaturePiece(ScatteredFeaturePiece const&);
    ScatteredFeaturePiece();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScatteredFeaturePiece() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScatteredFeaturePiece(int west, int floor, int north, int width, int height, int depth);

    MCNAPI bool updateAverageGroundHeight(::BlockSource& region, ::BoundingBox const& chunkBB, int offset);

    MCNAPI bool
    updateHeightPositionToLowestGroundHeight(::BlockSource& region, ::BoundingBox const& chunkBB, int offset);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int west, int floor, int north, int width, int height, int depth);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
