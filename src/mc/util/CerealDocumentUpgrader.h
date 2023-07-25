#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace cereal { struct Schema; }
// clang-format on

class CerealDocumentUpgrader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALDOCUMENTUPGRADER
public:
    CerealDocumentUpgrader& operator=(CerealDocumentUpgrader const&) = delete;
    CerealDocumentUpgrader(CerealDocumentUpgrader const&)            = delete;
    CerealDocumentUpgrader()                                         = delete;
#endif

public:
    /**
     * @symbol ??0CerealDocumentUpgrader\@\@QEAA\@AEBUSchema\@cereal\@\@\@Z
     */
    MCAPI CerealDocumentUpgrader(struct cereal::Schema const&);
    /**
     * @symbol
     * ?buildPatchSchemas\@CerealDocumentUpgrader\@\@QEAAXAEBV?$function\@$$A6A?BUSchema\@cereal\@\@AEBVSemVersion\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void buildPatchSchemas(class std::function<struct cereal::Schema const(class SemVersion const&)> const&);
    /**
     * @symbol ?clear\@CerealDocumentUpgrader\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol ?registerUpgrade\@CerealDocumentUpgrader\@\@QEAAXV?$shared_ptr\@VCerealSchemaUpgrade\@\@\@std\@\@\@Z
     */
    MCAPI void registerUpgrade(class std::shared_ptr<class CerealSchemaUpgrade>);
    /**
     * @symbol
     * ?upgradeJson\@CerealDocumentUpgrader\@\@QEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@V?$optional\@VSemVersion\@\@\@3\@V?$function\@$$A6A_NAEBVSemVersion\@\@\@Z\@3\@\@Z
     */
    MCAPI bool
    upgradeJson(std::string&, class Core::Path const&, class std::optional<class SemVersion>, class std::function<bool(class SemVersion const&)>);

    // private:
    /**
     * @symbol
     * ?_getVersion\@CerealDocumentUpgrader\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    MCAPI std::string _getVersion(class rapidjson::GenericDocument<
                                  struct rapidjson::UTF8<char>,
                                  class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>,
                                  class rapidjson::CrtAllocator>&);

private:
};
