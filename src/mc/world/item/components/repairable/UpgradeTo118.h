#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ItemCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class ItemCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace RepairableItemComponentVersioning {

class UpgradeTo118 : public ::ItemCerealSchemaUpgrade {
public:
    // prevent constructor by default
    UpgradeTo118& operator=(UpgradeTo118 const&);
    UpgradeTo118(UpgradeTo118 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UpgradeTo118@RepairableItemComponentVersioning@@UEAA@XZ
    virtual ~UpgradeTo118() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@UpgradeTo118@RepairableItemComponentVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@UpgradeTo118@RepairableItemComponentVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0UpgradeTo118@RepairableItemComponentVersioning@@QEAA@XZ
    MCAPI UpgradeTo118();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?checkRepairItemEntrySchema@UpgradeTo118@RepairableItemComponentVersioning@@CA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    MCAPI static bool checkRepairItemEntrySchema(rapidjson::GenericValue<
                                                 rapidjson::UTF8<char>,
                                                 rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);

    // NOLINTEND
};

}; // namespace RepairableItemComponentVersioning
