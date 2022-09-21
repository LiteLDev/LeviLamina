/**
 * @file  MC/StructureTemplate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
    //char filler[216]; // IDA StructureTemplate::StructureTemplate

public:
#define DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATE
    class StructureTemplate& operator=(class StructureTemplate const&) = delete;
    StructureTemplate(class StructureTemplate const&);
    StructureTemplate() = delete;
    LIAPI static StructureTemplate fromTag(std::string name, CompoundTag const& tag);
    LIAPI static StructureTemplate fromWorld(std::string name, int dimid, BlockPos p1, BlockPos p2, bool ignoreEntities = true, bool ignoreBlocks = false);
    //LIAPI bool load(CompoundTag const& tag);
    LIAPI std::unique_ptr<CompoundTag> toTag();
    LIAPI bool toWorld(int dimid, BlockPos const& p1, Mirror mirror = Mirror::None_15, Rotation rotation = Rotation::None_14);
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
     * @hash   1558293610
     * @symbol ??0StructureTemplate@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI StructureTemplate(class gsl::basic_string_span<char const, -1>);
    /**
     * @hash   -3951176
     * @symbol ?fillFromWorld@StructureTemplate@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVStructureSettings@@@Z
     */
    MCAPI void fillFromWorld(class BlockSource &, class BlockPos const &, class StructureSettings const &);
    /**
     * @hash   2116987925
     * @symbol ?getBlockAtPos@StructureTemplate@@QEBAAEBVBlock@@AEBVBlockPos@@@Z
     */
    MCAPI class Block const & getBlockAtPos(class BlockPos const &) const;
    /**
     * @hash   -1670592828
     * @symbol ?getJigsawMarkers@StructureTemplate@@QEBA?AV?$vector@VJigsawStructureBlockInfo@@V?$allocator@VJigsawStructureBlockInfo@@@std@@@std@@XZ
     */
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;
    /**
     * @hash   -578256864
     * @symbol ?getName@StructureTemplate@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   1606972482
     * @symbol ?getSize@StructureTemplate@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getSize() const;
    /**
     * @hash   198852655
     * @symbol ?getStructureVersion@StructureTemplate@@QEBAEXZ
     */
    MCAPI unsigned char getStructureVersion() const;
    /**
     * @hash   -1695091992
     * @symbol ?getTransformedBounds@StructureTemplate@@QEBA?AVBoundingBox@@VBlockPos@@AEBVStructureSettings@@@Z
     */
    MCAPI class BoundingBox getTransformedBounds(class BlockPos, class StructureSettings const &) const;
    /**
     * @hash   1163488742
     * @symbol ?isLoaded@StructureTemplate@@QEBA_NXZ
     */
    MCAPI bool isLoaded() const;
    /**
     * @hash   1127687297
     * @symbol ?load@StructureTemplate@@QEAA_NAEBVCompoundTag@@@Z
     */
    MCAPI bool load(class CompoundTag const &);
    /**
     * @hash   -348761866
     * @symbol ?placeInWorld@StructureTemplate@@QEBAXAEAVBlockSource@@AEBVBlockPalette@@AEBVBlockPos@@AEBVStructureSettings@@PEAVStructureTelemetryServerData@@_N@Z
     */
    MCAPI void placeInWorld(class BlockSource &, class BlockPalette const &, class BlockPos const &, class StructureSettings const &, class StructureTelemetryServerData *, bool) const;
    /**
     * @hash   1681171459
     * @symbol ?placeNextSegmentInWorld@StructureTemplate@@QEBAXAEAVStructureAnimationData@@AEBVBlockPalette@@@Z
     */
    MCAPI void placeNextSegmentInWorld(class StructureAnimationData &, class BlockPalette const &) const;
    /**
     * @hash   24836250
     * @symbol ?save@StructureTemplate@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   -1313346055
     * @symbol ??1StructureTemplate@@QEAA@XZ
     */
    MCAPI ~StructureTemplate();
    /**
     * @hash   1223862651
     * @symbol ?INVALID_POSITION@StructureTemplate@@2VBlockPos@@B
     */
    MCAPI static class BlockPos const INVALID_POSITION;

//private:
    /**
     * @hash   113310246
     * @symbol ?_fillBlockInfo@StructureTemplate@@AEAAXAEAVBlockSource@@AEBVBlockPos@@11@Z
     */
    MCAPI void _fillBlockInfo(class BlockSource &, class BlockPos const &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -1067108702
     * @symbol ?_fillEntityList@StructureTemplate@@AEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    MCAPI void _fillEntityList(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -12788586
     * @symbol ?_placeEntitiesInWorld@StructureTemplate@@AEBAXAEAVBlockSource@@AEAVDataLoadHelper@@_N@Z
     */
    MCAPI void _placeEntitiesInWorld(class BlockSource &, class DataLoadHelper &, bool) const;
    /**
     * @hash   -1422463696
     * @symbol ?_placeNextBlockSegmentInWorld@StructureTemplate@@AEBAXAEAVBlockSource@@_K1AEBVStructureSettings@@AEAVDataLoadHelper@@AEBVStructureBlockPalette@@AEBVBlockPalette@@VBlockPos@@AEBV7@AEBVVec3@@W4Rotation@@W4Mirror@@MIPEAVStructureTelemetryServerData@@_N_N@Z
     */
    MCAPI void _placeNextBlockSegmentInWorld(class BlockSource &, unsigned __int64, unsigned __int64, class StructureSettings const &, class DataLoadHelper &, class StructureBlockPalette const &, class BlockPalette const &, class BlockPos, class BlockPos const &, class Vec3 const &, enum Rotation, enum Mirror, float, unsigned int, class StructureTelemetryServerData *, bool, bool) const;

private:

};