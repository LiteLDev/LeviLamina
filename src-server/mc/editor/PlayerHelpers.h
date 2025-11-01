#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

    MCNAPI static ::Editor::ServiceProviderCollection& getServiceProviders(::Player& player);
    // NOLINTEND

};

}
