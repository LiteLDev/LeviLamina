#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace cereal { struct Schema; }
// clang-format on

class CerealDocumentUpgrader {
public:
    // prevent constructor by default
    CerealDocumentUpgrader& operator=(CerealDocumentUpgrader const&);
    CerealDocumentUpgrader(CerealDocumentUpgrader const&);
    CerealDocumentUpgrader();

public:
    // NOLINTBEGIN
    // symbol: ??0CerealDocumentUpgrader@@QEAA@AEBUSchema@cereal@@@Z
    MCAPI explicit CerealDocumentUpgrader(struct cereal::Schema const&);

    // symbol:
    // ?buildPatchSchemas@CerealDocumentUpgrader@@QEAAXAEBV?$function@$$A6A?BUSchema@cereal@@AEBVSemVersion@@@Z@std@@@Z
    MCAPI void buildPatchSchemas(std::function<struct cereal::Schema const(class SemVersion const&)> const&);

    // symbol: ?clear@CerealDocumentUpgrader@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?registerUpgrade@CerealDocumentUpgrader@@QEAAXV?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z
    MCAPI void registerUpgrade(std::shared_ptr<class CerealSchemaUpgrade>);

    // symbol:
    // ?upgradeJson@CerealDocumentUpgrader@@QEAA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVSemVersion@@AEBVPath@Core@@V?$optional@VSemVersion@@@3@V?$function@$$A6A_NAEBVSemVersion@@@Z@3@@Z
    MCAPI bool
    upgradeJson(std::string&, class SemVersion&, class Core::Path const&, std::optional<class SemVersion>, std::function<bool(class SemVersion const&)>);

    // symbol: ??1CerealDocumentUpgrader@@QEAA@XZ
    MCAPI ~CerealDocumentUpgrader();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getVersion@CerealDocumentUpgrader@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    MCAPI std::string _getVersion(rapidjson::GenericDocument<
                                  rapidjson::UTF8<char>,
                                  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                                  rapidjson::CrtAllocator>&);

    // NOLINTEND
};
