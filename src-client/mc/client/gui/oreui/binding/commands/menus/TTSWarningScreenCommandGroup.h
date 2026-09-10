#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class TTSWarningScreenCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::TTSWarningScreenCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                    mClient;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<bool>> mDoesLanguageSupportTts;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mMarkTTSShown;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mDisableTTS;
    // NOLINTEND

public:
    // prevent constructor by default
    TTSWarningScreenCommandGroup& operator=(TTSWarningScreenCommandGroup const&);
    TTSWarningScreenCommandGroup(TTSWarningScreenCommandGroup const&);
    TTSWarningScreenCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    TTSWarningScreenCommandGroup(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
