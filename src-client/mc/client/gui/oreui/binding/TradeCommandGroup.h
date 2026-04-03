#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class TradeCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::TradeCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int, int>>                 mSelectTrade;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void>>           mPullInIngredientsForSelectedTrade;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int, int>> mPerformAutoTrade;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TradeCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeCommandGroup(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);

    MCAPI void performAutoTrade(int tradeTier, int tradeIndex);

    MCAPI void pullInIngredientsForSelectedTrade();

    MCAPI void selectTrade(int tradeTier, int tradeIndex);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
