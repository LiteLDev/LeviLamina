/**
 * @file  ActorInteraction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInteraction.
 *
 */
class ActorInteraction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINTERACTION
public:
    class ActorInteraction& operator=(class ActorInteraction const &) = delete;
    ActorInteraction(class ActorInteraction const &) = delete;
    ActorInteraction() = delete;
#endif

public:
    /**
     * @hash   -1002647934
     * @symbol  ??0ActorInteraction\@\@QEAA\@_N\@Z
     */
    MCAPI ActorInteraction(bool);
    /**
     * @hash   -1186738844
     * @symbol  ?capture\@ActorInteraction\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void capture(class std::function<void (void)>);
    /**
     * @hash   -8196260
     * @symbol  ?getInteractText\@ActorInteraction\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getInteractText() const;
    /**
     * @hash   1186151621
     * @symbol  ?interact\@ActorInteraction\@\@QEAAXXZ
     */
    MCAPI void interact();
    /**
     * @hash   -1247088306
     * @symbol  ?setInteractText\@ActorInteraction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setInteractText(std::string const &);
    /**
     * @hash   1242554780
     * @symbol  ?shouldCapture\@ActorInteraction\@\@QEBA_NXZ
     */
    MCAPI bool shouldCapture() const;
    /**
     * @hash   1691239991
     * @symbol  ??1ActorInteraction\@\@QEAA\@XZ
     */
    MCAPI ~ActorInteraction();

};