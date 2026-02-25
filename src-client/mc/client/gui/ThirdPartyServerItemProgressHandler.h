#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/StoreProgressHandler.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ThirdPartyServerItemProgressHandler : public ::StoreProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mServerName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThirdPartyServerItemProgressHandler() /*override*/ = default;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
