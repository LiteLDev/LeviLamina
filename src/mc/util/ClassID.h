#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClassID {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLASSID
public:
    ClassID& operator=(ClassID const&) = delete;
    ClassID(ClassID const&)            = delete;
    ClassID()                          = delete;
#endif

public:
    // private:
    /**
     * @symbol ?getNextID\@ClassID\@\@CA_KXZ
     */
    MCAPI static unsigned __int64 getNextID();

private:
};
