#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI::Experimental {

struct ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mTitle;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mDescription;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mAcceptLabel;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    ConfirmationRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ConfirmationRequest(::OreUI::Experimental::Detail::IPropertyObject* parent);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::Detail::IPropertyObject* parent);
    // NOLINTEND
};

} // namespace OreUI::Experimental
