#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IAddActorEntityProxy.h"

class AddActorEntityProxy : public ::IAddActorEntityProxy {

public:
    // prevent constructor by default
    AddActorEntityProxy& operator=(AddActorEntityProxy const&) = delete;
    AddActorEntityProxy(AddActorEntityProxy const&)            = delete;
    AddActorEntityProxy()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeActor\@AddActorEntityProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeActor(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?reloadActor\@AddActorEntityProxy\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void reloadActor(class Actor&);
    // NOLINTEND
};
