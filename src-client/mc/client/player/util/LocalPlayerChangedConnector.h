#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
// clang-format on

struct LocalPlayerChangedConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::PubSub::Connector<void(::LocalPlayer const*)>&> mConnector;
    ::ll::TypedStorage<8, 8, ::LocalPlayer const*>                                      mInitialValue;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayerChangedConnector& operator=(LocalPlayerChangedConnector const&);
    LocalPlayerChangedConnector(LocalPlayerChangedConnector const&);
    LocalPlayerChangedConnector();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::function<void(::LocalPlayer const*)>
    createLocalPlayerChangedCallback(::std::function<void()> initCallback, ::std::function<void()> resetCallback);
    // NOLINTEND
};
