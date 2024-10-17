#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

class TestAction : public ::IRequestAction {
public:
    // prevent constructor by default
    TestAction& operator=(TestAction const&);
    TestAction(TestAction const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TestAction() = default;

    // vIndex: 1
    virtual void execute(class ServerLevel& level, class Dimension& dimension);

    // vIndex: 3
    virtual bool operator==(class IRequestAction const& action) const;

    MCAPI TestAction();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void execute$(class ServerLevel& level, class Dimension& dimension);

    // NOLINTEND
};
