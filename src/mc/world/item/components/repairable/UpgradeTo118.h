#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ItemCerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class ItemCerealSchemaUpgrade;
class SemVersion;
// clang-format on

namespace RepairableItemComponentVersioning {

class UpgradeTo118 : public ::ItemCerealSchemaUpgrade {
public:
    // prevent constructor by default
    UpgradeTo118& operator=(UpgradeTo118 const&);
    UpgradeTo118(UpgradeTo118 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpgradeTo118() = default;

    // vIndex: 1
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    MCAPI UpgradeTo118();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool checkRepairItemEntrySchema(rapidjson::GenericValue<
                                                 rapidjson::UTF8<char>,
                                                 rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&);

    // NOLINTEND
};

}; // namespace RepairableItemComponentVersioning
