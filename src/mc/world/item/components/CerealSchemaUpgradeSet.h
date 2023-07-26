#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CerealSchemaUpgradeSet {

public:
    // prevent constructor by default
    CerealSchemaUpgradeSet& operator=(CerealSchemaUpgradeSet const&) = delete;
    CerealSchemaUpgradeSet(CerealSchemaUpgradeSet const&)            = delete;
    CerealSchemaUpgradeSet()                                         = delete;

public:
    /**
     * @symbol
     * ?findNext\@CerealSchemaUpgradeSet\@\@QEBA?AU?$pair\@V?$shared_ptr\@VCerealSchemaUpgrade\@\@\@std\@\@VSemVersion\@\@\@std\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI struct std::pair<class std::shared_ptr<class CerealSchemaUpgrade>, class SemVersion>
    findNext(class SemVersion const&) const; // NOLINT
    /**
     * @symbol
     * ?forEach\@CerealSchemaUpgradeSet\@\@QEAA_NV?$function\@$$A6A_NV?$shared_ptr\@VCerealSchemaUpgrade\@\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool forEach(class std::function<bool(class std::shared_ptr<class CerealSchemaUpgrade>)>); // NOLINT
    /**
     * @symbol ??1CerealSchemaUpgradeSet\@\@QEAA\@XZ
     */
    MCAPI ~CerealSchemaUpgradeSet(); // NOLINT
};
