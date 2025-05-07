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
    ::ll::UntypedStorage<8, 32> mUnke48e05;
    ::ll::UntypedStorage<8, 8>  mUnkc6987d;
    // NOLINTEND

public:
    // prevent constructor by default
    TestAction& operator=(TestAction const&);
    TestAction(TestAction const&);
    TestAction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;

    // vIndex: 3
    virtual bool operator==(::IRequestAction const& action) const /*override*/;

    // vIndex: 0
    virtual ~TestAction() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::ServerLevel& level, ::Dimension& dimension);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
