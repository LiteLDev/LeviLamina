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
        MCAPI ComponentMetadata(struct CerealItemComponentFactory::ComponentMetadata const&);

        MCAPI struct CerealItemComponentFactory::ComponentMetadata&
        operator=(struct CerealItemComponentFactory::ComponentMetadata&&);

        MCAPI struct CerealItemComponentFactory::ComponentMetadata&
        operator=(struct CerealItemComponentFactory::ComponentMetadata const&);

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
    MCAPI static std::shared_ptr<class ItemComponent>
    constructItemComponent(std::string const&, struct cereal::ReflectionCtx const&);

    MCAPI static void
    deprecateComponentStartingFromVersion(std::string const&, class SemVersion, struct cereal::ReflectionCtx const&);

    MCAPI static std::optional<class SemVersion>
    getReleasedMinFormatVersionForAnyComponent(struct cereal::ReflectionCtx const&);

    MCAPI static bool
    isComponentBasedItemSchema(class SemVersion const&, class Json::Value const&, struct cereal::ReflectionCtx const&);

    MCAPI static bool
    validateCerealComponent(std::string, class SemVersion const&, bool, class Experiments const&, struct cereal::ReflectionCtx const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<::AllExperiments>
    getComponentMissingToggles(struct CerealItemComponentFactory::ComponentMetadata const&, class Experiments const&);

    MCAPI static std::optional<
        std::reference_wrapper<std::unordered_map<std::string, struct CerealItemComponentFactory::ComponentMetadata>>>
    getPropRegisteredComponents(struct cereal::ReflectionCtx const&);

    MCAPI static std::optional<std::reference_wrapper<class SemVersion>>
    getPropReleasedMinFormatVersionForAnyComponent(struct cereal::ReflectionCtx const&);

    MCAPI static void initEnTTMetaType(struct cereal::ReflectionCtx&);

    MCAPI static void
    updateReleasedMinFormatVersionForAnyComponentIfLower(class SemVersion, struct cereal::ReflectionCtx const&);

    // NOLINTEND
};
