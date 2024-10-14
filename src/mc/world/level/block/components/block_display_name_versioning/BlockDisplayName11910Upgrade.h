#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockDisplayNameVersioning {

class BlockDisplayName11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockDisplayName11910Upgrade& operator=(BlockDisplayName11910Upgrade const&);
    BlockDisplayName11910Upgrade(BlockDisplayName11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockDisplayName11910Upgrade() = default;

    // vIndex: 1
    virtual bool previousSchema(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            component
    ) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, class SemVersion const&)
        const;

    MCAPI BlockDisplayName11910Upgrade();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool previousSchema$(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            component
    ) const;

    MCAPI void
    upgradeToNext$(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, class SemVersion const&)
        const;

    // NOLINTEND
};

}; // namespace BlockDisplayNameVersioning
