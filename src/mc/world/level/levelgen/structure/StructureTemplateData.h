#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureBlockPalette.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureLoadResult.h"

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
    // vIndex: 0
    virtual ~StructureTemplateData();

    MCAPI StructureTemplateData();

    MCAPI void addEntityData(std::unique_ptr<class CompoundTag> entityData);

    MCAPI class StructureBlockPalette const* getPalette(std::string const& name) const;

    MCAPI bool load(class CompoundTag const& tag);

    MCAPI std::unique_ptr<class CompoundTag> save() const;

    MCAPI void setBlockIndices(std::vector<int> blockIndices);

    MCAPI void setExtraBlockIndices(std::vector<int> extraBlockIndices);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI ::StructureLoadResult _parseBlockIndices(class CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parseEntities(class CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parseFormatVersion(class CompoundTag const& tag);

    MCAPI ::StructureLoadResult _parsePalettes(class CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parseSize(class CompoundTag const& tag);

    MCAPI void _saveBlockIndices(class CompoundTag& structureTag) const;

    MCAPI void _savePalettes(class CompoundTag& structureTag) const;

    MCAPI void _saveStructureTag(class CompoundTag& tag) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _contentErrorMissingField(std::string const& tagName) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static std::string const& DEFAULT_PALETTE_NAME();

    // NOLINTEND
};
