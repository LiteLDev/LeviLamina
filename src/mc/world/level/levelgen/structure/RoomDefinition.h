#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RoomDefinition {

public:
    // prevent constructor by default
    RoomDefinition& operator=(RoomDefinition const&) = delete;
    RoomDefinition()                                 = delete;

public:
    /**
     * @symbol ??0RoomDefinition\@\@QEAA\@H\@Z
     */
    MCAPI RoomDefinition(int); // NOLINT
    /**
     * @symbol ??0RoomDefinition\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI RoomDefinition(class RoomDefinition const&); // NOLINT
    /**
     * @symbol ?findSource\@RoomDefinition\@\@QEAA_NH\@Z
     */
    MCAPI bool findSource(int); // NOLINT
    /**
     * @symbol ?setConnection\@RoomDefinition\@\@QEAAXAEBEV?$shared_ptr\@VRoomDefinition\@\@\@std\@\@\@Z
     */
    MCAPI void setConnection(unsigned char const&, class std::shared_ptr<class RoomDefinition>); // NOLINT
    /**
     * @symbol ??1RoomDefinition\@\@QEAA\@XZ
     */
    MCAPI ~RoomDefinition(); // NOLINT
};
