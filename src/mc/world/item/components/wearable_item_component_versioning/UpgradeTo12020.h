#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ItemCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class ItemCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace WearableItemComponentVersioning {

class UpgradeTo12020 : public ::ItemCerealSchemaUpgrade {
public:
    // prevent constructor by default
    UpgradeTo12020& operator=(UpgradeTo12020 const&);
    UpgradeTo12020(UpgradeTo12020 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpgradeTo12020() = default;

    // vIndex: 1
    virtual bool previousSchema(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            component
    ) const;

    MCAPI UpgradeTo12020();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI bool previousSchema$(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            component
    ) const;

    // NOLINTEND
};

}; // namespace WearableItemComponentVersioning
