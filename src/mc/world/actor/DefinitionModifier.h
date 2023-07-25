#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DefinitionModifier {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFINITIONMODIFIER
public:
    DefinitionModifier& operator=(DefinitionModifier const&) = delete;
    DefinitionModifier()                                     = delete;
#endif

public:
    /**
     * @symbol ??0DefinitionModifier\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI DefinitionModifier(struct DefinitionModifier const&);
    /**
     * @symbol ??1DefinitionModifier\@\@QEAA\@XZ
     */
    MCAPI ~DefinitionModifier();
};
