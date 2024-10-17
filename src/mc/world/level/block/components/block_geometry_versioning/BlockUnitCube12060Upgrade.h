#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class BlockCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace BlockGeometryVersioning {

class BlockUnitCube12060Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // prevent constructor by default
    BlockUnitCube12060Upgrade& operator=(BlockUnitCube12060Upgrade const&);
    BlockUnitCube12060Upgrade(BlockUnitCube12060Upgrade const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockUnitCube12060Upgrade() = default;

    // vIndex: 1
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, class SemVersion const&)
        const;

    MCAPI BlockUnitCube12060Upgrade();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI bool previousSchema$(rapidjson::GenericValue<
                               rapidjson::UTF8<char>,
                               rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    MCAPI void
    upgradeToNext$(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, class SemVersion const&)
        const;

    // NOLINTEND
};

}; // namespace BlockGeometryVersioning
