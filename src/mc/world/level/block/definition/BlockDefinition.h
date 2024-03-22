#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDefinition {
public:
    // prevent constructor by default
    BlockDefinition& operator=(BlockDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BlockDefinition@@QEAA@XZ
    MCAPI BlockDefinition();

    // symbol: ??0BlockDefinition@@QEAA@$$QEAU0@@Z
    MCAPI BlockDefinition(struct BlockDefinition&&);

    // symbol: ??0BlockDefinition@@QEAA@AEBU0@@Z
    MCAPI BlockDefinition(struct BlockDefinition const&);

    // symbol: ??4BlockDefinition@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct BlockDefinition& operator=(struct BlockDefinition&&);

    // symbol: ??1BlockDefinition@@QEAA@XZ
    MCAPI ~BlockDefinition();

    // symbol: ?registerBlockDefinitionTypes@BlockDefinition@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void registerBlockDefinitionTypes(struct cereal::ReflectionCtx&);

    // symbol:
    // ?upgradeJson@BlockDefinition@@SA?AU?$pair@_NVSemVersion@@@std@@AEBUReflectionCtx@cereal@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVPath@Core@@V?$optional@VSemVersion@@@3@@Z
    MCAPI static std::pair<bool, class SemVersion>
    upgradeJson(struct cereal::ReflectionCtx const&, std::string&, class Core::Path const&, std::optional<class SemVersion>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getCerealDocumentUpgrader@BlockDefinition@@CAPEAVCerealDocumentUpgrader@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static class CerealDocumentUpgrader* getCerealDocumentUpgrader(struct cereal::ReflectionCtx const&);

    // symbol: ?initCerealDocumentUpgrader@BlockDefinition@@CAAEAVCerealDocumentUpgrader@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static class CerealDocumentUpgrader& initCerealDocumentUpgrader(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
