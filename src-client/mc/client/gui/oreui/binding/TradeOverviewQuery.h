#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI::Experimental { class ClientDependencies; }
namespace OreUI::Experimental { class GameDependencies; }
// clang-format on

namespace OreUI::Experimental {

class TradeOverviewQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::TradeOverviewQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>          mIsExperienceBarVisible;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<float>>         mExperienceProgress;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<float>>         mExperiencePossibleProgress;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mTraderName;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<int>>           mTradeTiers;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeOverviewQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double timestampMs) /*override*/;

    virtual ~TradeOverviewQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeOverviewQuery(
        ::OreUI::Experimental::GameDependencies const&   game,
        ::OreUI::Experimental::ClientDependencies const& client
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
    MCAPI void*
    $ctor(::OreUI::Experimental::GameDependencies const& game, ::OreUI::Experimental::ClientDependencies const& client);
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
