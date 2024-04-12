#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockComponentFactory {
public:
    // BlockComponentFactory inner types declare
    // clang-format off
    struct ComponentMetadata;
    // clang-format on

    // BlockComponentFactory inner types define
    struct ComponentMetadata {
    public:
        // prevent constructor by default
        ComponentMetadata();

    public:
        // NOLINTBEGIN
        // symbol: ??0ComponentMetadata@BlockComponentFactory@@QEAA@AEBU01@@Z
        MCAPI ComponentMetadata(struct BlockComponentFactory::ComponentMetadata const&);

        // symbol: ??4ComponentMetadata@BlockComponentFactory@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct BlockComponentFactory::ComponentMetadata&
        operator=(struct BlockComponentFactory::ComponentMetadata&&);

        // symbol: ??4ComponentMetadata@BlockComponentFactory@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct BlockComponentFactory::ComponentMetadata&
        operator=(struct BlockComponentFactory::ComponentMetadata const&);

        // symbol: ??1ComponentMetadata@BlockComponentFactory@@QEAA@XZ
        MCAPI ~ComponentMetadata();

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
    MCAPI explicit BlockComponentFactory(class Experiments const& experiments);

    // symbol: ?initializeFactory@BlockComponentFactory@@QEAAXAEBVExperiments@@@Z
    MCAPI void initializeFactory(class Experiments const& experiments);

    // symbol:
    // ?addAllComponentUpgrades@BlockComponentFactory@@SAXAEAVCerealDocumentUpgrader@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader&, struct cereal::ReflectionCtx const&);

    // symbol:
    // ?getPropRegisteredCerealComponents@BlockComponentFactory@@SAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UComponentMetadata@BlockComponentFactory@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UComponentMetadata@BlockComponentFactory@@@std@@@2@@std@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static std::unordered_map<std::string, struct BlockComponentFactory::ComponentMetadata>&
    getPropRegisteredCerealComponents(struct cereal::ReflectionCtx const&);

    // symbol: ?registerAllCerealDescriptions@BlockComponentFactory@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void registerAllCerealDescriptions(struct cereal::ReflectionCtx&);

    // symbol:
    // ?registerComponentUpgrade@BlockComponentFactory@@SAXAEAVCerealDocumentUpgrader@@V?$shared_ptr@VCerealSchemaUpgrade@@@std@@@Z
    MCAPI static void
    registerComponentUpgrade(class CerealDocumentUpgrader&, std::shared_ptr<class CerealSchemaUpgrade>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?initEnTTMetaType@BlockComponentFactory@@CA?AVmeta_type@entt@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static entt::meta_type initEnTTMetaType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
