#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

class StructureTemplateData {

public:
    int (**_vptr_StructureTemplateData)(void);
    int                                                          mFormatVersion;
    BlockPos                                                     mSize;
    BlockPos                                                     mStructureWorldOrigin;
    std::vector<int>                                             mBlockIndices;
    std::vector<int>                                             mExtraBlockIndices;
    std::unordered_map<std::string, class StructureBlockPalette> mPalettes;
    std::vector<std::unique_ptr<class CompoundTag>>              mEntityData;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETEMPLATEDATA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructureTemplateData();
#endif
    /**
     * @symbol ??0StructureTemplateData\@\@QEAA\@XZ
     */
    MCAPI StructureTemplateData();
    /**
     * @symbol
     * ?addEntityData\@StructureTemplateData\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addEntityData(std::unique_ptr<class CompoundTag>);
    /**
     * @symbol ?clear\@StructureTemplateData\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol
     * ?getPalette\@StructureTemplateData\@\@QEBAPEBVStructureBlockPalette\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureBlockPalette const* getPalette(std::string const&) const;
    /**
     * @symbol ?load\@StructureTemplateData\@\@QEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI bool load(class CompoundTag const&);
    /**
     * @symbol
     * ?save\@StructureTemplateData\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ?setBlockIndices\@StructureTemplateData\@\@QEAAXV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setBlockIndices(std::vector<int>);
    /**
     * @symbol ?setExtraBlockIndices\@StructureTemplateData\@\@QEAAXV?$vector\@HV?$allocator\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setExtraBlockIndices(std::vector<int>);
    /**
     * @symbol
     * ?DEFAULT_PALETTE_NAME\@StructureTemplateData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_PALETTE_NAME;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_parseBlockIndices\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseBlockIndices(class CompoundTag const&);
    /**
     * @symbol ?_parseEntities\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseEntities(class CompoundTag const&);
    /**
     * @symbol ?_parseFormatVersion\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseFormatVersion(class CompoundTag const&);
    /**
     * @symbol ?_parsePalettes\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parsePalettes(class CompoundTag const&);
    /**
     * @symbol ?_parseSize\@StructureTemplateData\@\@IEAA?AW4StructureLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureLoadResult _parseSize(class CompoundTag const&);
    /**
     * @symbol ?_saveBlockIndices\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveBlockIndices(class CompoundTag&) const;
    /**
     * @symbol ?_savePalettes\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _savePalettes(class CompoundTag&) const;
    /**
     * @symbol ?_saveStructureTag\@StructureTemplateData\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveStructureTag(class CompoundTag&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_contentErrorMissingField\@StructureTemplateData\@\@AEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _contentErrorMissingField(std::string const&) const;
    // NOLINTEND
};
