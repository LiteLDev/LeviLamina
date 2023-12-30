#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RoomDefinition {
public:
    // prevent constructor by default
    RoomDefinition& operator=(RoomDefinition const&);
    RoomDefinition();

public:
    // NOLINTBEGIN
    // symbol: ??0RoomDefinition@@QEAA@AEBV0@@Z
    MCAPI RoomDefinition(class RoomDefinition const&);

    // symbol: ??0RoomDefinition@@QEAA@H@Z
    MCAPI explicit RoomDefinition(int roomIndex);

    // symbol: ?findSource@RoomDefinition@@QEAA_NH@Z
    MCAPI bool findSource(int scanIndex);

    // symbol: ?setConnection@RoomDefinition@@QEAAXAEBEV?$shared_ptr@VRoomDefinition@@@std@@@Z
    MCAPI void setConnection(uchar const& direction, std::shared_ptr<class RoomDefinition> definition);

    // symbol: ??1RoomDefinition@@QEAA@XZ
    MCAPI ~RoomDefinition();

    // NOLINTEND
};
