#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { class SchemaFactory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealItemComponentFactory {
public:
    // CerealItemComponentFactory inner types declare
    // clang-format off
    struct Constructor;
    // clang-format on

    // CerealItemComponentFactory inner types define
    struct Constructor {
    public:
        // prevent constructor by default
        Constructor();

    public:
        // NOLINTBEGIN
        // symbol: ??0Constructor@CerealItemComponentFactory@@QEAA@AEBU01@@Z
        MCAPI Constructor(struct CerealItemComponentFactory::Constructor const&);

        // symbol: ??4Constructor@CerealItemComponentFactory@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct CerealItemComponentFactory::Constructor&
        operator=(struct CerealItemComponentFactory::Constructor&&);

        // symbol: ??4Constructor@CerealItemComponentFactory@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct CerealItemComponentFactory::Constructor&
        operator=(struct CerealItemComponentFactory::Constructor const&);

        // symbol: ??1Constructor@CerealItemComponentFactory@@QEAA@XZ
        MCAPI ~Constructor();

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
    // ?addAllComponentUpgrades@CerealItemComponentFactory@@SAXAEAVCerealDocumentUpgrader@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static void addAllComponentUpgrades(class CerealDocumentUpgrader&, struct cereal::ReflectionCtx&);

    // symbol:
    // ?bindAllComponentSchemas@CerealItemComponentFactory@@SAXAEAVSchemaFactory@cereal@@AEBVSemVersion@@AEAUReflectionCtx@3@@Z
    MCAPI static void
    bindAllComponentSchemas(class cereal::SchemaFactory&, class SemVersion const&, struct cereal::ReflectionCtx&);

    // symbol:
    // ?constructItemComponent@CerealItemComponentFactory@@SA?AV?$shared_ptr@VItemComponent@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAUReflectionCtx@cereal@@@Z
    MCAPI static std::shared_ptr<class ItemComponent>
    constructItemComponent(std::string const&, struct cereal::ReflectionCtx&);

    // symbol:
    // ?deprecateComponentStartingFromVersion@CerealItemComponentFactory@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSemVersion@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static void
    deprecateComponentStartingFromVersion(std::string const&, class SemVersion, struct cereal::ReflectionCtx&);

    // symbol:
    // ?getReleasedMinFormatVersionForAnyComponent@CerealItemComponentFactory@@SA?AV?$optional@VSemVersion@@@std@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static std::optional<class SemVersion>
    getReleasedMinFormatVersionForAnyComponent(struct cereal::ReflectionCtx&);

    // symbol:
    // ?isComponentBasedItemSchema@CerealItemComponentFactory@@SA_NAEBVSemVersion@@AEBVValue@Json@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static bool
    isComponentBasedItemSchema(class SemVersion const&, class Json::Value const&, struct cereal::ReflectionCtx&);

    // symbol:
    // ?isRegisteredComponent@CerealItemComponentFactory@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static bool isRegisteredComponent(std::string const&, struct cereal::ReflectionCtx&);

    // symbol:
    // ?registerDeprecatedComponent@CerealItemComponentFactory@@SAX$$QEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEAUReflectionCtx@cereal@@@Z
    MCAPI static void
    registerDeprecatedComponent(std::string const&&, std::string const&&, struct cereal::ReflectionCtx&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getEnTTMetaType@CerealItemComponentFactory@@CA?AVmeta_type@entt@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static entt::meta_type getEnTTMetaType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?getPropDeprecatedComponents@CerealItemComponentFactory@@CAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSemVersion@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSemVersion@@@std@@@2@@std@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static std::unordered_map<std::string, class SemVersion>&
    getPropDeprecatedComponents(struct cereal::ReflectionCtx&);

    // symbol:
    // ?getPropRegisteredComponents@CerealItemComponentFactory@@CAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@CerealItemComponentFactory@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UConstructor@CerealItemComponentFactory@@@std@@@2@@std@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static std::unordered_map<std::string, struct CerealItemComponentFactory::Constructor>&
    getPropRegisteredComponents(struct cereal::ReflectionCtx&);

    // symbol:
    // ?getPropReleasedMinFormatVersionForAnyComponent@CerealItemComponentFactory@@CAAEAV?$optional@VSemVersion@@@std@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static std::optional<class SemVersion>&
    getPropReleasedMinFormatVersionForAnyComponent(struct cereal::ReflectionCtx&);

    // symbol:
    // ?updateReleasedMinFormatVersionForAnyComponentIfLower@CerealItemComponentFactory@@CAXVSemVersion@@AEAUReflectionCtx@cereal@@@Z
    MCAPI static void
    updateReleasedMinFormatVersionForAnyComponentIfLower(class SemVersion, struct cereal::ReflectionCtx&);

    // NOLINTEND
};
