#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

struct ImportStructureMetaData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ImportStructureMetaData& operator=(ImportStructureMetaData const&);
    ImportStructureMetaData(ImportStructureMetaData const&);
    ImportStructureMetaData();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ImportStructureMetaData() = default;

    // symbol:
    // ?getStructure@ImportStructureMetaData@@QEAAPEBVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class StructureTemplate const* getStructure(std::string const&);

    // symbol:
    // ?isSpecificStructureDirty@ImportStructureMetaData@@QEAA?B_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool const isSpecificStructureDirty(std::string const&);

    // symbol:
    // ?setSpecificStructureDirty@ImportStructureMetaData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void setSpecificStructureDirty(std::string const&, bool);

    // NOLINTEND
};
