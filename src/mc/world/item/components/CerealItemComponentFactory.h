#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/util/CerealSchemaUpgradeSet.h"

// auto generated forward declare list
// clang-format off
class CerealDocumentUpgrader;
class Experiments;
class IPackLoadContext;
class ItemComponent;
class PackLoadRequirement;
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
        // ComponentMetadata inner types define
        using Ctor = ::std::unique_ptr<::ItemComponent> (*)();

        using ParseFunction = ::std::function<bool(::Experiments const&, ::SemVersion const&)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemComponent> (*)()> makeUnique;
        ::ll::TypedStorage<8, 24, ::std::vector<::PackLoadRequirement>>    requirements;
        ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>           releasedMinFormatVersion;
        ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>           deprecatedVersion;
        ::ll::TypedStorage<8, 24, ::CerealSchemaUpgradeSet>                versionUpgrades;
        ::ll::TypedStorage<8, 64, ::std::function<bool(::Experiments const&, ::SemVersion const&)>> onParseCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentMetadata& operator=(ComponentMetadata const&);
        ComponentMetadata();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ComponentMetadata(::CerealItemComponentFactory::ComponentMetadata const&);

        MCAPI ::CerealItemComponentFactory::ComponentMetadata&
        operator=(::CerealItemComponentFactory::ComponentMetadata&&);

        MCAPI ~ComponentMetadata();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::CerealItemComponentFactory::ComponentMetadata const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::CerealItemComponentFactory::ComponentMetadata>>
                                            mRegisteredComponents;
    ::ll::TypedStorage<8, 24, ::SemVersion> mReleasedMinFormatVersionForAnyComponent;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    addAllComponentUpgrades(::CerealDocumentUpgrader& documentUpgrader, ::cereal::ReflectionCtx const& ctx);

    MCAPI static void addComponentMetadata(
        ::cereal::ReflectionCtx&                          ctx,
        ::std::string const&                              componentName,
        ::CerealItemComponentFactory::ComponentMetadata&& metadata,
        ::std::optional<::SemVersion>                     releasedMinFormatVersion
    );

    MCAPI static ::std::shared_ptr<::ItemComponent>
    constructItemComponent(::std::string const& name, ::cereal::ReflectionCtx const& ctx);

    MCAPI static ::CerealItemComponentFactory* contextInstanceIfAvailable(::cereal::ReflectionCtx const& ctx);

    MCAPI static void deprecateComponentStartingFromVersion(
        ::std::string const&           name,
        ::SemVersion                   deprecatedVersion,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI static bool isComponentBasedItemSchema(
        ::SemVersion const&            formatVersion,
        ::Json::Value const&           itemData,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI static ::CerealItemComponentFactory& setupContextInstanceIfRequired(::cereal::ReflectionCtx& ctx);

    MCAPI static bool validateCerealComponent(
        ::std::string const&           componentName,
        ::SemVersion const&            documentVersion,
        ::IPackLoadContext const&      packLoadContext,
        ::cereal::ReflectionCtx const& ctx,
        bool                           forBetaParsing,
        ::JsonBetaState                canUseBeta
    );
    // NOLINTEND
};
