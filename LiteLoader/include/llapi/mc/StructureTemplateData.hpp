/**
 * @file  StructureTemplateData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
    void** __vftable;
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
     * @hash   -623737405
     * @symbol  ??0StructureTemplateData\@\@QEAA\@XZ
     */
    MCAPI StructureTemplateData();
    /**
     * @hash   1936092114
     * @symbol  ?addEntityData\@StructureTemplateData\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addEntityData(std::unique_ptr<class CompoundTag>);
    /**
     * @hash   428693507
     * @symbol  ?addPalette\@StructureTemplateData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VStructureBlockPalette\@\@\@Z
     */
    MCAPI void addPalette(std::string const &, class StructureBlockPalette);
    /**
     * @hash   1114269263
     * @symbol  ?clear\@StructureTemplateData\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   -561714892
     * @symbol  ?getAllPalettes\@StructureTemplateData\@\@QEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VStructureBlockPalette\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VStructureBlockPalette\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<std::string, class StructureBlockPalette, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class StructureBlockPalette>>> const & getAllPalettes() const;
    /**
     * @hash   381465902
     * @symbol  ?getBlockIndices\@StructureTemplateData\@\@QEBAAEBV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<int> const & getBlockIndices() const;
    /**
     * @hash   -1460175727
     * @symbol  ?getEntityData\@StructureTemplateData\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class CompoundTag>> const & getEntityData() const;
    /**
     * @hash   1170633904
     * @symbol  ?getExtraBlockIndices\@StructureTemplateData\@\@QEBAAEBV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<int> const & getExtraBlockIndices() const;
    /**
     * @hash   -153546406
     * @symbol  ?getPalette\@StructureTemplateData\@\@QEBAPEBVStructureBlockPalette\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureBlockPalette const * getPalette(std::string const &) const;
    /**
     * @hash   -389545138
     * @symbol  ?getSize\@StructureTemplateData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getSize() const;
    /**
     * @hash   -1260695426
     * @symbol  ?getStructureWorldOrigin\@StructureTemplateData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getStructureWorldOrigin() const;
    /**
     * @hash   -312512971
     * @symbol  ?load\@StructureTemplateData\@\@QEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI bool load(class CompoundTag const &);
    /**
     * @hash   -1625864586
     * @symbol  ?save\@StructureTemplateData\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   497311766
     * @symbol  ?setBlockIndices\@StructureTemplateData\@\@QEAAXV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setBlockIndices(std::vector<int>);
    /**
     * @hash   -691799920
     * @symbol  ?setExtraBlockIndices\@StructureTemplateData\@\@QEAAXV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setExtraBlockIndices(std::vector<int>);
    /**
     * @hash   -69893782
     * @symbol  ?setSize\@StructureTemplateData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setSize(class BlockPos const &);
    /**
     * @hash   -1385481478
     * @symbol  ?setStructureWorldOrigin\@StructureTemplateData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureWorldOrigin(class BlockPos const &);
    /**
     * @hash   -1318931273
     * @symbol  ?DEFAULT_PALETTE_NAME\@StructureTemplateData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_PALETTE_NAME;

//protected:
    /**
     * @hash   1784251750
     * @symbol  ?_parseBlockIndices\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseBlockIndices(class CompoundTag const &);
    /**
     * @hash   -1487764609
     * @symbol  ?_parseEntities\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseEntities(class CompoundTag const &);
    /**
     * @hash   1936655927
     * @symbol  ?_parseFormatVersion\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseFormatVersion(class CompoundTag const &);
    /**
     * @hash   -1266224232
     * @symbol  ?_parsePalettes\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parsePalettes(class CompoundTag const &);
    /**
     * @hash   1418361215
     * @symbol  ?_parseSize\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseSize(class CompoundTag const &);
    /**
     * @hash   -225529398
     * @symbol  ?_saveBlockIndices\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveBlockIndices(class CompoundTag &) const;
    /**
     * @hash   -1756966580
     * @symbol  ?_savePalettes\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _savePalettes(class CompoundTag &) const;
    /**
     * @hash   1552098461
     * @symbol  ?_saveStructureTag\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveStructureTag(class CompoundTag &) const;

//private:
    /**
     * @hash   338904324
     * @symbol  ?_contentErrorMissingField\@StructureTemplateData\@\@AEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _contentErrorMissingField(std::string const &) const;

protected:

private:

};