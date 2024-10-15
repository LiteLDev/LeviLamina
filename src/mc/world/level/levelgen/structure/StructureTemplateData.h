#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureLoadResult.h"

class StructureTemplateData {
public:
    // prevent constructor by default
    StructureTemplateData& operator=(StructureTemplateData const&);
    StructureTemplateData(StructureTemplateData const&);

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
