/**
 * @file  StructurePoolElement.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolElement.
 *
 */
class StructurePoolElement {

#define AFTER_EXTRA
// Add Member There
public:
class LazyTemplate {
public:
    LazyTemplate() = delete;
    LazyTemplate(LazyTemplate const&) = delete;
    LazyTemplate(LazyTemplate const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLELEMENT
public:
    class StructurePoolElement& operator=(class StructurePoolElement const &) = delete;
    StructurePoolElement(class StructurePoolElement const &) = delete;
    StructurePoolElement() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getSize\@StructurePoolElement\@\@UEBA?AVBlockPos\@\@W4Rotation\@\@\@Z
     */
    virtual class BlockPos getSize(enum class Rotation) const;
    /**
     * @vftbl  1
     * @symbol  ?getJigsawMarkers\@StructurePoolElement\@\@UEBA?AV?$vector\@VJigsawBlockInfo\@\@V?$allocator\@VJigsawBlockInfo\@\@\@std\@\@\@std\@\@VBlockPos\@\@W4Rotation\@\@\@Z
     */
    virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, enum class Rotation) const;
    /**
     * @vftbl  2
     * @symbol  ?getJigsawMarkers\@StructurePoolElement\@\@UEBA?AV?$vector\@VJigsawBlockInfo\@\@V?$allocator\@VJigsawBlockInfo\@\@\@std\@\@\@std\@\@VBlockPos\@\@AEAVLegacyStructureSettings\@\@PEAVBlockSource\@\@\@Z
     */
    virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, class LegacyStructureSettings &, class BlockSource *) const;
    /**
     * @vftbl  3
     * @symbol  ?getBoundingBox\@StructurePoolElement\@\@UEBA?AVBoundingBox\@\@VBlockPos\@\@W4Rotation\@\@\@Z
     */
    virtual class BoundingBox getBoundingBox(class BlockPos, enum class Rotation) const;
    /**
     * @vftbl  4
     * @symbol  ?setProjection\@StructurePoolElement\@\@UEAAXW4Projection\@\@\@Z
     */
    virtual void setProjection(enum class Projection);
    /**
     * @vftbl  5
     * @symbol  ?getProjection\@StructurePoolElement\@\@UEBA?AW4Projection\@\@XZ
     */
    virtual enum class Projection getProjection() const;
    /**
     * @vftbl  6
     * @symbol  ?getPostProcessSettings\@StructurePoolElement\@\@UEBA?AW4PostProcessSettings\@\@XZ
     */
    virtual enum class PostProcessSettings getPostProcessSettings() const;
    /**
     * @vftbl  7
     * @symbol  ?place\@StructurePoolElement\@\@UEBA_NAEAVBlockSource\@\@VBlockPos\@\@W4Rotation\@\@VBoundingBox\@\@AEAVRandom\@\@AEAV?$unordered_map\@VBlockPos\@\@V?$optional\@UActorDefinitionIdentifier\@\@\@std\@\@U?$hash\@VBlockPos\@\@\@3\@U?$equal_to\@VBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVBlockPos\@\@V?$optional\@UActorDefinitionIdentifier\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@1\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos, enum class Rotation, class BoundingBox, class Random &, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier>>>> &, class BlockPos) const;
    /**
     * @vftbl  8
     * @symbol  ?placeActors\@StructurePoolElement\@\@UEBAXAEAVBlockSource\@\@VBlockPos\@\@W4Rotation\@\@AEAVRandom\@\@\@Z
     */
    virtual void placeActors(class BlockSource &, class BlockPos, enum class Rotation, class Random &) const;
    /**
     * @vftbl  9
     * @symbol  ?handleJigsawBlock\@StructurePoolElement\@\@UEBAXAEAVBlockSource\@\@AEAVJigsawBlockInfo\@\@AEAVLegacyStructureSettings\@\@\@Z
     */
    virtual void handleJigsawBlock(class BlockSource &, class JigsawBlockInfo &, class LegacyStructureSettings &) const;
    /**
     * @vftbl  10
     * @symbol  ?handleDataMarker\@StructurePoolElement\@\@UEBAXAEAVBlockSource\@\@VBlockPos\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$unordered_map\@VBlockPos\@\@V?$optional\@UActorDefinitionIdentifier\@\@\@std\@\@U?$hash\@VBlockPos\@\@\@3\@U?$equal_to\@VBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVBlockPos\@\@V?$optional\@UActorDefinitionIdentifier\@\@\@std\@\@\@std\@\@\@3\@\@5\@\@Z
     */
    virtual void handleDataMarker(class BlockSource &, class BlockPos, std::string, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier>>>> &) const;
    /**
     * @vftbl  11
     * @symbol  ?isValid\@StructurePoolElement\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @symbol  ??0StructurePoolElement\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Projection\@\@W4PostProcessSettings\@\@\@Z
     */
    MCAPI StructurePoolElement(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::string const &, enum class Projection, enum class PostProcessSettings);
    /**
     * @symbol  ??0StructurePoolElement\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UStructurePoolElementSettings\@\@\@Z
     */
    MCAPI StructurePoolElement(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::string const &, struct StructurePoolElementSettings);
    /**
     * @symbol  ??0StructurePoolElement\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockRule\@\@U?$default_delete\@VStructurePoolBlockRule\@\@\@std\@\@\@std\@\@\@2\@\@4\@PEBV?$vector\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolBlockTagRule\@\@U?$default_delete\@VStructurePoolBlockTagRule\@\@\@std\@\@\@std\@\@\@2\@\@4\@PEBV?$vector\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePoolActorRule\@\@U?$default_delete\@VStructurePoolActorRule\@\@\@std\@\@\@std\@\@\@2\@\@4\@W4Projection\@\@W4PostProcessSettings\@\@\@Z
     */
    MCAPI StructurePoolElement(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, std::string const &, std::vector<std::unique_ptr<class StructurePoolBlockRule>> const *, std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const *, std::vector<std::unique_ptr<class StructurePoolActorRule>> const *, enum class Projection, enum class PostProcessSettings);

//private:
    /**
     * @symbol  ?_getTemplate\@StructurePoolElement\@\@AEBAAEBVLazyTemplate\@1\@XZ
     */
    MCAPI class StructurePoolElement::LazyTemplate const & _getTemplate() const;

private:

};