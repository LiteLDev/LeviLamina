#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CerealDocumentUpgradeStep {

public:
    // prevent constructor by default
    CerealDocumentUpgradeStep() = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREALDOCUMENTUPGRADESTEP
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CerealDocumentUpgradeStep(); // NOLINT
#endif
    /**
     * @symbol ??0CerealDocumentUpgradeStep\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CerealDocumentUpgradeStep(class CerealDocumentUpgradeStep const&); // NOLINT
    /**
     * @symbol ?addUpgrade\@CerealDocumentUpgradeStep\@\@QEAAXV?$shared_ptr\@VCerealSchemaUpgrade\@\@\@std\@\@\@Z
     */
    MCAPI void addUpgrade(class std::shared_ptr<class CerealSchemaUpgrade>); // NOLINT
    /**
     * @symbol
     * ?apply\@CerealDocumentUpgradeStep\@\@QEAA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool
    apply(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator>&, class SemVersion const&); // NOLINT
    /**
     * @symbol ??4CerealDocumentUpgradeStep\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class CerealDocumentUpgradeStep& operator=(class CerealDocumentUpgradeStep const&); // NOLINT
};
