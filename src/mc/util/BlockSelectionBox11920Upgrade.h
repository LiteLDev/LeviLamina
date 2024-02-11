#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockSelectionBoxVersioning {

class BlockSelectionBox11920Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockSelectionBox11920Upgrade& operator=(BlockSelectionBox11920Upgrade const&);
    BlockSelectionBox11920Upgrade(BlockSelectionBox11920Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockSelectionBox11920Upgrade@BlockSelectionBoxVersioning@@UEAA@XZ
    virtual ~BlockSelectionBox11920Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@BlockSelectionBox11920Upgrade@BlockSelectionBoxVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@BlockSelectionBox11920Upgrade@BlockSelectionBoxVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0BlockSelectionBox11920Upgrade@BlockSelectionBoxVersioning@@QEAA@XZ
    MCAPI BlockSelectionBox11920Upgrade();

    // NOLINTEND
};

}; // namespace BlockSelectionBoxVersioning
