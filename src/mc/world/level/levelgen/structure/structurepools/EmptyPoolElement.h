#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class IStructureTemplateManager;
class JigsawBlockInfo;
class LegacyStructureSettings;
// clang-format on

class EmptyPoolElement : public ::StructurePoolElement {
public:
    // prevent constructor by default
    EmptyPoolElement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockPos getSize(::Rotation rotation) const /*override*/;

    virtual ::std::vector<::JigsawBlockInfo> getJigsawMarkers(::BlockPos position, ::Rotation rotation) const
        /*override*/;

    virtual ::std::vector<::JigsawBlockInfo>
    getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const
        /*override*/;

    virtual ::BoundingBox getBoundingBox(::BlockPos position, ::Rotation rotation) const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ::StructurePoolElementType type() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EmptyPoolElement(::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockPos $getSize(::Rotation rotation) const;

    MCFOLD ::std::vector<::JigsawBlockInfo> $getJigsawMarkers(::BlockPos position, ::Rotation rotation) const;

    MCFOLD ::std::vector<::JigsawBlockInfo>
    $getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;

    MCAPI ::BoundingBox $getBoundingBox(::BlockPos position, ::Rotation rotation) const;

    MCFOLD bool $isValid() const;

    MCFOLD ::StructurePoolElementType $type() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
