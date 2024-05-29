#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureBlockPalette.h"

// auto generated inclusion list
#include "mc/common/wrapper/StructureLoadResult.h"

class StructureTemplateData {
public:
    int                                                          mFormatVersion;        // this+0x8
    BlockPos                                                     mSize;                 // this+0xC
    BlockPos                                                     mStructureWorldOrigin; // this+0x18
    std::vector<int>                                             mBlockIndices;         // this+0x28
    std::vector<int>                                             mExtraBlockIndices;    // this+0x40
    std::unordered_map<std::string, class StructureBlockPalette> mPalettes;             // this+0x58
    std::vector<std::unique_ptr<class CompoundTag>>              mEntityData;           // this+0x98

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StructureTemplateData@@UEAA@XZ
    virtual ~StructureTemplateData();

    // symbol: ??0StructureTemplateData@@QEAA@XZ
    MCAPI StructureTemplateData();

    // symbol:
    // ?addEntityData@StructureTemplateData@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
    MCAPI void addEntityData(std::unique_ptr<class CompoundTag> entityData);

    // symbol:
    // ?getPalette@StructureTemplateData@@QEBAPEBVStructureBlockPalette@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class StructureBlockPalette const* getPalette(std::string const& name) const;

    // symbol: ?load@StructureTemplateData@@QEAA_NAEBVCompoundTag@@@Z
    MCAPI bool load(class CompoundTag const& tag);

    // symbol:
    // ?save@StructureTemplateData@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> save() const;

    // symbol: ?setBlockIndices@StructureTemplateData@@QEAAXV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI void setBlockIndices(std::vector<int> blockIndices);

    // symbol: ?setExtraBlockIndices@StructureTemplateData@@QEAAXV?$vector@HV?$allocator@H@std@@@std@@@Z
    MCAPI void setExtraBlockIndices(std::vector<int> extraBlockIndices);

    // symbol:
    // ?DEFAULT_PALETTE_NAME@StructureTemplateData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DEFAULT_PALETTE_NAME;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_parseBlockIndices@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
    MCAPI ::StructureLoadResult _parseBlockIndices(class CompoundTag const& structureTag);

    // symbol: ?_parseEntities@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
    MCAPI ::StructureLoadResult _parseEntities(class CompoundTag const& structureTag);

    // symbol: ?_parseFormatVersion@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
    MCAPI ::StructureLoadResult _parseFormatVersion(class CompoundTag const& tag);

    // symbol: ?_parsePalettes@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
    MCAPI ::StructureLoadResult _parsePalettes(class CompoundTag const& structureTag);

    // symbol: ?_parseSize@StructureTemplateData@@IEAA?AW4StructureLoadResult@@AEBVCompoundTag@@@Z
    MCAPI ::StructureLoadResult _parseSize(class CompoundTag const& tag);

    // symbol: ?_saveBlockIndices@StructureTemplateData@@IEBAXAEAVCompoundTag@@@Z
    MCAPI void _saveBlockIndices(class CompoundTag& structureTag) const;

    // symbol: ?_savePalettes@StructureTemplateData@@IEBAXAEAVCompoundTag@@@Z
    MCAPI void _savePalettes(class CompoundTag& structureTag) const;

    // symbol: ?_saveStructureTag@StructureTemplateData@@IEBAXAEAVCompoundTag@@@Z
    MCAPI void _saveStructureTag(class CompoundTag& tag) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_contentErrorMissingField@StructureTemplateData@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _contentErrorMissingField(std::string const& tagName) const;

    // NOLINTEND
};
