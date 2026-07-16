#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Parties { class PartySystem; }
// clang-format on

namespace OreUI {

class PartyChatCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::PartyChatCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartySystem>>  mPartySystem;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void>>                mSendComposedMessage;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string>> mSetComposedMessage;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, bool>>          mSetIsOpen;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PartyChatCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
