#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MatchmakingRequestSender;
// clang-format on

namespace OreUI {

class MatchmakingCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::MatchmakingCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MatchmakingRequestSender>> mMatchmakingRequestSender;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                      mExitQueue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _exitQueue();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
