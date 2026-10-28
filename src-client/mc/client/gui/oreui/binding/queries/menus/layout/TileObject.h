#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IPropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct TileBase; }
// clang-format on

namespace OreUI {

class TileObject : public ::OreUI::PropertyObject<::OreUI::TileObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>   mType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::IPropertyObject>> mDerivedTile;
    // NOLINTEND

public:
    // prevent constructor by default
    TileObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TileObject(::std::string const& name, ::Bedrock::Services::layout::model::TileBase const& tile);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, ::Bedrock::Services::layout::model::TileBase const& tile);
    // NOLINTEND
};

} // namespace OreUI
