#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptAfterEventSignal {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptAfterEventSignal() = default;

    virtual void preFlush() = 0;

    virtual bool flush() = 0;

    virtual void postFlush() = 0;

    virtual uint64 getSubscriberCount() const;

    virtual void enqueueClosureRemovalForActor(::ActorUniqueID const&);

    virtual bool isActorSignal() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD uint64 $getSubscriberCount() const;

    MCFOLD void $enqueueClosureRemovalForActor(::ActorUniqueID const&);

    MCFOLD bool $isActorSignal() const;


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
