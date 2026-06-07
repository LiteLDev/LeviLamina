#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ItemStacksWithCursorItemQuery : public ::OreUI::QueryBase<::OreUI::ItemStacksWithCursorItemQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mIsStackable;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>                                             mContainerName;
    ::ll::TypedStorage<4, 4, int>                                                             mIndex;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStacksWithCursorItemQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double time) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStacksWithCursorItemQuery(
        ::OreUI::GameDependencies const&   game,
        ::OreUI::ClientDependencies const& client,
        ::ContainerEnumName                containerName,
        int                                index
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::GameDependencies const&   game,
        ::OreUI::ClientDependencies const& client,
        ::ContainerEnumName                containerName,
        int                                index
    );
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
