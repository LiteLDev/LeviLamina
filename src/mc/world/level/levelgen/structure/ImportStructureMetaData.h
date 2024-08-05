#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImportStructureMetaData {
public:
    // prevent constructor by default
    ImportStructureMetaData& operator=(ImportStructureMetaData const&);
    ImportStructureMetaData(ImportStructureMetaData const&);
    ImportStructureMetaData();

public:
    // NOLINTBEGIN
    MCAPI class StructureTemplate const* getStructure(std::string const& name);

    MCAPI bool const isSpecificStructureDirty(std::string const& name);

    MCAPI void setSpecificStructureDirty(std::string const& name, bool dirty);

    // NOLINTEND
};
