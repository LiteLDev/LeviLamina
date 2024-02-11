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
    // symbol:
    // ?getStructure@ImportStructureMetaData@@QEAAPEBVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class StructureTemplate const* getStructure(std::string const& name);

    // symbol:
    // ?isSpecificStructureDirty@ImportStructureMetaData@@QEAA?B_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool const isSpecificStructureDirty(std::string const& name);

    // symbol:
    // ?setSpecificStructureDirty@ImportStructureMetaData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void setSpecificStructureDirty(std::string const& name, bool dirty);

    // NOLINTEND
};
