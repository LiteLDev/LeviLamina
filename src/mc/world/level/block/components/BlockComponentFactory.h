#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SchemaFactory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockComponentFactory {
public:
    // BlockComponentFactory inner types declare
    // clang-format off
    struct Constructor;
    // clang-format on

    // BlockComponentFactory inner types define
    struct Constructor {
    public:
        // prevent constructor by default
        Constructor();

    public:
        // NOLINTBEGIN
        // symbol: ??0Constructor@BlockComponentFactory@@QEAA@AEBU01@@Z
        MCAPI Constructor(struct BlockComponentFactory::Constructor const&);

        // symbol: ??4Constructor@BlockComponentFactory@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct BlockComponentFactory::Constructor& operator=(struct BlockComponentFactory::Constructor&&);

        // symbol: ??4Constructor@BlockComponentFactory@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct BlockComponentFactory::Constructor& operator=(struct BlockComponentFactory::Constructor const&);

        // symbol: ??1Constructor@BlockComponentFactory@@QEAA@XZ
        MCAPI ~Constructor();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockComponentFactory& operator=(BlockComponentFactory const&);
    BlockComponentFactory(BlockComponentFactory const&);
    BlockComponentFactory();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockComponentFactory@@QEAA@AEBVExperiments@@@Z
    MCAPI explicit BlockComponentFactory(class Experiments const&);

    // symbol: ?initializeFactory@BlockComponentFactory@@QEAAXAEBVExperiments@@@Z
    MCAPI void initializeFactory(class Experiments const&);

    // symbol:
    // ?addAllComponentUpgrades@BlockComponentFactory@@SAXAEAVCerealDocumentUpgrader@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader&, struct cereal::ReflectionCtx&);

    // symbol:
    // ?bindAllComponentSchemas@BlockComponentFactory@@SAXAEAVSchemaFactory@cereal@@AEBVSemVersion@@AEAUReflectionCtx@3@@Z
    MCAPI static void
    bindAllComponentSchemas(class cereal::SchemaFactory&, class SemVersion const&, struct cereal::ReflectionCtx&);

    // symbol:
    // ?getPropRegisteredCerealComponents@BlockComponentFactory@@SAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@BlockComponentFactory@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@BlockComponentFactory@@@std@@@2@@std@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static std::unordered_map<std::string, struct BlockComponentFactory::Constructor>&
    getPropRegisteredCerealComponents(struct cereal::ReflectionCtx&);

    // symbol:
    // ?getPropRegisteredDeprecatedCerealComponents@BlockComponentFactory@@SAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static std::unordered_map<std::string, std::string>&
    getPropRegisteredDeprecatedCerealComponents(struct cereal::ReflectionCtx&);

    // symbol: ?registerAllCerealDescriptions@BlockComponentFactory@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void registerAllCerealDescriptions(struct cereal::ReflectionCtx&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getEnTTMetaType@BlockComponentFactory@@CA?AVmeta_type@entt@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static entt::meta_type getEnTTMetaType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
