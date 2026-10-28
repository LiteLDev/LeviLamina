#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Marketplace { class ReceivedGiftsManager; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ReceivedGiftCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::ReceivedGiftCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Marketplace::ReceivedGiftsManager>> mReceivedGiftsManager;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>             mAcceptGift;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>             mDeclineGift;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceivedGiftCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ReceivedGiftCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
