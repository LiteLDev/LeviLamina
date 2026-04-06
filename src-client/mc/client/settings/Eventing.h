#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftEventing;
// clang-format on

namespace Settings {

class Eventing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mMinecraftEventing;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>    mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    Eventing& operator=(Eventing const&);
    Eventing(Eventing const&);
    Eventing();
};

} // namespace Settings
