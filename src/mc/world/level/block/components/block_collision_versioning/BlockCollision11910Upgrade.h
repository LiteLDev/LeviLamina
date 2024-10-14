#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockCollisionVersioning {

class BlockCollision11910Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockCollision11910Upgrade& operator=(BlockCollision11910Upgrade const&);
    BlockCollision11910Upgrade(BlockCollision11910Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockCollision11910Upgrade() = default;

    // vIndex: 1
    virtual bool previousSchema(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            component
    ) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, class SemVersion const&)
        const;

    MCAPI BlockCollision11910Upgrade();

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

}; // namespace BlockCollisionVersioning
