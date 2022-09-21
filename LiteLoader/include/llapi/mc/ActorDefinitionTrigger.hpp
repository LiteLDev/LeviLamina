/**
 * @file  MC/ActorDefinitionTrigger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionTrigger.
 *
 */
class ActorDefinitionTrigger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONTRIGGER
public:
    ActorDefinitionTrigger(class ActorDefinitionTrigger const &) = delete;
    ActorDefinitionTrigger() = delete;
#endif

public:
    /**
     * @hash   -2039053911
     * @symbol ??0ActorDefinitionTrigger@@QEAA@$$QEAV0@@Z
     */
    MCAPI ActorDefinitionTrigger(class ActorDefinitionTrigger &&);
    /**
     * @hash   -883131240
     * @symbol ?canTrigger@ActorDefinitionTrigger@@QEBA_NAEBVActor@@AEBVVariantParameterList@@@Z
     */
    MCAPI bool canTrigger(class Actor const &, class VariantParameterList const &) const;
    /**
     * @hash   793659380
     * @symbol ??4ActorDefinitionTrigger@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ActorDefinitionTrigger & operator=(class ActorDefinitionTrigger const &);
    /**
     * @hash   1268910860
     * @symbol ??4ActorDefinitionTrigger@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class ActorDefinitionTrigger & operator=(class ActorDefinitionTrigger &&);
    /**
     * @hash   1948244986
     * @symbol ??1ActorDefinitionTrigger@@QEAA@XZ
     */
    MCAPI ~ActorDefinitionTrigger();

};