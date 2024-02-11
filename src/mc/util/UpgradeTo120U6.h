#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ItemCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class ItemCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace IconItemComponentVersioning {

class UpgradeTo120U6 : public ::ItemCerealSchemaUpgrade {
public:
    // prevent constructor by default
    UpgradeTo120U6& operator=(UpgradeTo120U6 const&);
    UpgradeTo120U6(UpgradeTo120U6 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UpgradeTo120U6@IconItemComponentVersioning@@UEAA@XZ
    virtual ~UpgradeTo120U6() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@UpgradeTo120U6@IconItemComponentVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@UpgradeTo120U6@IconItemComponentVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0UpgradeTo120U6@IconItemComponentVersioning@@QEAA@XZ
    MCAPI UpgradeTo120U6();

    // NOLINTEND
};

}; // namespace IconItemComponentVersioning
