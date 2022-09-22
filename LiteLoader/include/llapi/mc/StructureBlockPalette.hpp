/**
 * @file  StructureBlockPalette.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureBlockPalette.
 *
 */
class StructureBlockPalette {

#define AFTER_EXTRA
// Add Member There
public:
struct BlockPositionData {
    BlockPositionData() = delete;
    BlockPositionData(BlockPositionData const&) = delete;
    BlockPositionData(BlockPositionData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREBLOCKPALETTE
public:
    class StructureBlockPalette& operator=(class StructureBlockPalette const &) = delete;
    StructureBlockPalette(class StructureBlockPalette const &) = delete;
    StructureBlockPalette() = delete;
#endif

public:
    /**
     * @hash   -169385504
     * @symbol ?addBlockPositionData@StructureBlockPalette@@QEAAX_KUBlockPositionData@1@@Z
     */
    MCAPI void addBlockPositionData(unsigned __int64, struct StructureBlockPalette::BlockPositionData);
    /**
     * @hash   1710057500
     * @symbol ?addMapping@StructureBlockPalette@@QEAA_KV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
     */
    MCAPI unsigned __int64 addMapping(std::unique_ptr<class CompoundTag>);
    /**
     * @hash   -541227371
     * @symbol ?getAllBlockPositionData@StructureBlockPalette@@QEBAAEBV?$unordered_map@_KUBlockPositionData@StructureBlockPalette@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUBlockPositionData@StructureBlockPalette@@@std@@@4@@std@@XZ
     */
    MCAPI class std::unordered_map<unsigned __int64, struct StructureBlockPalette::BlockPositionData, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, struct StructureBlockPalette::BlockPositionData>>> const & getAllBlockPositionData() const;
    /**
     * @hash   2040275931
     * @symbol ?getBlock@StructureBlockPalette@@QEBAAEBVBlock@@AEBVBlockPalette@@_K@Z
     */
    MCAPI class Block const & getBlock(class BlockPalette const &, unsigned __int64) const;
    /**
     * @hash   -1936125515
     * @symbol ?getBlockPositionData@StructureBlockPalette@@QEBAPEBUBlockPositionData@1@_K@Z
     */
    MCAPI struct StructureBlockPalette::BlockPositionData const * getBlockPositionData(unsigned __int64) const;
    /**
     * @hash   -947274854
     * @symbol ?load@StructureBlockPalette@@QEAA_NAEBVCompoundTag@@H@Z
     */
    MCAPI bool load(class CompoundTag const &, int);
    /**
     * @hash   1517618690
     * @symbol ?save@StructureBlockPalette@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   1154074637
     * @symbol ??1StructureBlockPalette@@QEAA@XZ
     */
    MCAPI ~StructureBlockPalette();

//protected:
    /**
     * @hash   -339068710
     * @symbol ?_parseBlockPalette@StructureBlockPalette@@IEAA?AW4StructureBlockPaletteLoadResult@@AEBVCompoundTag@@@Z
     */
    MCAPI enum StructureBlockPaletteLoadResult _parseBlockPalette(class CompoundTag const &);
    /**
     * @hash   1545621951
     * @symbol ?_parseBlockPositionData@StructureBlockPalette@@IEAA?AW4StructureBlockPaletteLoadResult@@AEBVCompoundTag@@H@Z
     */
    MCAPI enum StructureBlockPaletteLoadResult _parseBlockPositionData(class CompoundTag const &, int);
    /**
     * @hash   -1576811038
     * @symbol ?_parseBlockPositionDataList@StructureBlockPalette@@IEAA?AW4StructureBlockPaletteLoadResult@@AEBVCompoundTag@@@Z
     */
    MCAPI enum StructureBlockPaletteLoadResult _parseBlockPositionDataList(class CompoundTag const &);
    /**
     * @hash   -441533080
     * @symbol ?_saveBlockPositionDataList@StructureBlockPalette@@IEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void _saveBlockPositionDataList(class CompoundTag &) const;

//private:
    /**
     * @hash   1291850142
     * @symbol ?_contentErrorMissingField@StructureBlockPalette@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _contentErrorMissingField(std::string const &) const;

protected:

private:

};