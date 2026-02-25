#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/experimental/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class GameDependencies; }
namespace Parties { struct PartySystem; }
// clang-format on

namespace OreUI::Experimental {

class PartyChatCommandGroup
: public ::OreUI::Experimental::CommandGroupBase<::OreUI::Experimental::PartyChatCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem>>> mPartySystem;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void>>                mSendComposedMessage;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, ::std::string>> mSetComposedMessage;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, bool>>          mSetIsOpen;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PartyChatCommandGroup(::OreUI::Experimental::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental
