#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(struct CerealItemComponentFactory::ComponentMetadata const&);

        MCAPI void dtor$();

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
    constructItemComponent(std::string const& name, struct cereal::ReflectionCtx const& ctx);

    MCAPI static void deprecateComponentStartingFromVersion(
        std::string const&                  name,
        class SemVersion                    deprecatedVersion,
        struct cereal::ReflectionCtx const& ctx
    );

    MCAPI static std::optional<class SemVersion>
    getReleasedMinFormatVersionForAnyComponent(struct cereal::ReflectionCtx const& ctx);

    MCAPI static bool isComponentBasedItemSchema(
        class SemVersion const&             formatVersion,
        class Json::Value const&            itemData,
        struct cereal::ReflectionCtx const& ctx
    );

    MCAPI static bool validateCerealComponent(
        std::string                         componentName,
        class SemVersion const&             engineVersion,
        bool                                isBaseGamePack,
        class Experiments const&            experiments,
        struct cereal::ReflectionCtx const& ctx
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<::AllExperiments> getComponentMissingToggles(
        struct CerealItemComponentFactory::ComponentMetadata const& data,
        class Experiments const&                                    experiments
    );

    MCAPI static std::optional<
        std::reference_wrapper<std::unordered_map<std::string, struct CerealItemComponentFactory::ComponentMetadata>>>
    getPropRegisteredComponents(struct cereal::ReflectionCtx const& ctx);

    MCAPI static std::optional<std::reference_wrapper<class SemVersion>>
    getPropReleasedMinFormatVersionForAnyComponent(struct cereal::ReflectionCtx const& ctx);

    MCAPI static void initEnTTMetaType(struct cereal::ReflectionCtx& ctx);

    MCAPI static void updateReleasedMinFormatVersionForAnyComponentIfLower(
        class SemVersion                    version,
        struct cereal::ReflectionCtx const& ctx
    );

    // NOLINTEND
};
