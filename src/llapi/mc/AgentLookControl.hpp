/**
 * @file  AgentLookControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AgentLookControl.
 *
 */
class AgentLookControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTLOOKCONTROL
public:
    class AgentLookControl& operator=(class AgentLookControl const &) = delete;
    AgentLookControl(class AgentLookControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AgentLookControl();
    /**
     * @vftbl  1
     * @symbol  ?initializeInternal\@AgentLookControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void initializeInternal(class Mob &);
    /**
     * @vftbl  2
     * @symbol  ?tick\@AgentLookControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void tick(class Mob &);
    /**
     * @symbol  ??0AgentLookControl\@\@QEAA\@XZ
     */
    MCAPI AgentLookControl();
    /**
     * @symbol  ?sBaseYMax\@AgentLookControl\@\@2MA
     */
    MCAPI static float sBaseYMax;

};