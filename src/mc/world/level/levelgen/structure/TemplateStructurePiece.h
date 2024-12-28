#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class LegacyStructureSettings;
class LegacyStructureTemplate;
class Random;
// clang-format on

class TemplateStructurePiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkd29f6b;
    ::ll::UntypedStorage<8, 192> mUnkfd6081;
    ::ll::UntypedStorage<4, 12>  mUnkf95a50;
    ::ll::UntypedStorage<1, 1>   mUnk678ed7;
    // NOLINTEND

public:
    // prevent constructor by default
    TemplateStructurePiece& operator=(TemplateStructurePiece const&);
    TemplateStructurePiece(TemplateStructurePiece const&);
    TemplateStructurePiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 1
    virtual void moveBoundingBox(int dx, int dy, int dz) /*override*/;

    // vIndex: 13
    virtual void
    _handleDataMarker(::std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&) = 0;

    // vIndex: 0
    virtual ~TemplateStructurePiece() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TemplateStructurePiece(int depth);

    MCAPI void _setBoundingBoxFromTemplate();

    MCAPI void _setup(
        ::LegacyStructureTemplate&       structTemplate,
        ::LegacyStructureSettings const& settings,
        ::BlockPos const&                templatePosition
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int depth);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB);

    MCAPI void $moveBoundingBox(int dx, int dy, int dz);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
