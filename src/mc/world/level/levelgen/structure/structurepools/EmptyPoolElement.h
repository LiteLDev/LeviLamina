#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/PostProcessSettings.h"
#include "mc/world/level/levelgen/structure/Projection.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

class EmptyPoolElement : public ::StructurePoolElement {
public:
    // prevent constructor by default
    EmptyPoolElement& operator=(EmptyPoolElement const&);
    EmptyPoolElement(EmptyPoolElement const&);
    EmptyPoolElement();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual class BlockPos getSize(::Rotation) const;

    // vIndex: 1
    virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, ::Rotation) const;

    // vIndex: 2
    virtual std::vector<class JigsawBlockInfo>
    getJigsawMarkers(class BlockPos, class LegacyStructureSettings&, class BlockSource*) const;

    // vIndex: 3
    virtual class BoundingBox getBoundingBox(class BlockPos, ::Rotation) const;

    // vIndex: 11
    virtual bool isValid() const;

    // vIndex: 12
    virtual ~EmptyPoolElement() = default;

    // vIndex: 13
    virtual ::StructurePoolElementType type() const;

    MCAPI explicit EmptyPoolElement(Bedrock::NotNullNonOwnerPtr<class StructureManager> manager);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(Bedrock::NotNullNonOwnerPtr<class StructureManager> manager);

    MCAPI class BoundingBox getBoundingBox$(class BlockPos, ::Rotation) const;

    MCAPI std::vector<class JigsawBlockInfo> getJigsawMarkers$(class BlockPos, ::Rotation) const;

    MCAPI std::vector<class JigsawBlockInfo>
          getJigsawMarkers$(class BlockPos, class LegacyStructureSettings&, class BlockSource*) const;

    MCAPI class BlockPos getSize$(::Rotation) const;

    MCAPI bool isValid$() const;

    MCAPI ::StructurePoolElementType type$() const;

    // NOLINTEND
};
