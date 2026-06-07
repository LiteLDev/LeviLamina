#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class ModeServiceProvider; }
// clang-format on

namespace Editor {

class PlayerHelpers {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Editor::Services::ModeServiceProvider const* _getModeServiceConst(::Player const& player);

    MCNAPI static bool canChangeGameType(::Player const& player, ::GameType newGameType);

    MCNAPI static bool canInteractWithOtherEntitiesInGame(::Player const& player);

    MCNAPI static bool canSleep(::Player const& player);

    MCNAPI static ::Editor::ServiceProviderCollection& getServiceProviders(::Player& player);

    MCNAPI static bool isFireImmune(::Player const& player);

    MCNAPI static bool isPlayerAudible(::Player const& player);
    // NOLINTEND
};

} // namespace Editor
