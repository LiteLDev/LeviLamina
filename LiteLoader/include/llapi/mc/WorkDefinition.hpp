/**
 * @file  WorkDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseGoalDefinition.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WorkDefinition.
 *
 */
class WorkDefinition : public BaseGoalDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKDEFINITION
public:
    WorkDefinition(class WorkDefinition const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORKDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorkDefinition();
#endif
    /**
     * @symbol ??0WorkDefinition\@\@QEAA\@XZ
     */
    MCAPI WorkDefinition();
    /**
     * @symbol ??4WorkDefinition\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class WorkDefinition & operator=(class WorkDefinition const &);

};
