#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ItemCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class ItemCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace FoodItemVersioning {

class FoodItem118Upgrade : public ::ItemCerealSchemaUpgrade {
public:
    // prevent constructor by default
    FoodItem118Upgrade& operator=(FoodItem118Upgrade const&);
    FoodItem118Upgrade(FoodItem118Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FoodItem118Upgrade@FoodItemVersioning@@UEAA@XZ
    virtual ~FoodItem118Upgrade() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@FoodItem118Upgrade@FoodItemVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@FoodItem118Upgrade@FoodItemVersioning@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol: ??0FoodItem118Upgrade@FoodItemVersioning@@QEAA@XZ
    MCAPI FoodItem118Upgrade();

    // NOLINTEND
};

}; // namespace FoodItemVersioning
