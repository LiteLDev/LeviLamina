#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockSelectionBoxVersioning {

class BlockSelectionBox11920Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockSelectionBox11920Upgrade& operator=(BlockSelectionBox11920Upgrade const&);
    BlockSelectionBox11920Upgrade(BlockSelectionBox11920Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSelectionBox11920Upgrade() = default;

    // vIndex: 1
    virtual bool previousSchema(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            component
    ) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, class SemVersion const&)
        const;

    MCAPI BlockSelectionBox11920Upgrade();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI bool previousSchema$(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            component
    ) const;

    MCAPI void
    upgradeToNext$(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, class SemVersion const&)
        const;

    // NOLINTEND
};

}; // namespace BlockSelectionBoxVersioning
