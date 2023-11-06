#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace cereal { class SchemaFactory; }
// clang-format on

namespace FoodItemVersioning {

class FoodItem118Upgrade : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    FoodItem118Upgrade& operator=(FoodItem118Upgrade const&);
    FoodItem118Upgrade(FoodItem118Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FoodItem118Upgrade@@@UEAA@XZ
    virtual ~FoodItem118Upgrade();

    // vIndex: 1, symbol: ?previousSchema@FoodItem118Upgrade@FoodItemVersioning@@UEBAXAEAVSchemaFactory@cereal@@@Z
    virtual void previousSchema(class cereal::SchemaFactory&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@FoodItem118Upgrade@FoodItemVersioning@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    virtual bool upgradeToNext(rapidjson::GenericDocument<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                               rapidjson::CrtAllocator>&) const;

    // symbol: ??0FoodItem118Upgrade@FoodItemVersioning@@QEAA@XZ
    MCAPI FoodItem118Upgrade();

    // NOLINTEND
};

}; // namespace FoodItemVersioning
