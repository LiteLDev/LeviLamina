#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
// clang-format on

struct LocalPlayerChangedConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk27af58;
    ::ll::UntypedStorage<8, 8> mUnk6d5e5b;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayerChangedConnector& operator=(LocalPlayerChangedConnector const&);
    LocalPlayerChangedConnector(LocalPlayerChangedConnector const&);
    LocalPlayerChangedConnector();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::function<void(::LocalPlayer const*)>
    createLocalPlayerChangedCallback(::std::function<void()> initCallback, ::std::function<void()> resetCallback);
    // NOLINTEND
};
