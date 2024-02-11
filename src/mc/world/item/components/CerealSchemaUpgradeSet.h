#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CerealSchemaUpgradeSet {
public:
    // prevent constructor by default
    CerealSchemaUpgradeSet& operator=(CerealSchemaUpgradeSet const&);
    CerealSchemaUpgradeSet(CerealSchemaUpgradeSet const&);
    CerealSchemaUpgradeSet();

public:
    // NOLINTBEGIN
    // symbol:
    // ?forEach@CerealSchemaUpgradeSet@@QEAA_NV?$function@$$A6A_NV?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z@std@@@Z
    MCAPI bool forEach(std::function<bool(std::shared_ptr<class CerealSchemaUpgrade>)> functor);

    // symbol: ??1CerealSchemaUpgradeSet@@QEAA@XZ
    MCAPI ~CerealSchemaUpgradeSet();

    // NOLINTEND
};
