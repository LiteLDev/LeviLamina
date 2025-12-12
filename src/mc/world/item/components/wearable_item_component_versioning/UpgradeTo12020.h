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
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& component
    ) const /*override*/;

    virtual ~UpgradeTo12020() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpgradeTo12020();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $previousSchema(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& component
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace WearableItemComponentVersioning
