/**
 * @file  FeaturePoolElement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"
#include "StructurePoolElement.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FeaturePoolElement.
 *
 */
class FeaturePoolElement : public StructurePoolElement {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREPOOLELEMENT
public:
    class FeaturePoolElement& operator=(class FeaturePoolElement const &) = delete;
    FeaturePoolElement(class FeaturePoolElement const &) = delete;
    FeaturePoolElement() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getSize\@FeaturePoolElement\@\@UEBA?AVBlockPos\@\@W4Rotation\@\@\@Z
     */
    virtual class BlockPos getSize(enum class Rotation) const;
    /**
     * @vftbl  2
     * @symbol  ?getJigsawMarkers\@FeaturePoolElement\@\@UEBA?AV?$vector\@VJigsawBlockInfo\@\@V?$allocator\@VJigsawBlockInfo\@\@\@std\@\@\@std\@\@VBlockPos\@\@AEAVLegacyStructureSettings\@\@PEAVBlockSource\@\@\@Z
     */
    virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, class LegacyStructureSettings &, class BlockSource *) const;
    /**
     * @vftbl  7
     * @symbol  ?place\@FeaturePoolElement\@\@UEBA_NAEAVBlockSource\@\@VBlockPos\@\@W4Rotation\@\@VBoundingBox\@\@AEAVRandom\@\@AEAV?$unordered_map\@VBlockPos\@\@V?$optional\@UActorDefinitionIdentifier\@\@\@std\@\@U?$hash\@VBlockPos\@\@\@3\@U?$equal_to\@VBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVBlockPos\@\@V?$optional\@UActorDefinitionIdentifier\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@1\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos, enum class Rotation, class BoundingBox, class Random &, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier>>>> &, class BlockPos) const;
    /**
     * @symbol  ??0FeaturePoolElement\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@V?$WeakRefT\@UFeatureRefTraits\@\@\@\@\@Z
     */
    MCAPI FeaturePoolElement(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class WeakRefT<struct FeatureRefTraits>);

};