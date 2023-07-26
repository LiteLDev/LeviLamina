#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorkDefinition {

public:
    // prevent constructor by default
    WorkDefinition(WorkDefinition const&) = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORKDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorkDefinition(); // NOLINT
#endif
    /**
     * @symbol ??0WorkDefinition\@\@QEAA\@XZ
     */
    MCAPI WorkDefinition(); // NOLINT
    /**
     * @symbol ??4WorkDefinition\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class WorkDefinition& operator=(class WorkDefinition const&); // NOLINT
};
