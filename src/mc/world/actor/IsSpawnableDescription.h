#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IsSpawnableDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISSPAWNABLEDESCRIPTION
public:
    IsSpawnableDescription& operator=(IsSpawnableDescription const&) = delete;
    IsSpawnableDescription(IsSpawnableDescription const&)            = delete;
    IsSpawnableDescription()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getJsonName\@IsSpawnableDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
};
