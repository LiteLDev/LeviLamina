#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

class SimpleInProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mTitleString;
    ::ll::TypedStorage<8, 32, ::std::string const> mProgressString;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleInProgressScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
