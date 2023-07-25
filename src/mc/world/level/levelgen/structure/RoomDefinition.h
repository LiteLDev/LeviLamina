#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RoomDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROOMDEFINITION
public:
    RoomDefinition& operator=(RoomDefinition const&) = delete;
    RoomDefinition()                                 = delete;
#endif

public:
    /**
     * @symbol ??0RoomDefinition\@\@QEAA\@H\@Z
     */
    MCAPI RoomDefinition(int);
    /**
     * @symbol ??0RoomDefinition\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI RoomDefinition(class RoomDefinition const&);
    /**
     * @symbol ?findSource\@RoomDefinition\@\@QEAA_NH\@Z
     */
    MCAPI bool findSource(int);
    /**
     * @symbol ?setConnection\@RoomDefinition\@\@QEAAXAEBEV?$shared_ptr\@VRoomDefinition\@\@\@std\@\@\@Z
     */
    MCAPI void setConnection(unsigned char const&, class std::shared_ptr<class RoomDefinition>);
    /**
     * @symbol ??1RoomDefinition\@\@QEAA\@XZ
     */
    MCAPI ~RoomDefinition();
};
