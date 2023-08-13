#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElement.h"

class FeaturePoolElement : public ::StructurePoolElement {

public:
    // prevent constructor by default
    FeaturePoolElement& operator=(FeaturePoolElement const&) = delete;
    FeaturePoolElement(FeaturePoolElement const&)            = delete;
    FeaturePoolElement()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getSize\@FeaturePoolElement\@\@UEBA?AVBlockPos\@\@W4Rotation\@\@\@Z
     */
    virtual class BlockPos getSize(enum class Rotation) const;
    /**
     * @vftbl 2
     * @symbol
     * ?getJigsawMarkers\@FeaturePoolElement\@\@UEBA?AV?$vector\@VJigsawBlockInfo\@\@V?$allocator\@VJigsawBlockInfo\@\@\@std\@\@\@std\@\@VBlockPos\@\@AEAVLegacyStructureSettings\@\@PEAVBlockSource\@\@\@Z
     */
    virtual std::vector<class JigsawBlockInfo>
    getJigsawMarkers(class BlockPos, class LegacyStructureSettings&, class BlockSource*) const;
    /**
     * @vftbl 7
     * @symbol
     * ?place\@FeaturePoolElement\@\@UEBA_NAEAVBlockSource\@\@VBlockPos\@\@W4Rotation\@\@VBoundingBox\@\@AEAVRandom\@\@AEAV?$unordered_map\@VBlockPos\@\@V?$optional\@UActorDefinitionIdentifier\@\@\@std\@\@U?$hash\@VBlockPos\@\@\@3\@U?$equal_to\@VBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVBlockPos\@\@V?$optional\@UActorDefinitionIdentifier\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@1\@Z
     */
    virtual bool place(
        class BlockSource&,
        class BlockPos,
        enum class Rotation,
        class BoundingBox,
        class Random&,
        std::unordered_map<class BlockPos, std::optional<struct ActorDefinitionIdentifier>>&,
        class BlockPos
    ) const;
    /**
     * @symbol
     * ??0FeaturePoolElement\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@V?$WeakRefT\@UFeatureRefTraits\@\@\@\@\@Z
     */
    MCAPI
        FeaturePoolElement(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class WeakRefT<struct FeatureRefTraits>);
    // NOLINTEND
};
