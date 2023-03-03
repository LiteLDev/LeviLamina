/**
 * @file  LookAtComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtComponent.
 *
 */
class LookAtComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATCOMPONENT
public:
    class LookAtComponent& operator=(class LookAtComponent const &) = delete;
    LookAtComponent(class LookAtComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0LookAtComponent\@\@QEAA\@XZ
     */
    MCAPI LookAtComponent();
    /**
     * @symbol  ?getCoolingTime\@LookAtComponent\@\@QEAAAEAHXZ
     */
    MCAPI int & getCoolingTime();
    /**
     * @symbol  ?getSearchRadius\@LookAtComponent\@\@QEBAMXZ
     */
    MCAPI float getSearchRadius() const;
    /**
     * @symbol  ?getTarget\@LookAtComponent\@\@QEBA_NXZ
     */
    MCAPI bool getTarget() const;
    /**
     * @symbol  ?isLookingAtMe\@LookAtComponent\@\@QEAA_NAEAVActor\@\@0\@Z
     */
    MCAPI bool isLookingAtMe(class Actor &, class Actor &);

};