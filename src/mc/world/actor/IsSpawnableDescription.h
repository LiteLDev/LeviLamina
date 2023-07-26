#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IsSpawnableDescription {

public:
    // prevent constructor by default
    IsSpawnableDescription& operator=(IsSpawnableDescription const&) = delete;
    IsSpawnableDescription(IsSpawnableDescription const&)            = delete;
    IsSpawnableDescription()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getJsonName\@IsSpawnableDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
};
