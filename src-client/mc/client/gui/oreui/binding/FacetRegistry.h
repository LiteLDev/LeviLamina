#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/FacetRegistryLocation.h"
#include "mc/client/gui/oreui/interface/IFacetRegistry.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
namespace OreUI { class IFacet; }
// clang-format on

namespace OreUI {

class FacetRegistry : public ::OreUI::IFacetRegistry {
public:
    // FacetRegistry inner types declare
    // clang-format off
    struct FacetPrototype;
    struct FacetEntry;
    // clang-format on

    // FacetRegistry inner types define
    struct FacetPrototype {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const>                                         name;
        ::ll::TypedStorage<8, 64, ::std::function<::std::unique_ptr<::OreUI::IFacet>()> const> constructor;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~FacetPrototype();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct FacetEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                     name;
        ::ll::TypedStorage<8, 32, ::std::string>                     id;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IFacet>> facet;
        ::ll::TypedStorage<1, 1, bool>                               isSuspended;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~FacetEntry();
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
    ::ll::TypedStorage<4, 4, ::OreUI::FacetRegistryLocation>                         mLocation;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                          mUpdatingFacets;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetRegistry::FacetEntry>>     mFacets;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetRegistry::FacetPrototype>> mFacetPrototypes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FacetRegistry() /*override*/;

    virtual void registerFacet(
        ::std::string const&                                         name,
        ::std::function<::std::unique_ptr<::OreUI::IFacet>()> const& constructor
    ) /*override*/;

    virtual ::std::optional<::OreUI::IFacetRegistry::Error> activateFacet(
        ::OreUI::FacetBinder&                                                                   binder,
        ::std::string const&                                                                    name,
        ::std::string const&                                                                    id,
        ::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>> const& payload
    ) /*override*/;

    virtual ::std::optional<::OreUI::IFacetRegistry::Error>
    deactivateFacet(::OreUI::FacetBinder& binder, ::std::string const& id) /*override*/;

    virtual void clearAllFacets() /*override*/;

    virtual void suspendAllFacets() /*override*/;

    virtual void bind(::OreUI::FacetBinder& binder) /*override*/;

    virtual ::std::vector<::std::string> const& update(::OreUI::FacetBinder& binder) /*override*/;

    virtual ::std::unordered_map<::std::string, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IFacet>>
    getActiveFacets() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $registerFacet(::std::string const& name, ::std::function<::std::unique_ptr<::OreUI::IFacet>()> const& constructor);

    MCAPI ::std::optional<::OreUI::IFacetRegistry::Error> $activateFacet(
        ::OreUI::FacetBinder&                                                                   binder,
        ::std::string const&                                                                    name,
        ::std::string const&                                                                    id,
        ::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>> const& payload
    );

    MCAPI ::std::optional<::OreUI::IFacetRegistry::Error>
    $deactivateFacet(::OreUI::FacetBinder& binder, ::std::string const& id);

    MCAPI void $clearAllFacets();

    MCAPI void $suspendAllFacets();

    MCAPI void $bind(::OreUI::FacetBinder& binder);

    MCAPI ::std::vector<::std::string> const& $update(::OreUI::FacetBinder& binder);

    MCAPI ::std::unordered_map<::std::string, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IFacet>> $getActiveFacets();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
