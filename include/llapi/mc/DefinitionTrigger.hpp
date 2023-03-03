/**
 * @file  DefinitionTrigger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DefinitionTrigger.
 *
 */
class DefinitionTrigger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFINITIONTRIGGER
public:
    class DefinitionTrigger& operator=(class DefinitionTrigger const &) = delete;
    DefinitionTrigger(class DefinitionTrigger const &) = delete;
    DefinitionTrigger() = delete;
#endif

public:
    /**
     * @symbol  ?canTrigger\@DefinitionTrigger\@\@QEBA_NAEAVRenderParams\@\@\@Z
     */
    MCAPI bool canTrigger(class RenderParams &) const;
    /**
     * @symbol  ??1DefinitionTrigger\@\@QEAA\@XZ
     */
    MCAPI ~DefinitionTrigger();
    /**
     * @symbol  ?bindType\@DefinitionTrigger\@\@SAXXZ
     */
    MCAPI static void bindType();

};