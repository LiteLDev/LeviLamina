#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CerealSchemaUpgradeSet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALSCHEMAUPGRADESET
public:
    CerealSchemaUpgradeSet& operator=(CerealSchemaUpgradeSet const&) = delete;
    CerealSchemaUpgradeSet(CerealSchemaUpgradeSet const&)            = delete;
    CerealSchemaUpgradeSet()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?findNext\@CerealSchemaUpgradeSet\@\@QEBA?AU?$pair\@V?$shared_ptr\@VCerealSchemaUpgrade\@\@\@std\@\@VSemVersion\@\@\@std\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI struct std::pair<class std::shared_ptr<class CerealSchemaUpgrade>, class SemVersion>
    findNext(class SemVersion const&) const;
    /**
     * @symbol
     * ?forEach\@CerealSchemaUpgradeSet\@\@QEAA_NV?$function\@$$A6A_NV?$shared_ptr\@VCerealSchemaUpgrade\@\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool forEach(class std::function<bool(class std::shared_ptr<class CerealSchemaUpgrade>)>);
    /**
     * @symbol ??1CerealSchemaUpgradeSet\@\@QEAA\@XZ
     */
    MCAPI ~CerealSchemaUpgradeSet();
};
