/**
 * @file  MC/StructureTemplateData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "StructureBlockPalette.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC class StructureTemplateData.
 *
 */
class StructureTemplateData {

#define AFTER_EXTRA
// Add Member There
public:
    void* __vftable;
    int mFormatVersion;
    BlockPos mSize;
    BlockPos mStructureWorldOrigin;
    std::vector<int> mBlockIndices;
    std::vector<int> mExtraBlockIndices;
    std::unordered_map<std::string, StructureBlockPalette> mPalettes;
    std::vector<std::unique_ptr<CompoundTag>> mEntityData;
	
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEDATA
public:
    class StructureTemplateData& operator=(class StructureTemplateData const &) = delete;
    StructureTemplateData(class StructureTemplateData const &) = delete;
#endif

public:
    /**
     * @hash   416299827
     * @symbol ??0StructureTemplateData@@QEAA@XZ
     */
    MCAPI StructureTemplateData();
    /**
     * @hash   -1318284414
     * @symbol ?addEntityData@StructureTemplateData@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
     */
    MCAPI void addEntityData(std::unique_ptr<class CompoundTag>);
    /**
     * @hash   1469284275
     * @symbol ?addPalette@StructureTemplateData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VStructureBlockPalette@@@Z
     */
    MCAPI void addPalette(std::string const &, class StructureBlockPalette);
    /**
     * @hash   -2140107265
     * @symbol ?clear@StructureTemplateData@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   128223182
     * @symbol ?getBlockIndices@StructureTemplateData@@QEBAAEBV?$vector@HV?$allocator@H@std@@@std@@XZ
     */
    MCAPI std::vector<int> const & getBlockIndices() const;
    /**
     * @hash   -751372879
     * @symbol ?getEntityData@StructureTemplateData@@QEBAAEBV?$vector@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V?$allocator@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::unique_ptr<class CompoundTag>> const & getEntityData() const;
    /**
     * @hash   1064370368
     * @symbol ?getExtraBlockIndices@StructureTemplateData@@QEBAAEBV?$vector@HV?$allocator@H@std@@@std@@XZ
     */
    MCAPI std::vector<int> const & getExtraBlockIndices() const;
    /**
     * @hash   886952106
     * @symbol ?getPalette@StructureTemplateData@@QEBAPEBVStructureBlockPalette@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class StructureBlockPalette const * getPalette(std::string const &) const;
    /**
     * @hash   -515151682
     * @symbol ?getSize@StructureTemplateData@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getSize() const;
    /**
     * @hash   -395195762
     * @symbol ?getStructureWorldOrigin@StructureTemplateData@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getStructureWorldOrigin() const;
    /**
     * @hash   727985541
     * @symbol ?load@StructureTemplateData@@QEAA_NAEBVCompoundTag@@@Z
     */
    MCAPI bool load(class CompoundTag const &);
    /**
     * @hash   -585366074
     * @symbol ?save@StructureTemplateData@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   1537810278
     * @symbol ?setBlockIndices@StructureTemplateData@@QEAAXV?$vector@HV?$allocator@H@std@@@std@@@Z
     */
    MCAPI void setBlockIndices(std::vector<int>);
    /**
     * @hash   348698592
     * @symbol ?setExtraBlockIndices@StructureTemplateData@@QEAAXV?$vector@HV?$allocator@H@std@@@std@@@Z
     */
    MCAPI void setExtraBlockIndices(std::vector<int>);
    /**
     * @hash   970604730
     * @symbol ?setSize@StructureTemplateData@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setSize(class BlockPos const &);
    /**
     * @hash   -344982966
     * @symbol ?setStructureWorldOrigin@StructureTemplateData@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setStructureWorldOrigin(class BlockPos const &);
    /**
     * @hash   960073287
     * @symbol ?DEFAULT_PALETTE_NAME@StructureTemplateData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DEFAULT_PALETTE_NAME;

//protected:
    /**
     * @hash   -1470047898
     * @symbol ?_parseBlockIndices@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
     */
    MCAPI enum StructureLoadResult _parseBlockIndices(class CompoundTag const &);
    /**
     * @hash   -447112337
     * @symbol ?_parseEntities@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
     */
    MCAPI enum StructureLoadResult _parseEntities(class CompoundTag const &);
    /**
     * @hash   -1317705225
     * @symbol ?_parseFormatVersion@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
     */
    MCAPI enum StructureLoadResult _parseFormatVersion(class CompoundTag const &);
    /**
     * @hash   -225618088
     * @symbol ?_parsePalettes@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
     */
    MCAPI enum StructureLoadResult _parsePalettes(class CompoundTag const &);
    /**
     * @hash   -1835999937
     * @symbol ?_parseSize@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
     */
    MCAPI enum StructureLoadResult _parseSize(class CompoundTag const &);
    /**
     * @hash   815076746
     * @symbol ?_saveBlockIndices@StructureTemplateData@@IEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void _saveBlockIndices(class CompoundTag &) const;
    /**
     * @hash   -716360436
     * @symbol ?_savePalettes@StructureTemplateData@@IEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void _savePalettes(class CompoundTag &) const;
    /**
     * @hash   -1702262691
     * @symbol ?_saveStructureTag@StructureTemplateData@@IEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void _saveStructureTag(class CompoundTag &) const;

//private:
    /**
     * @hash   1387675124
     * @symbol ?_contentErrorMissingField@StructureTemplateData@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _contentErrorMissingField(std::string const &) const;

protected:

private:

};