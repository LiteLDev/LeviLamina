#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct Rating; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class RatingObject : public ::OreUI::PropertyObject<::OreUI::RatingObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::OreUI::Property<::std::optional<double>, ::std::optional<double>>> mAverage;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>, ::std::optional<int>>>       mTotalCount;
    // NOLINTEND

public:
    // prevent constructor by default
    RatingObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RatingObject(
        ::std::string const&                              name,
        ::OreUI::Detail::IPropertyObject*                 parent,
        ::Bedrock::Services::layout::model::Rating const& src
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                              name,
        ::OreUI::Detail::IPropertyObject*                 parent,
        ::Bedrock::Services::layout::model::Rating const& src
    );
    // NOLINTEND
};

} // namespace OreUI
