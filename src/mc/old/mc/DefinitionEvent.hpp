/**
 * @file  DefinitionEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DefinitionEvent.
 *
 */
class DefinitionEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFINITIONEVENT
public:
    DefinitionEvent() = delete;
#endif

public:
    /**
     * @symbol  ??0DefinitionEvent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI DefinitionEvent(class DefinitionEvent &&);
    /**
     * @symbol  ??0DefinitionEvent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI DefinitionEvent(class DefinitionEvent const &);
    /**
     * @symbol  ?evaluateEvent\@DefinitionEvent\@\@QEBAXAEAVRenderParams\@\@AEAV?$vector\@UDefinitionModifier\@\@V?$allocator\@UDefinitionModifier\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void evaluateEvent(class RenderParams &, std::vector<struct DefinitionModifier> &) const;
    /**
     * @symbol  ??4DefinitionEvent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class DefinitionEvent & operator=(class DefinitionEvent const &);
    /**
     * @symbol  ??1DefinitionEvent\@\@QEAA\@XZ
     */
    MCAPI ~DefinitionEvent();

};