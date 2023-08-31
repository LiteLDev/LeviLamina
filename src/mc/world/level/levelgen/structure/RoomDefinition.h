#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RoomDefinition {

public:
    // prevent constructor by default
    RoomDefinition& operator=(RoomDefinition const&) = delete;
    RoomDefinition()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0RoomDefinition\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI RoomDefinition(class RoomDefinition const&);
    /**
     * @symbol ??0RoomDefinition\@\@QEAA\@H\@Z
     */
    MCAPI RoomDefinition(int32_t);
    /**
     * @symbol ?findSource\@RoomDefinition\@\@QEAA_NH\@Z
     */
    MCAPI bool findSource(int32_t);
    /**
     * @symbol ?setConnection\@RoomDefinition\@\@QEAAXAEBEV?$shared_ptr\@VRoomDefinition\@\@\@std\@\@\@Z
     */
    MCAPI void setConnection(uint8_t const&, std::shared_ptr<class RoomDefinition>);
    /**
     * @symbol ??1RoomDefinition\@\@QEAA\@XZ
     */
    MCAPI ~RoomDefinition();
    // NOLINTEND
};
