#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ItemCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace RepairableItemComponentVersioning {

class UpgradeTo118 : public ::ItemCerealSchemaUpgrade {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool previousSchema(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& component
    ) const /*override*/;

    virtual void upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&
    ) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool checkRepairItemEntrySchema(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $previousSchema(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& component
    ) const;

    MCAPI void $upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&
    ) const;


    // NOLINTEND
};

} // namespace RepairableItemComponentVersioning
