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
    virtual bool previousSchema(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            component
    ) const = 0;

    // vIndex: 2
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    MCAPI CerealSchemaUpgrade(
        std::string_view   fileType,
        class SemVersion   targetVersion,
        std::string const& schemaKey,
        std::string const& jsonMemberName
    );

    MCAPI bool checkAndUpgradeToNext(
        rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>& document,
        class SemVersion const&       documentOriginalVersion
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::string_view   fileType,
        class SemVersion   targetVersion,
        std::string const& schemaKey,
        std::string const& jsonMemberName
    );

    MCAPI void dtor$();

    MCAPI void
    upgradeToNext$(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // NOLINTEND
};
