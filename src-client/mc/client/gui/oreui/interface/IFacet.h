#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/Status.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
// clang-format on

namespace OreUI {

class IFacet : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFacet() /*override*/ = default;

    virtual void unbind(::OreUI::FacetBinder& binder) = 0;

    virtual void sync(::OreUI::FacetBinder& binder, ::std::string const& id) = 0;

    virtual bool update() = 0;

    virtual char const* name() const = 0;

    virtual ::OreUI::Status
    init(::std::unordered_map<::std::string, ::std::variant<double, bool, ::std::string>> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
