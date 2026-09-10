#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/store/services/LinkType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct LinksTo; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class LinksToObject : public ::OreUI::PropertyObject<::OreUI::LinksToObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                                mId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Bedrock::Services::layout::model::LinkType>> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    LinksToObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LinksToObject(
        ::std::string const&                               name,
        ::OreUI::Detail::IPropertyObject*                  parent,
        ::Bedrock::Services::layout::model::LinksTo const& src
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                               name,
        ::OreUI::Detail::IPropertyObject*                  parent,
        ::Bedrock::Services::layout::model::LinksTo const& src
    );
    // NOLINTEND
};

} // namespace OreUI
