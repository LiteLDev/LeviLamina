#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace OreUI { struct ContainerItemPropertyObject; }
// clang-format on

namespace OreUI {

class BundleContentQuery : public ::OreUI::QueryBase<::OreUI::BundleContentQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<
            ::OreUI::ContainerItemPropertyObject,
            ::std::allocator<::OreUI::ContainerItemPropertyObject>>>
                                                                                              mItems;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    ::ll::TypedStorage<4, 4, int>                                                             mBundleID;
    // NOLINTEND

public:
    // prevent constructor by default
    BundleContentQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double time) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    BundleContentQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client, int bundleID);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client, int bundleID);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double time);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
