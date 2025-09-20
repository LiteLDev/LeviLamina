#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class JigsawBlockInfo;
class LegacyStructureSettings;
// clang-format on

class EmptyPoolElement : public ::StructurePoolElement {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::BlockPos getSize(::Rotation rotation) const /*override*/;

    // vIndex: 2
    virtual ::std::vector<::JigsawBlockInfo> getJigsawMarkers(::BlockPos position, ::Rotation rotation) const
        /*override*/;

    // vIndex: 1
    virtual ::std::vector<::JigsawBlockInfo>
    getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const
        /*override*/;

    // vIndex: 3
    virtual ::BoundingBox getBoundingBox(::BlockPos position, ::Rotation rotation) const /*override*/;

    // vIndex: 13
    virtual bool isValid() const /*override*/;

    // vIndex: 15
    virtual ::StructurePoolElementType type() const /*override*/;

    // vIndex: 14
    virtual ~EmptyPoolElement() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::JigsawBlockInfo> $getJigsawMarkers(::BlockPos position, ::Rotation rotation) const;

    MCNAPI ::std::vector<::JigsawBlockInfo>
    $getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;

    MCNAPI ::BoundingBox $getBoundingBox(::BlockPos position, ::Rotation rotation) const;

    MCNAPI bool $isValid() const;

    MCNAPI ::StructurePoolElementType $type() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
