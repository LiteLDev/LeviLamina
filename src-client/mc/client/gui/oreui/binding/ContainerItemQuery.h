#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/ContainerItemType.h"
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct ContainerItem; }
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI::Experimental { class ClientDependencies; }
namespace OreUI::Experimental { class GameDependencies; }
// clang-format on

namespace OreUI::Experimental {

class ContainerItemQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::ContainerItemQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                   mSubscription;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<int>>                             mAmount;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>>                   mName;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>>                   mImage;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>                            mHasDamageValue;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<short>>                           mMaxDamage;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<short>>                           mDamageValue;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<::GameplayUI::ContainerItemType>> mContainerItemType;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>                                                mContainerName;
    ::ll::TypedStorage<4, 4, int>                                                                mIndex;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>>    mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerItemQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double timestampMs) /*override*/;

    virtual ~ContainerItemQuery() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerItemQuery(
        ::OreUI::Experimental::GameDependencies const&   game,
        ::OreUI::Experimental::ClientDependencies const& client,
        ::ContainerEnumName                              containerName,
        int                                              index
    );

    MCAPI void _updateProperties(::GameplayUI::ContainerItem const& item);
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
        ::OreUI::Experimental::GameDependencies const&   game,
        ::OreUI::Experimental::ClientDependencies const& client,
        ::ContainerEnumName                              containerName,
        int                                              index
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double timestampMs);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Experimental
