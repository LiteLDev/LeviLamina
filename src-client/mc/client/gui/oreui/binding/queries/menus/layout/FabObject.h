#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IPropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/RefreshPolicyObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct FabBase; }
// clang-format on

namespace OreUI {

class FabObject : public ::OreUI::PropertyObject<::OreUI::FabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>                                   mId;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>> mType;
    ::ll::TypedStorage<8, 712, ::OreUI::RefreshPolicyObject> mRefreshPolicy;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>>
                                                                                  mVariant;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::IPropertyObject>> mDerivedFab;
    // NOLINTEND

public:
    // prevent constructor by default
    FabObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FabObject(
        ::std::string const&                               name,
        ::OreUI::Detail::IPropertyObject*                  parent,
        ::Bedrock::Services::layout::model::FabBase const& fab
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                               name,
        ::OreUI::Detail::IPropertyObject*                  parent,
        ::Bedrock::Services::layout::model::FabBase const& fab
    );
    // NOLINTEND
};

} // namespace OreUI
