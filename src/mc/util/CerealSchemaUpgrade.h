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
    // vIndex: 0, symbol: ??1CerealSchemaUpgrade@@UEAA@XZ
    virtual ~CerealSchemaUpgrade();

    // vIndex: 1, symbol:
    // ?previousSchema@UpgradeTo12020@ArmorItemComponentVersioning@@UEBA_NAEBV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@@Z
    virtual bool previousSchema(rapidjson::GenericValue<
                                rapidjson::UTF8<char>,
                                rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const = 0;

    // vIndex: 2, symbol:
    // ?upgradeToNext@CerealSchemaUpgrade@@EEBAXAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    virtual void
    upgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // symbol:
    // ??0CerealSchemaUpgrade@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@VSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@2@Z
    MCAPI CerealSchemaUpgrade(std::string_view, class SemVersion, std::string const&, std::string const&);

    // symbol:
    // ?checkAndUpgradeToNext@CerealSchemaUpgrade@@QEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    MCAPI bool
    checkAndUpgradeToNext(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&)
        const;

    // NOLINTEND
};
