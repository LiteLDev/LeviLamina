#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorkDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKDEFINITION
public:
    WorkDefinition(WorkDefinition const&) = delete;
#endif

public:
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
    MCAPI class WorkDefinition& operator=(class WorkDefinition const&);
};
