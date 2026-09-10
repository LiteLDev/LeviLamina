#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Rpc {

struct ServerHelloGreeting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk28c4df;
    ::ll::UntypedStorage<4, 4>  mUnkdff680;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerHelloGreeting& operator=(ServerHelloGreeting const&);
    ServerHelloGreeting(ServerHelloGreeting const&);
    ServerHelloGreeting();
};

} // namespace Editor::Rpc
