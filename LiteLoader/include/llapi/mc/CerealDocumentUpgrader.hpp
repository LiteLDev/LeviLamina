/**
 * @file  CerealDocumentUpgrader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "reflection.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CerealDocumentUpgrader.
 *
 */
class CerealDocumentUpgrader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALDOCUMENTUPGRADER
public:
    class CerealDocumentUpgrader& operator=(class CerealDocumentUpgrader const &) = delete;
    CerealDocumentUpgrader(class CerealDocumentUpgrader const &) = delete;
    CerealDocumentUpgrader() = delete;
#endif

public:
    /**
     * @hash   717014542
     * @symbol ??0CerealDocumentUpgrader@@QEAA@AEBUSchema@reflection@@@Z
     */
    MCAPI CerealDocumentUpgrader(struct reflection::Schema const &);
    /**
     * @hash   -420177101
     * @symbol ?clear@CerealDocumentUpgrader@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   2086743746
     * @symbol ?registerUpgrade@CerealDocumentUpgrader@@QEAAXV?$shared_ptr@VCerealSchemaUpgrade@@@std@@AEBUSchema@reflection@@@Z
     */
    MCAPI void registerUpgrade(class std::shared_ptr<class CerealSchemaUpgrade>, struct reflection::Schema const &);
    /**
     * @hash   -440253509
     * @symbol ?upgradeJson@CerealDocumentUpgrader@@QEAA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@V?$optional@VSemVersion@@@3@V?$function@$$A6A_NAEBVSemVersion@@@Z@3@@Z
     */
    MCAPI bool upgradeJson(std::string &, class Core::Path const &, class std::optional<class SemVersion>, class std::function<bool (class SemVersion const &)>);

//private:
    /**
     * @hash   2101352278
     * @symbol ?_getVersion@CerealDocumentUpgrader@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
     */
    MCAPI std::string _getVersion(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &);

private:

};