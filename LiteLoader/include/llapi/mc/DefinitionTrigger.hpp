/**
 * @file  MC/DefinitionTrigger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1053776757
     * @symbol ?canTrigger@DefinitionTrigger@@QEBA_NAEAVRenderParams@@@Z
     */
    MCAPI bool canTrigger(class RenderParams &) const;
    /**
     * @hash   1013780641
     * @symbol ??1DefinitionTrigger@@QEAA@XZ
     */
    MCAPI ~DefinitionTrigger();
    /**
     * @hash   855886991
     * @symbol ?bindType@DefinitionTrigger@@SAXXZ
     */
    MCAPI static void bindType();

};