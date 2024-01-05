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
    // vIndex: 0, symbol: __gen_??1TestAction@@UEAA@XZ
    virtual ~TestAction() = default;

    // vIndex: 1, symbol: ?execute@TestAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
    virtual void execute(class ServerLevel& level, class Dimension& dimension);

    // vIndex: 3, symbol: ??8TestAction@@UEBA_NAEBVIRequestAction@@@Z
    virtual bool operator==(class IRequestAction const& action) const;

    // symbol: ??0TestAction@@QEAA@XZ
    MCAPI TestAction();

    // NOLINTEND
};
