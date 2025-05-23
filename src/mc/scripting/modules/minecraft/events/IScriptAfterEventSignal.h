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
    // vIndex: 0
    virtual ~IScriptAfterEventSignal() = default;

    // vIndex: 1
    virtual void preFlush() = 0;

    // vIndex: 2
    virtual bool flush() = 0;

    // vIndex: 3
    virtual void postFlush() = 0;

    // vIndex: 4
    virtual uint64 getSubscriberCount() const;

    // vIndex: 5
    virtual void enqueueClosureRemovalForActor(::ActorUniqueID const&);

    // vIndex: 6
    virtual bool isActorSignal() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $getSubscriberCount() const;

    MCNAPI void $enqueueClosureRemovalForActor(::ActorUniqueID const&);

    MCNAPI bool $isActorSignal() const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
