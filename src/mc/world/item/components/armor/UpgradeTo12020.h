#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ItemCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class ItemCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace ArmorItemComponentVersioning {

class UpgradeTo12020 : public ::ItemCerealSchemaUpgrade {
public:
    // prevent constructor by default
    UpgradeTo12020& operator=(UpgradeTo12020 const&);
    UpgradeTo12020(UpgradeTo12020 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UpgradeTo12020@ArmorItemComponentVersioning@@UEAA@XZ
    virtual ~UpgradeTo12020() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@UpgradeTo12020@ArmorItemComponentVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@UpgradeTo12020@ArmorItemComponentVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0UpgradeTo12020@ArmorItemComponentVersioning@@QEAA@XZ
    MCAPI UpgradeTo12020();

    // NOLINTEND
};

}; // namespace ArmorItemComponentVersioning
