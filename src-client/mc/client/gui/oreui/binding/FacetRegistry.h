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
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OreUI::FacetRegistryLocation>                         mLocation;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                          mUpdatingFacets;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetRegistry::FacetEntry>>     mFacets;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetRegistry::FacetPrototype>> mFacetPrototypes;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsActivationDisabled;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FacetRegistry() /*override*/ = default;

    virtual void
    registerFacet(::std::string const&, ::std::function<::std::unique_ptr<::OreUI::IFacet>()> const&) /*override*/;

    virtual ::std::optional<::OreUI::IFacetRegistry::Error> activateFacet(
        ::OreUI::FacetBinder&,
        ::std::string const&,
        ::std::string const&,
        ::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>> const&
    ) /*override*/;

    virtual ::std::optional<::OreUI::IFacetRegistry::Error>
    deactivateFacet(::OreUI::FacetBinder&, ::std::string const&) /*override*/;

    virtual void clearAllFacets() /*override*/;

    virtual void suspendAllFacets() /*override*/;

    virtual void disableFacetActivation() /*override*/;

    virtual void bind(::OreUI::FacetBinder&) /*override*/;

    virtual ::std::vector<::std::string> const& update(::OreUI::FacetBinder&) /*override*/;

    virtual ::std::unordered_map<::std::string, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IFacet>>
    getActiveFacets() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
