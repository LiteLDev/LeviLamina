#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class CerealDocumentUpgrader {
public:
    // CerealDocumentUpgrader inner types define
    enum class ParseAndUpgradeResult {};

public:
    // prevent constructor by default
    CerealDocumentUpgrader& operator=(CerealDocumentUpgrader const&);
    CerealDocumentUpgrader(CerealDocumentUpgrader const&);
    CerealDocumentUpgrader();

public:
    // NOLINTBEGIN
    // symbol: ??0CerealDocumentUpgrader@@QEAA@VSemVersion@@@Z
    MCAPI explicit CerealDocumentUpgrader(class SemVersion);

    // symbol: ?clear@CerealDocumentUpgrader@@QEAAXXZ
    MCAPI void clear();

    // symbol:
    // ?parseJsonAndUpgrade@CerealDocumentUpgrader@@QEBA?AW4ParseAndUpgradeResult@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVSemVersion@@AEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVPath@Core@@_NAEBV?$optional@VSemVersion@@@4@AEBV?$function@$$A6A_NAEBVSemVersion@@@Z@4@@Z
    MCAPI ::
        CerealDocumentUpgrader::
            ParseAndUpgradeResult
            parseJsonAndUpgrade(std::string const&, class SemVersion&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class Core::Path const&, bool, std::optional<class SemVersion> const&, std::function<bool(class SemVersion const&)> const&)
                const;

    // symbol: ?registerUpgrade@CerealDocumentUpgrader@@QEAAXV?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z
    MCAPI void registerUpgrade(std::shared_ptr<class CerealSchemaUpgrade>);

    // symbol:
    // ?upgradeJson@CerealDocumentUpgrader@@QEBA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVSemVersion@@AEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVPath@Core@@AEBV?$optional@VSemVersion@@@3@AEBV?$function@$$A6A_NAEBVSemVersion@@@Z@3@@Z
    MCAPI bool
    upgradeJson(std::string&, class SemVersion&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class Core::Path const&, std::optional<class SemVersion> const&, std::function<bool(class SemVersion const&)> const&)
        const;

    // symbol: ??1CerealDocumentUpgrader@@QEAA@XZ
    MCAPI ~CerealDocumentUpgrader();

    // symbol:
    // ?getVersion@CerealDocumentUpgrader@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
    MCAPI static std::string getVersion(rapidjson::GenericDocument<
                                        rapidjson::UTF8<char>,
                                        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                                        rapidjson::CrtAllocator> const&);

    // NOLINTEND
};
