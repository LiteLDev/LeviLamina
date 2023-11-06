#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CerealDocumentUpgradeStep {
public:
    // prevent constructor by default
    CerealDocumentUpgradeStep();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CerealDocumentUpgradeStep@@UEAA@XZ
    virtual ~CerealDocumentUpgradeStep();

    // symbol: ??0CerealDocumentUpgradeStep@@QEAA@AEBV0@@Z
    MCAPI CerealDocumentUpgradeStep(class CerealDocumentUpgradeStep const&);

    // symbol: ?addUpgrade@CerealDocumentUpgradeStep@@QEAAXV?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z
    MCAPI void addUpgrade(std::shared_ptr<class CerealSchemaUpgrade>);

    // symbol:
    // ?apply@CerealDocumentUpgradeStep@@QEAA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
    MCAPI bool
    apply(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class SemVersion const&);

    // symbol: ??4CerealDocumentUpgradeStep@@QEAAAEAV0@AEBV0@@Z
    MCAPI class CerealDocumentUpgradeStep& operator=(class CerealDocumentUpgradeStep const&);

    // NOLINTEND
};
