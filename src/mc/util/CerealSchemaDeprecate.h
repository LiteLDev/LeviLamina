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
    // vIndex: 0, symbol: __gen_??1CerealSchemaDeprecate@@UEAA@XZ
    virtual ~CerealSchemaDeprecate() = default;

    // vIndex: 1, symbol:
    // ?previousSchema@CerealSchemaDeprecate@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    // vIndex: 2, symbol:
    // ?upgradeToNext@CerealSchemaDeprecate@@UEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol:
    // ??0CerealSchemaDeprecate@@QEAA@VSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI CerealSchemaDeprecate(class SemVersion, std::string const&, std::string const&);

    // NOLINTEND
};
