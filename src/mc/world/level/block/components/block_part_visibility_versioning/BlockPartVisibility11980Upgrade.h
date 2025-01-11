#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace BlockPartVisibilityVersioning {

class BlockPartVisibility11980Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool previousSchema(::rapidjson::GenericValue<
                                ::rapidjson::UTF8<char>,
                                ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&) const /*override*/;

    // vIndex: 2
    virtual void
    upgradeToNext(::rapidjson::GenericDocument<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>, ::rapidjson::CrtAllocator>&, ::SemVersion const&)
        const /*override*/;

    // vIndex: 0
    virtual ~BlockPartVisibility11980Upgrade() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace BlockPartVisibilityVersioning
