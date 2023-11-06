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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~TestAction();

    // vIndex: 1, symbol: ?execute@TestAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
    virtual void execute(class ServerLevel&, class Dimension&);

    // vIndex: 3, symbol: ??8TestAction@@UEBA_NAEAVIRequestAction@@@Z
    virtual bool operator==(class IRequestAction&) const;

    // symbol: ??0TestAction@@QEAA@XZ
    MCAPI TestAction();

    // NOLINTEND
};
