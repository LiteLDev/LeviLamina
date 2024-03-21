#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealItemComponentFactory {
public:
    // CerealItemComponentFactory inner types declare
    // clang-format off
    struct ComponentMetadata;
    // clang-format on

    // CerealItemComponentFactory inner types define
    struct ComponentMetadata {
    public:
        // prevent constructor by default
        ComponentMetadata();

    public:
        // NOLINTBEGIN
        // symbol: ??0ComponentMetadata@CerealItemComponentFactory@@QEAA@AEBU01@@Z
        MCAPI ComponentMetadata(struct CerealItemComponentFactory::ComponentMetadata const&);

        // symbol: ??4ComponentMetadata@CerealItemComponentFactory@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct CerealItemComponentFactory::ComponentMetadata&
        operator=(struct CerealItemComponentFactory::ComponentMetadata&&);

        // symbol: ??4ComponentMetadata@CerealItemComponentFactory@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct CerealItemComponentFactory::ComponentMetadata&
        operator=(struct CerealItemComponentFactory::ComponentMetadata const&);

        // symbol: ??1ComponentMetadata@CerealItemComponentFactory@@QEAA@XZ
        MCAPI ~ComponentMetadata();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CerealItemComponentFactory& operator=(CerealItemComponentFactory const&);
    CerealItemComponentFactory(CerealItemComponentFactory const&);
    CerealItemComponentFactory();

public:
    // NOLINTBEGIN
    // symbol:
    // ?addAllComponentUpgrades@CerealItemComponentFactory@@SAXAEAVCerealDocumentUpgrader@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader&, struct cereal::ReflectionCtx const&);

    // symbol:
    // ?constructItemComponent@CerealItemComponentFactory@@SA?AV?$shared_ptr@VItemComponent@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBUReflectionCtx@cereal@@@Z
    MCAPI static std::shared_ptr<class ItemComponent>
    constructItemComponent(std::string const&, struct cereal::ReflectionCtx const&);

    // symbol:
    // ?deprecateComponentStartingFromVersion@CerealItemComponentFactory@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSemVersion@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static void
    deprecateComponentStartingFromVersion(std::string const&, class SemVersion, struct cereal::ReflectionCtx const&);

    // symbol:
    // ?getReleasedMinFormatVersionForAnyComponent@CerealItemComponentFactory@@SA?AV?$optional@VSemVersion@@@std@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static std::optional<class SemVersion>
    getReleasedMinFormatVersionForAnyComponent(struct cereal::ReflectionCtx const&);

    // symbol:
    // ?isComponentBasedItemSchema@CerealItemComponentFactory@@SA_NAEBVSemVersion@@AEBVValue@Json@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static bool
    isComponentBasedItemSchema(class SemVersion const&, class Json::Value const&, struct cereal::ReflectionCtx const&);

    // symbol:
    // ?validateCerealComponent@CerealItemComponentFactory@@SA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@_NAEBVExperiments@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static bool
    validateCerealComponent(std::string, class SemVersion const&, bool, class Experiments const&, struct cereal::ReflectionCtx const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?getComponentMissingToggles@CerealItemComponentFactory@@CA?AV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@AEBUComponentMetadata@1@AEBVExperiments@@@Z
    MCAPI static std::vector<::AllExperiments>
    getComponentMissingToggles(struct CerealItemComponentFactory::ComponentMetadata const&, class Experiments const&);

    // symbol:
    // ?getPropRegisteredComponents@CerealItemComponentFactory@@CA?AV?$optional@V?$reference_wrapper@V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UComponentMetadata@CerealItemComponentFactory@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UComponentMetadata@CerealItemComponentFactory@@@std@@@2@@std@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static std::optional<
        std::reference_wrapper<std::unordered_map<std::string, struct CerealItemComponentFactory::ComponentMetadata>>>
    getPropRegisteredComponents(struct cereal::ReflectionCtx const&);

    // symbol:
    // ?getPropReleasedMinFormatVersionForAnyComponent@CerealItemComponentFactory@@CA?AV?$optional@V?$reference_wrapper@VSemVersion@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static std::optional<std::reference_wrapper<class SemVersion>>
    getPropReleasedMinFormatVersionForAnyComponent(struct cereal::ReflectionCtx const&);

    // symbol: ?initEnTTMetaType@CerealItemComponentFactory@@CAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void initEnTTMetaType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?updateReleasedMinFormatVersionForAnyComponentIfLower@CerealItemComponentFactory@@CAXVSemVersion@@AEBUReflectionCtx@cereal@@@Z
    MCAPI static void
    updateReleasedMinFormatVersionForAnyComponentIfLower(class SemVersion, struct cereal::ReflectionCtx const&);

    // NOLINTEND
};
