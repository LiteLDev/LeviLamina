/**
 * @file  StructureTemplate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
    //char filler[224]; // IDA StructureTemplate::StructureTemplate

public:
#define DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATE
    LIAPI static StructureTemplate* fromTag(std::string name, CompoundTag const& tag);
    LIAPI static StructureTemplate* fromWorld(std::string name, int dimid, BlockPos p1, BlockPos p2, bool ignoreEntities = true, bool ignoreBlocks = false);
    //LIAPI bool load(CompoundTag const& tag);
    LIAPI std::unique_ptr<CompoundTag> toTag();
    LIAPI bool toWorld(int dimid, BlockPos const& p1, Mirror mirror = Mirror::None_15, Rotation rotation = Rotation::None_14);
    LIAPI StructureTemplateData* getData();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATE
public:
    class StructureTemplate& operator=(class StructureTemplate const &) = delete;
    StructureTemplate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructureTemplate();
    /**
     * @vftbl  1
     * @symbol  ?clear\@StructureTemplate\@\@UEAAXXZ
     */
    virtual void clear();
    /**
     * @hash   1459433347
     * @vftbl  2
     * @symbol  ?_allowReadBlock\@StructureTemplate\@\@MEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool _allowReadBlock(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1037866311
     * @vftbl  3
     * @symbol  ?_allowReadActor\@StructureTemplate\@\@MEBA_NAEBVActor\@\@\@Z
     */
    virtual bool _allowReadActor(class Actor const &) const;
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @hash   -481664832
     * @symbol  ?getName\@StructureTemplate\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   -1916779238
     * @symbol  ??0StructureTemplate\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI StructureTemplate(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -96105295
     * @symbol  ??0StructureTemplate\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI StructureTemplate(class StructureTemplate const &);
    /**
     * @hash   816173912
     * @symbol  ?fillFromWorld\@StructureTemplate\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVStructureSettings\@\@\@Z
     */
    MCAPI void fillFromWorld(class BlockSource &, class BlockPos const &, class StructureSettings const &);
    /**
     * @hash   -1357854283
     * @symbol  ?getBlockAtPos\@StructureTemplate\@\@QEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const & getBlockAtPos(class BlockPos const &) const;
    /**
     * @hash   -850467740
     * @symbol  ?getJigsawMarkers\@StructureTemplate\@\@QEBA?AV?$vector\@VJigsawStructureBlockInfo\@\@V?$allocator\@VJigsawStructureBlockInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;
    /**
     * @hash   -1867869726
     * @symbol  ?getSize\@StructureTemplate\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getSize() const;
    /**
     * @hash   -1128635905
     * @symbol  ?getStructureVersion\@StructureTemplate\@\@QEBAEXZ
     */
    MCAPI unsigned char getStructureVersion() const;
    /**
     * @hash   -874982280
     * @symbol  ?getTransformedBounds\@StructureTemplate\@\@QEBA?AVBoundingBox\@\@VBlockPos\@\@AEBVStructureSettings\@\@\@Z
     */
    MCAPI class BoundingBox getTransformedBounds(class BlockPos, class StructureSettings const &) const;
    /**
     * @hash   1983598454
     * @symbol  ?isLoaded\@StructureTemplate\@\@QEBA_NXZ
     */
    MCAPI bool isLoaded() const;
    /**
     * @hash   1947797009
     * @symbol  ?load\@StructureTemplate\@\@QEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI bool load(class CompoundTag const &);
    /**
     * @hash   471347846
     * @symbol  ?placeInWorld\@StructureTemplate\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPalette\@\@AEBVBlockPos\@\@AEBVStructureSettings\@\@PEAVStructureTelemetryServerData\@\@_N\@Z
     */
    MCAPI void placeInWorld(class BlockSource &, class BlockPalette const &, class BlockPos const &, class StructureSettings const &, class StructureTelemetryServerData *, bool) const;
    /**
     * @hash   -1793686125
     * @symbol  ?placeNextSegmentInWorld\@StructureTemplate\@\@QEBAXAEAVStructureAnimationData\@\@AEBVBlockPalette\@\@\@Z
     */
    MCAPI void placeNextSegmentInWorld(class StructureAnimationData &, class BlockPalette const &) const;
    /**
     * @hash   844945962
     * @symbol  ?save\@StructureTemplate\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   1405147898
     * @symbol  ?setStructureTemplateData\@StructureTemplate\@\@QEAAXAEBVStructureTemplateData\@\@\@Z
     */
    MCAPI void setStructureTemplateData(class StructureTemplateData const &);
    /**
     * @hash   -2030679917
     * @symbol  ?INVALID_POSITION\@StructureTemplate\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const INVALID_POSITION;

//private:
    /**
     * @hash   933942742
     * @symbol  ?_fillBlockInfo\@StructureTemplate\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@11\@Z
     */
    MCAPI void _fillBlockInfo(class BlockSource &, class BlockPos const &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -247198878
     * @symbol  ?_fillEntityList\@StructureTemplate\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void _fillEntityList(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   807151990
     * @symbol  ?_placeEntitiesInWorld\@StructureTemplate\@\@AEBAXAEAVBlockSource\@\@AEAVDataLoadHelper\@\@_N\@Z
     */
    MCAPI void _placeEntitiesInWorld(class BlockSource &, class DataLoadHelper &, bool) const;
    /**
     * @hash   -602476992
     * @symbol  ?_placeNextBlockSegmentInWorld\@StructureTemplate\@\@AEBAXAEAVBlockSource\@\@_K1AEBVStructureSettings\@\@AEAVDataLoadHelper\@\@AEBVStructureBlockPalette\@\@AEBVBlockPalette\@\@VBlockPos\@\@AEBV7\@AEBVVec3\@\@W4Rotation\@\@W4Mirror\@\@MIPEAVStructureTelemetryServerData\@\@_N_N\@Z
     */
    MCAPI void _placeNextBlockSegmentInWorld(class BlockSource &, unsigned __int64, unsigned __int64, class StructureSettings const &, class DataLoadHelper &, class StructureBlockPalette const &, class BlockPalette const &, class BlockPos, class BlockPos const &, class Vec3 const &, enum class Rotation, enum class Mirror, float, unsigned int, class StructureTelemetryServerData *, bool, bool) const;

private:

};