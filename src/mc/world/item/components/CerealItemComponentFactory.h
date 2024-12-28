#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class CerealDocumentUpgrader;
class IPackLoadContext;
class ItemComponent;
class SemVersion;
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnkb980e4;
        ::ll::UntypedStorage<8, 24>  mUnkab866b;
        ::ll::UntypedStorage<8, 120> mUnk144f3a;
        ::ll::UntypedStorage<8, 120> mUnkd0f997;
        ::ll::UntypedStorage<8, 24>  mUnk236f7f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentMetadata();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ComponentMetadata(::CerealItemComponentFactory::ComponentMetadata const&);

        MCAPI ::CerealItemComponentFactory::ComponentMetadata&
        operator=(::CerealItemComponentFactory::ComponentMetadata&&);

        MCAPI ::CerealItemComponentFactory::ComponentMetadata&
        operator=(::CerealItemComponentFactory::ComponentMetadata const&);

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
    ::ll::UntypedStorage<8, 64>  mUnk37c69b;
    ::ll::UntypedStorage<8, 112> mUnk533ef0;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealItemComponentFactory& operator=(CerealItemComponentFactory const&);
    CerealItemComponentFactory(CerealItemComponentFactory const&);
    CerealItemComponentFactory();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    addAllComponentUpgrades(::CerealDocumentUpgrader& documentUpgrader, ::cereal::ReflectionCtx const& ctx);

    MCAPI static ::std::shared_ptr<::ItemComponent>
    constructItemComponent(::std::string const& name, ::cereal::ReflectionCtx const& ctx);

    MCAPI static ::CerealItemComponentFactory* contextInstanceIfAvailable(::cereal::ReflectionCtx const& ctx);

    MCAPI static void deprecateComponentStartingFromVersion(
        ::std::string const&           name,
        ::SemVersion                   deprecatedVersion,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI static ::std::optional<::SemVersion>
    getReleasedMinFormatVersionForAnyComponent(::cereal::ReflectionCtx const& ctx);

    MCAPI static bool isComponentBasedItemSchema(
        ::SemVersion const&            formatVersion,
        ::Json::Value const&           itemData,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI static ::CerealItemComponentFactory& setupContextInstanceIfRequired(::cereal::ReflectionCtx& ctx);

    MCAPI static void
    updateReleasedMinFormatVersionForAnyComponentIfLower(::CerealItemComponentFactory& instance, ::SemVersion version);

    MCAPI static bool validateCerealComponent(
        ::std::string                  componentName,
        ::SemVersion const&            documentVersion,
        ::IPackLoadContext const&      packLoadContext,
        ::cereal::ReflectionCtx const& ctx,
        bool                           forBetaParsing,
        ::JsonBetaState                canUseBeta
    );
    // NOLINTEND
};
