/**
 * @file  StructureTemplate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "StructureSettings.hpp"
#include "StructureTemplateData.hpp"
class CompoundTag;

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureTemplate.
 *
 */
class StructureTemplate {

#define AFTER_EXTRA
    // Add Member There
    string mName;
    StructureTemplateData mStructureTemplateData;
    unsigned __int8 mStructureVersion;
    Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> mUnknownBlockType;

public:
#define DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATE
    LIAPI static StructureTemplate* fromTag(std::string name, CompoundTag const& tag);
    LIAPI static StructureTemplate* fromWorld(std::string name, int dimid, BlockPos p1, BlockPos p2, bool ignoreEntities = true, bool ignoreBlocks = false);
    //LIAPI bool load(CompoundTag const& tag);
    LIAPI std::unique_ptr<CompoundTag> toTag();
    LIAPI bool toWorld(int dimid, BlockPos const& p1, Mirror mirror = Mirror::None, Rotation rotation = Rotation::None);
    LIAPI StructureTemplateData* getData();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATE
public:
    class StructureTemplate& operator=(class StructureTemplate const &) = delete;
    StructureTemplate(class StructureTemplate const &) = delete;
    StructureTemplate() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?clear\@StructureTemplate\@\@UEAAXXZ
     */
    virtual void clear();
    /**
     * @vftbl 2
     * @symbol ?_allowReadBlock\@StructureTemplate\@\@MEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool _allowReadBlock(class BlockPos const &, class Block const &) const;
    /**
     * @vftbl 3
     * @symbol ?_allowReadActor\@StructureTemplate\@\@MEBA_NAEBVActor\@\@\@Z
     */
    virtual bool _allowReadActor(class Actor const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETEMPLATE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructureTemplate();
#endif
    /**
     * @symbol ??0StructureTemplate\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V?$NonOwnerPointer\@VIUnknownBlockTypeRegistry\@\@\@Bedrock\@\@\@Z
     */
    MCAPI StructureTemplate(class std::basic_string_view<char, struct std::char_traits<char>>, class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>);
    /**
     * @symbol ?fillFromWorld\@StructureTemplate\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVStructureSettings\@\@\@Z
     */
    MCAPI void fillFromWorld(class BlockSource &, class BlockPos const &, class StructureSettings const &);
    /**
     * @symbol ?getBlockAtPos\@StructureTemplate\@\@QEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const & getBlockAtPos(class BlockPos const &) const;
    /**
     * @symbol ?getJigsawMarkers\@StructureTemplate\@\@QEBA?AV?$vector\@VJigsawStructureBlockInfo\@\@V?$allocator\@VJigsawStructureBlockInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;
    /**
     * @symbol ?getName\@StructureTemplate\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol ?getSize\@StructureTemplate\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getSize() const;
    /**
     * @symbol ?getTransformedBounds\@StructureTemplate\@\@QEBA?AVBoundingBox\@\@VBlockPos\@\@AEBVStructureSettings\@\@\@Z
     */
    MCAPI class BoundingBox getTransformedBounds(class BlockPos, class StructureSettings const &) const;
    /**
     * @symbol ?isLoaded\@StructureTemplate\@\@QEBA_NXZ
     */
    MCAPI bool isLoaded() const;
    /**
     * @symbol ?placeInWorld\@StructureTemplate\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPalette\@\@AEBVBlockPos\@\@AEBVStructureSettings\@\@PEAVStructureTelemetryServerData\@\@_N\@Z
     */
    MCAPI void placeInWorld(class BlockSource &, class BlockPalette const &, class BlockPos const &, class StructureSettings const &, class StructureTelemetryServerData *, bool) const;
    /**
     * @symbol ?placeNextSegmentInWorld\@StructureTemplate\@\@QEBAXAEAVStructureAnimationData\@\@AEBVBlockPalette\@\@\@Z
     */
    MCAPI void placeNextSegmentInWorld(class StructureAnimationData &, class BlockPalette const &) const;
    /**
     * @symbol ?save\@StructureTemplate\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ?setStructureTemplateData\@StructureTemplate\@\@QEAAXAEBVStructureTemplateData\@\@\@Z
     */
    MCAPI void setStructureTemplateData(class StructureTemplateData const &);
    /**
     * @symbol ?INVALID_POSITION\@StructureTemplate\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const INVALID_POSITION;

//private:
    /**
     * @symbol ?_fillBlockInfo\@StructureTemplate\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@11\@Z
     */
    MCAPI void _fillBlockInfo(class BlockSource &, class BlockPos const &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol ?_fillEntityList\@StructureTemplate\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void _fillEntityList(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol ?_placeEntitiesInWorld\@StructureTemplate\@\@AEBAXAEAVBlockSource\@\@AEAVDataLoadHelper\@\@_N\@Z
     */
    MCAPI void _placeEntitiesInWorld(class BlockSource &, class DataLoadHelper &, bool) const;
    /**
     * @symbol ?_placeNextBlockSegmentInWorld\@StructureTemplate\@\@AEBAXAEAVBlockSource\@\@_K1AEBVStructureSettings\@\@AEAVDataLoadHelper\@\@AEBVStructureBlockPalette\@\@AEBVBlockPalette\@\@VBlockPos\@\@AEBV7\@AEBVVec3\@\@W4Rotation\@\@W4Mirror\@\@MIPEAVStructureTelemetryServerData\@\@_N_N\@Z
     */
    MCAPI void _placeNextBlockSegmentInWorld(class BlockSource &, unsigned __int64, unsigned __int64, class StructureSettings const &, class DataLoadHelper &, class StructureBlockPalette const &, class BlockPalette const &, class BlockPos, class BlockPos const &, class Vec3 const &, enum class Rotation, enum class Mirror, float, unsigned int, class StructureTelemetryServerData *, bool, bool) const;

private:

};
