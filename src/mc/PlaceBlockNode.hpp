/**
 * @file  PlaceBlockNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlaceBlockNode.
 *
 */
class PlaceBlockNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLACEBLOCKNODE
public:
    class PlaceBlockNode& operator=(class PlaceBlockNode const &) = delete;
    PlaceBlockNode(class PlaceBlockNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlaceBlockNode();
    /**
     * @vftbl  1
     * @symbol  ?tick\@PlaceBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @symbol  ??0PlaceBlockNode\@\@QEAA\@XZ
     */
    MCAPI PlaceBlockNode();

};