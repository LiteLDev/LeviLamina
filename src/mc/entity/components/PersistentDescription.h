#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

class PersistentDescription : public ::Description {

public:
    // prevent constructor by default
    PersistentDescription& operator=(PersistentDescription const&) = delete;
    PersistentDescription(PersistentDescription const&)            = delete;
    PersistentDescription()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@PersistentDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PERSISTENTDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PersistentDescription(); // NOLINT
#endif
};
