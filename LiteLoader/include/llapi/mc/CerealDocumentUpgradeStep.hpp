/**
 * @file  MC/CerealDocumentUpgradeStep.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "reflection.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CerealDocumentUpgradeStep.
 *
 */
class CerealDocumentUpgradeStep {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALDOCUMENTUPGRADESTEP
public:
    CerealDocumentUpgradeStep() = delete;
#endif

public:
    /**
     * @hash   -1523326177
     * @symbol ??0CerealDocumentUpgradeStep@@QEAA@AEBVSemVersion@@AEBUSchema@reflection@@@Z
     */
    MCAPI CerealDocumentUpgradeStep(class SemVersion const &, struct reflection::Schema const &);
    /**
     * @hash   -1197431583
     * @symbol ??0CerealDocumentUpgradeStep@@QEAA@AEBV0@@Z
     */
    MCAPI CerealDocumentUpgradeStep(class CerealDocumentUpgradeStep const &);
    /**
     * @hash   -674655445
     * @symbol ?addUpgrade@CerealDocumentUpgradeStep@@QEAAXV?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z
     */
    MCAPI void addUpgrade(class std::shared_ptr<class CerealSchemaUpgrade>);
    /**
     * @hash   2069879771
     * @symbol ?apply@CerealDocumentUpgradeStep@@QEAA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@@Z
     */
    MCAPI bool apply(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &, class SemVersion const &);
    /**
     * @hash   -882844625
     * @symbol ?canUpgrade@CerealDocumentUpgradeStep@@QEBA_NAEBVSemVersion@@@Z
     */
    MCAPI bool canUpgrade(class SemVersion const &) const;
    /**
     * @hash   -1451481480
     * @symbol ?getTargetVersion@CerealDocumentUpgradeStep@@QEBAAEBVSemVersion@@XZ
     */
    MCAPI class SemVersion const & getTargetVersion() const;
    /**
     * @hash   141354540
     * @symbol ??4CerealDocumentUpgradeStep@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class CerealDocumentUpgradeStep & operator=(class CerealDocumentUpgradeStep const &);

};