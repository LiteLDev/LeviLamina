#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class ServerLevel;
// clang-format on

class TestAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 8, ::std::string*> mExecuteString;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;

    virtual bool operator==(::IRequestAction const& action) const /*override*/;

    virtual ~TestAction() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::ServerLevel& level, ::Dimension& dimension);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
