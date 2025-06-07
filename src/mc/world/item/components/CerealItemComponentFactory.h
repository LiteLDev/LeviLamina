#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class CerealDocumentUpgrader;
class Experiments;
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
        ::ll::UntypedStorage<8, 8>  mUnkb980e4;
        ::ll::UntypedStorage<8, 24> mUnkab866b;
        ::ll::UntypedStorage<8, 32> mUnk144f3a;
        ::ll::UntypedStorage<8, 32> mUnkd0f997;
        ::ll::UntypedStorage<8, 24> mUnk236f7f;
        ::ll::UntypedStorage<8, 64> mUnk25c34a;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentMetadata(ComponentMetadata const&);
        ComponentMetadata();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::CerealItemComponentFactory::ComponentMetadata&
        operator=(::CerealItemComponentFactory::ComponentMetadata&&);

        MCNAPI ::CerealItemComponentFactory::ComponentMetadata&
        operator=(::CerealItemComponentFactory::ComponentMetadata const&);

        MCNAPI ~ComponentMetadata();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk37c69b;
    ::ll::UntypedStorage<8, 24> mUnk533ef0;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealItemComponentFactory& operator=(CerealItemComponentFactory const&);
    CerealItemComponentFactory(CerealItemComponentFactory const&);
    CerealItemComponentFactory();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    addAllComponentUpgrades(::CerealDocumentUpgrader& documentUpgrader, ::cereal::ReflectionCtx const& ctx);

    MCNAPI static void addComponentMetadata(
        ::cereal::ReflectionCtx&                          ctx,
        ::std::string const&                              componentName,
        ::CerealItemComponentFactory::ComponentMetadata&& metadata,
        ::std::optional<::SemVersion>                     releasedMinFormatVersion
    );

    MCNAPI static ::std::shared_ptr<::ItemComponent>
    constructItemComponent(::std::string const& name, ::cereal::ReflectionCtx const& ctx);

    MCNAPI static ::CerealItemComponentFactory* contextInstanceIfAvailable(::cereal::ReflectionCtx const& ctx);

    MCNAPI static bool isComponentBasedItemSchema(
        ::SemVersion const&            formatVersion,
        ::Json::Value const&           itemData,
        ::cereal::ReflectionCtx const& ctx
    );

    MCNAPI static bool validateCerealComponent(
        ::std::string                  componentName,
        ::SemVersion const&            documentVersion,
        ::IPackLoadContext const&      packLoadContext,
        ::cereal::ReflectionCtx const& ctx,
        bool                           forBetaParsing,
        ::JsonBetaState                canUseBeta
    );
    // NOLINTEND
};
