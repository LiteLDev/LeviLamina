#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace BlockQueuedTickingVersioning {

class BlockQueuedTicking11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool previousSchema(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& component
    ) const /*override*/;

    // vIndex: 2
    virtual void upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&
    ) const /*override*/;

    // vIndex: 0
    virtual ~BlockQueuedTicking11910Upgrade() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockQueuedTicking11910Upgrade();
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

    MCNAPI void $upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockQueuedTickingVersioning
