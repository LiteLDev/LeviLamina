#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ItemCerealSchemaUpgrade.h"

namespace WearableItemComponentVersioning {

class UpgradeTo12020 : public ::ItemCerealSchemaUpgrade {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool previousSchema(
        ::rapidjson::
            GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace WearableItemComponentVersioning
