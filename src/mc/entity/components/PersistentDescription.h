#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class PersistentDescription : public ::ActorComponentDescription {

public:
    // prevent constructor by default
    PersistentDescription& operator=(PersistentDescription const&) = delete;
    PersistentDescription(PersistentDescription const&)            = delete;
    PersistentDescription()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@PersistentDescription\@\@UEBAPEBDXZ
     */
    virtual char const* getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@Description\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PERSISTENTDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PersistentDescription();
#endif
    // NOLINTEND
};
