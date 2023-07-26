#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AddActorEntityProxy {

public:
    // prevent constructor by default
    AddActorEntityProxy& operator=(AddActorEntityProxy const&) = delete;
    AddActorEntityProxy(AddActorEntityProxy const&)            = delete;
    AddActorEntityProxy()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initializeActor\@AddActorEntityProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeActor(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?reloadActor\@AddActorEntityProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void reloadActor(class Actor&); // NOLINT
};
