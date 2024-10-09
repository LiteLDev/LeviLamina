#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

class CerealSchemaDeprecate : public ::CerealSchemaUpgrade {
public:
    // prevent constructor by default
    CerealSchemaDeprecate& operator=(CerealSchemaDeprecate const&);
    CerealSchemaDeprecate(CerealSchemaDeprecate const&);
    CerealSchemaDeprecate();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CerealSchemaDeprecate() = default;

    // vIndex: 1
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2
    virtual void upgradeToNext(
        rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>& document,
        class SemVersion const&       documentOriginalVersion
    ) const;

    MCAPI CerealSchemaDeprecate(
        class SemVersion   deprecateVersion,
        std::string const& schemaKey,
        std::string const& jsonMemberName
    );

    // NOLINTEND
};
