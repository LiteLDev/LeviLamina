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
     * @symbol  ??0StructureTemplateData\@\@QEAA\@XZ
     */
    MCAPI StructureTemplateData();
    /**
     * @symbol  ?addEntityData\@StructureTemplateData\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addEntityData(std::unique_ptr<class CompoundTag>);
    /**
     * @symbol  ?addPalette\@StructureTemplateData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VStructureBlockPalette\@\@\@Z
     */
    MCAPI void addPalette(std::string const &, class StructureBlockPalette);
    /**
     * @symbol  ?clear\@StructureTemplateData\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?getAllPalettes\@StructureTemplateData\@\@QEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VStructureBlockPalette\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VStructureBlockPalette\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<std::string, class StructureBlockPalette, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class StructureBlockPalette>>> const & getAllPalettes() const;
    /**
     * @symbol  ?getBlockIndices\@StructureTemplateData\@\@QEBAAEBV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<int> const & getBlockIndices() const;
    /**
     * @symbol  ?getEntityData\@StructureTemplateData\@\@QEBAAEBV?$vector\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class CompoundTag>> const & getEntityData() const;
    /**
     * @symbol  ?getExtraBlockIndices\@StructureTemplateData\@\@QEBAAEBV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<int> const & getExtraBlockIndices() const;
    /**
     * @symbol  ?getPalette\@StructureTemplateData\@\@QEBAPEBVStructureBlockPalette\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureBlockPalette const * getPalette(std::string const &) const;
    /**
     * @symbol  ?getSize\@StructureTemplateData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getSize() const;
    /**
     * @symbol  ?getStructureWorldOrigin\@StructureTemplateData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getStructureWorldOrigin() const;
    /**
     * @symbol  ?load\@StructureTemplateData\@\@QEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI bool load(class CompoundTag const &);
    /**
     * @symbol  ?save\@StructureTemplateData\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol  ?setBlockIndices\@StructureTemplateData\@\@QEAAXV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setBlockIndices(std::vector<int>);
    /**
     * @symbol  ?setExtraBlockIndices\@StructureTemplateData\@\@QEAAXV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setExtraBlockIndices(std::vector<int>);
    /**
     * @symbol  ?setSize\@StructureTemplateData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setSize(class BlockPos const &);
    /**
     * @symbol  ?setStructureWorldOrigin\@StructureTemplateData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureWorldOrigin(class BlockPos const &);
    /**
     * @symbol  ?DEFAULT_PALETTE_NAME\@StructureTemplateData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_PALETTE_NAME;

//protected:
    /**
     * @symbol  ?_parseBlockIndices\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseBlockIndices(class CompoundTag const &);
    /**
     * @symbol  ?_parseEntities\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseEntities(class CompoundTag const &);
    /**
     * @symbol  ?_parseFormatVersion\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseFormatVersion(class CompoundTag const &);
    /**
     * @symbol  ?_parsePalettes\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parsePalettes(class CompoundTag const &);
    /**
     * @symbol  ?_parseSize\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseSize(class CompoundTag const &);
    /**
     * @symbol  ?_saveBlockIndices\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveBlockIndices(class CompoundTag &) const;
    /**
     * @symbol  ?_savePalettes\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _savePalettes(class CompoundTag &) const;
    /**
     * @symbol  ?_saveStructureTag\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveStructureTag(class CompoundTag &) const;

//private:
    /**
     * @symbol  ?_contentErrorMissingField\@StructureTemplateData\@\@AEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _contentErrorMissingField(std::string const &) const;

protected:

private:

};