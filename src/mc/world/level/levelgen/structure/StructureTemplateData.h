#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureTemplateData {

public:
    // prevent constructor by default
    StructureTemplateData& operator=(StructureTemplateData const&) = delete;
    StructureTemplateData(StructureTemplateData const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETEMPLATEDATA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructureTemplateData(); // NOLINT
#endif
    /**
     * @symbol ??0StructureTemplateData\@\@QEAA\@XZ
     */
    MCAPI StructureTemplateData(); // NOLINT
    /**
     * @symbol
     * ?addEntityData\@StructureTemplateData\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addEntityData(std::unique_ptr<class CompoundTag>); // NOLINT
    /**
     * @symbol ?clear\@StructureTemplateData\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol
     * ?getPalette\@StructureTemplateData\@\@QEBAPEBVStructureBlockPalette\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureBlockPalette const* getPalette(std::string const&) const; // NOLINT
    /**
     * @symbol ?load\@StructureTemplateData\@\@QEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI bool load(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?save\@StructureTemplateData\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const; // NOLINT
    /**
     * @symbol ?setBlockIndices\@StructureTemplateData\@\@QEAAXV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setBlockIndices(std::vector<int>); // NOLINT
    /**
     * @symbol ?setExtraBlockIndices\@StructureTemplateData\@\@QEAAXV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setExtraBlockIndices(std::vector<int>); // NOLINT
    /**
     * @symbol
     * ?DEFAULT_PALETTE_NAME\@StructureTemplateData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_PALETTE_NAME; // NOLINT

    // protected:
    /**
     * @symbol ?_parseBlockIndices\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseBlockIndices(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_parseEntities\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseEntities(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_parseFormatVersion\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseFormatVersion(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_parsePalettes\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parsePalettes(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_parseSize\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseSize(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_saveBlockIndices\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveBlockIndices(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?_savePalettes\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _savePalettes(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?_saveStructureTag\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveStructureTag(class CompoundTag&) const; // NOLINT

    // private:
    /**
     * @symbol
     * ?_contentErrorMissingField\@StructureTemplateData\@\@AEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _contentErrorMissingField(std::string const&) const; // NOLINT

protected:
private:
};
