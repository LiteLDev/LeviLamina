#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/LegacyStructureSettings.h"
#include "mc/world/level/levelgen/structure/StructurePiece.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class LegacyStructureTemplate;
class Random;
// clang-format on

class TemplateStructurePiece : public ::StructurePiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LegacyStructureTemplate*> mTemplate;
    ::ll::TypedStorage<8, 192, ::LegacyStructureSettings> mSettings;
    ::ll::TypedStorage<4, 12, ::BlockPos> mTemplatePosition;
    ::ll::TypedStorage<1, 1, bool> mPostProcessed;
    // NOLINTEND

public:
    // prevent constructor by default
    TemplateStructurePiece();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    // vIndex: 1
    virtual void moveBoundingBox(int dx, int dy, int dz) /*override*/;

    // vIndex: 13
    virtual void _handleDataMarker(::std::string const&, ::BlockPos const&, ::BlockSource&, ::Random&, ::BoundingBox const&) = 0;

    // vIndex: 0
    virtual ~TemplateStructurePiece() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TemplateStructurePiece(int depth);

    MCAPI void _setBoundingBoxFromTemplate();
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
    MCNAPI static void** $vftable();
    // NOLINTEND

};
