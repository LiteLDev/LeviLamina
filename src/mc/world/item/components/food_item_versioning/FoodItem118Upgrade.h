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
    // vIndex: 0
    virtual ~FoodItem118Upgrade() = default;

    // vIndex: 1
    virtual bool previousSchema(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            component
    ) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, class SemVersion const&)
        const;

    MCAPI FoodItem118Upgrade();

    // NOLINTEND
};

}; // namespace FoodItemVersioning
