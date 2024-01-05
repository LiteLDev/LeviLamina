#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealSchemaUpgradeSet {
public:
    // prevent constructor by default
    CerealSchemaUpgradeSet& operator=(CerealSchemaUpgradeSet const&);
    CerealSchemaUpgradeSet(CerealSchemaUpgradeSet const&);
    CerealSchemaUpgradeSet();

public:
    // NOLINTBEGIN
    // symbol: ??0CerealSchemaUpgradeSet@@QEAA@AEAUReflectionCtx@cereal@@@Z
    MCAPI explicit CerealSchemaUpgradeSet(struct cereal::ReflectionCtx&);

    // symbol:
    // ?findNext@CerealSchemaUpgradeSet@@QEBA?AU?$pair@V?$shared_ptr@VCerealSchemaUpgrade@@@std@@VSemVersion@@@std@@AEBVSemVersion@@@Z
    MCAPI std::pair<std::shared_ptr<class CerealSchemaUpgrade>, class SemVersion>
          findNext(class SemVersion const& version) const;

    // symbol:
    // ?forEach@CerealSchemaUpgradeSet@@QEAA_NV?$function@$$A6A_NV?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z@std@@@Z
    MCAPI bool forEach(std::function<bool(std::shared_ptr<class CerealSchemaUpgrade>)> functor);

    // symbol: ??1CerealSchemaUpgradeSet@@QEAA@XZ
    MCAPI ~CerealSchemaUpgradeSet();

    // NOLINTEND
};
