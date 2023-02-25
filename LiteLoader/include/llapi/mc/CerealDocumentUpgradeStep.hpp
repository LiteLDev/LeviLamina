/**
 * @file  CerealDocumentUpgradeStep.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0CerealDocumentUpgradeStep\@\@QEAA\@AEBVSemVersion\@\@\@Z
     */
    MCAPI CerealDocumentUpgradeStep(class SemVersion const &);
    /**
     * @symbol  ??0CerealDocumentUpgradeStep\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CerealDocumentUpgradeStep(class CerealDocumentUpgradeStep const &);
    /**
     * @symbol  ?addUpgrade\@CerealDocumentUpgradeStep\@\@QEAAXV?$shared_ptr\@VCerealSchemaUpgrade\@\@\@std\@\@\@Z
     */
    MCAPI void addUpgrade(class std::shared_ptr<class CerealSchemaUpgrade>);
    /**
     * @symbol  ?apply\@CerealDocumentUpgradeStep\@\@QEAA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool apply(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &, class SemVersion const &);
    /**
     * @symbol  ?canUpgrade\@CerealDocumentUpgradeStep\@\@QEBA_NAEBVSemVersion\@\@\@Z
     */
    MCAPI bool canUpgrade(class SemVersion const &) const;
    /**
     * @symbol  ?getTargetVersion\@CerealDocumentUpgradeStep\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const & getTargetVersion() const;
    /**
     * @symbol  ??4CerealDocumentUpgradeStep\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class CerealDocumentUpgradeStep & operator=(class CerealDocumentUpgradeStep const &);
    /**
     * @symbol  ?setSchema\@CerealDocumentUpgradeStep\@\@QEAAXAEBUSchema\@reflection\@\@\@Z
     */
    MCAPI void setSchema(struct reflection::Schema const &);

};