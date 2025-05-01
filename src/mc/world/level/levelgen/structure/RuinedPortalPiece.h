#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BoundingBox;
class Random;
struct PortalEnvironmentModifiers;
// clang-format on

class RuinedPortalPiece : public ::StructurePiece {
public:
    // RuinedPortalPiece inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // RuinedPortalPiece inner types define
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkeaaa70;
        ::ll::UntypedStorage<8, 8> mUnkfd8969;
        ::ll::UntypedStorage<8, 8> mUnka2b0b5;
        ::ll::UntypedStorage<8, 8> mUnk3a2dda;
        ::ll::UntypedStorage<8, 8> mUnka02b91;
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
    ::ll::UntypedStorage<4, 4>  mUnkf291cc;
    ::ll::UntypedStorage<4, 4>  mUnk6bf10e;
    ::ll::UntypedStorage<4, 24> mUnk2de189;
    ::ll::UntypedStorage<8, 8>  mUnk22646c;
    ::ll::UntypedStorage<8, 8>  mUnkddbd71;
    ::ll::UntypedStorage<8, 40> mUnke5e647;
    // NOLINTEND

public:
    // prevent constructor by default
    RuinedPortalPiece& operator=(RuinedPortalPiece const&);
    RuinedPortalPiece(RuinedPortalPiece const&);
    RuinedPortalPiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::StructurePieceType getType() const /*override*/;

    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 0
    virtual ~RuinedPortalPiece() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addNetherrackDripColumn(::Random& random, ::BlockSource& region, ::BlockPos pos);

    MCNAPI void _maybeReplaceBlock(
        ::Random&                           random,
        ::BlockSource&                      region,
        ::BlockPos                          pos,
        ::PortalEnvironmentModifiers const& modifiers
    );

    MCNAPI void _maybeReplaceFullStoneBlock(
        ::Random&                           random,
        ::BlockSource&                      region,
        ::BlockPos                          pos,
        ::Block const&                      block,
        ::PortalEnvironmentModifiers const& modifiers
    );

    MCNAPI void _maybeReplaceStairs(
        ::Random&                           random,
        ::BlockSource&                      region,
        ::BlockPos                          pos,
        ::PortalEnvironmentModifiers const& modifiers
    );

    MCNAPI void _moveStructureBoundsToSuitableY(
        ::Random&                           random,
        ::BlockSource&                      region,
        ::PortalEnvironmentModifiers const& modifiers
    );

    MCNAPI void
    _spreadNetherrack(::Random& random, ::BlockSource& region, ::PortalEnvironmentModifiers const& modifiers);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _willLavaFlowIn(::BlockSource& region, ::BlockPos pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::StructurePieceType $getType() const;

    MCNAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
