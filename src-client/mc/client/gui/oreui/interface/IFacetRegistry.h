#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/debug/IFacetProvider.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
namespace OreUI { class IFacet; }
// clang-format on

namespace OreUI {

class IFacetRegistry : public ::OreUI::Debug::IFacetProvider {
public:
    // IFacetRegistry inner types define
    enum class Error : int {
        AlreadyActive      = 0,
        AlreadyInactive    = 1,
        ActivateNotFound   = 2,
        DeactivateNotFound = 3,
        InitFailed         = 4,
    };

    using payload_value_t = ::std::variant<double, bool, ::std::string>;

    using Payload = ::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFacetRegistry() /*override*/ = default;

    virtual void registerFacet(
        ::std::string const&                                         name,
        ::std::function<::std::unique_ptr<::OreUI::IFacet>()> const& constructor
    ) = 0;

    virtual ::std::optional<::OreUI::IFacetRegistry::Error> activateFacet(
        ::OreUI::FacetBinder&                                                                   binder,
        ::std::string const&                                                                    name,
        ::std::string const&                                                                    id,
        ::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>> const& payload
    ) = 0;

    virtual ::std::optional<::OreUI::IFacetRegistry::Error>
    deactivateFacet(::OreUI::FacetBinder& binder, ::std::string const& id) = 0;

    virtual void clearAllFacets() = 0;

    virtual void suspendAllFacets() = 0;

    virtual void bind(::OreUI::FacetBinder& binder) = 0;

    virtual ::std::vector<::std::string> const& update(::OreUI::FacetBinder& binder) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
