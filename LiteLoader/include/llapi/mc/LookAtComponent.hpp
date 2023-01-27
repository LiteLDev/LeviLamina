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
     * @hash   -86118457
     * @symbol  ??0LookAtComponent\@\@QEAA\@XZ
     */
    MCAPI LookAtComponent();
    /**
     * @hash   567309727
     * @symbol  ?getCoolingTime\@LookAtComponent\@\@QEAAAEAHXZ
     */
    MCAPI int & getCoolingTime();
    /**
     * @hash   68508838
     * @symbol  ?getSearchRadius\@LookAtComponent\@\@QEBAMXZ
     */
    MCAPI float getSearchRadius() const;
    /**
     * @hash   1084756424
     * @symbol  ?getTarget\@LookAtComponent\@\@QEBA_NXZ
     */
    MCAPI bool getTarget() const;
    /**
     * @hash   1264242700
     * @symbol  ?isLookingAtMe\@LookAtComponent\@\@QEAA_NAEAVActor\@\@0\@Z
     */
    MCAPI bool isLookingAtMe(class Actor &, class Actor &);

};