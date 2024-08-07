#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CerealSchemaUpgrade {
public:
    // prevent constructor by default
    CerealSchemaUpgrade& operator=(CerealSchemaUpgrade const&);
    CerealSchemaUpgrade(CerealSchemaUpgrade const&);
    CerealSchemaUpgrade();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CerealSchemaUpgrade();

    // vIndex: 1
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const = 0;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    MCAPI CerealSchemaUpgrade(std::string_view, class SemVersion, std::string const&, std::string const&);

    MCAPI bool
    checkAndUpgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // NOLINTEND
};
