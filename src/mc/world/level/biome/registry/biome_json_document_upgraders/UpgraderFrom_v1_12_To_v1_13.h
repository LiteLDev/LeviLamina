#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace BiomeJsonDocumentUpgraders {

class UpgraderFrom_v1_12_To_v1_13 : public ::CerealSchemaUpgrade {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool previousSchema(::rapidjson::GenericValue<
                                ::rapidjson::UTF8<char>,
                                ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& document) const
        /*override*/;

    // vIndex: 2
    virtual void upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentOriginalVersion
    ) const /*override*/;

    // vIndex: 0
    virtual ~UpgraderFrom_v1_12_To_v1_13() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpgraderFrom_v1_12_To_v1_13();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $previousSchema(::rapidjson::GenericValue<
                                ::rapidjson::UTF8<char>,
                                ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& document) const;

    MCNAPI void $upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentOriginalVersion
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BiomeJsonDocumentUpgraders
