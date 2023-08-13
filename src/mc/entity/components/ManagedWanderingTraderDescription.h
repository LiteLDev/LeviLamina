#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class ManagedWanderingTraderDescription : public ::ActorComponentDescription {

public:
    // prevent constructor by default
    ManagedWanderingTraderDescription& operator=(ManagedWanderingTraderDescription const&) = delete;
    ManagedWanderingTraderDescription(ManagedWanderingTraderDescription const&)            = delete;
    ManagedWanderingTraderDescription()                                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@ManagedWanderingTraderDescription\@\@UEBAPEBDXZ
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MANAGEDWANDERINGTRADERDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ManagedWanderingTraderDescription();
#endif
    // NOLINTEND
};
