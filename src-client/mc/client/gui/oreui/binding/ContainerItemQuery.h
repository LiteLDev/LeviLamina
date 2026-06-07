#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ContainerItemBindings.h"
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ContainerItemQuery : public ::OreUI::QueryBase<::OreUI::ContainerItemQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1832, ::OreUI::ContainerItemBindings>                               mItemBindings;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>                                             mContainerName;
    ::ll::TypedStorage<4, 4, int>                                                             mIndex;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerItemQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double time) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerItemQuery(
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
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
