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
    // ?upgradeJson@BlockDefinition@@SA?AU?$pair@_NVSemVersion@@@std@@AEAUReflectionCtx@cereal@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVPath@Core@@V?$optional@VSemVersion@@@3@@Z
    MCAPI static std::pair<bool, class SemVersion>
    upgradeJson(struct cereal::ReflectionCtx&, std::string&, class Core::Path const&, std::optional<class SemVersion>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getEnTTMetaType@BlockDefinition@@CA?AVmeta_type@entt@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static entt::meta_type getEnTTMetaType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?getPropCerealDocumentUpgrader@BlockDefinition@@CAAEAVCerealDocumentUpgrader@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static class CerealDocumentUpgrader& getPropCerealDocumentUpgrader(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
