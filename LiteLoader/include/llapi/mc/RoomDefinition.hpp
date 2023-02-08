/**
 * @file  RoomDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RoomDefinition.
 *
 */
class RoomDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROOMDEFINITION
public:
    class RoomDefinition& operator=(class RoomDefinition const &) = delete;
    RoomDefinition() = delete;
#endif

public:
    /**
     * @hash   -134523087
     * @symbol  ??0RoomDefinition\@\@QEAA\@H\@Z
     */
    MCAPI RoomDefinition(int);
    /**
     * @hash   1219734193
     * @symbol  ??0RoomDefinition\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI RoomDefinition(class RoomDefinition const &);
    /**
     * @hash   -1763668383
     * @symbol  ?findSource\@RoomDefinition\@\@QEAA_NH\@Z
     */
    MCAPI bool findSource(int);
    /**
     * @hash   912948906
     * @symbol  ?setConnection\@RoomDefinition\@\@QEAAXAEBEV?$shared_ptr\@VRoomDefinition\@\@\@std\@\@\@Z
     */
    MCAPI void setConnection(unsigned char const &, class std::shared_ptr<class RoomDefinition>);
    /**
     * @hash   -380178568
     * @symbol  ??1RoomDefinition\@\@QEAA\@XZ
     */
    MCAPI ~RoomDefinition();

};