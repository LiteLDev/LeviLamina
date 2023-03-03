/**
 * @file  CustomSaveComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CustomSaveComponent.
 *
 */
class CustomSaveComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CUSTOMSAVECOMPONENT
public:
    class CustomSaveComponent& operator=(class CustomSaveComponent const &) = delete;
    CustomSaveComponent(class CustomSaveComponent const &) = delete;
    CustomSaveComponent() = delete;
#endif

public:
    /**
     * @symbol  ?save\@CustomSaveComponent\@\@QEAA_NAEAVLevelStorage\@\@AEAVActor\@\@\@Z
     */
    MCAPI bool save(class LevelStorage &, class Actor &);

};