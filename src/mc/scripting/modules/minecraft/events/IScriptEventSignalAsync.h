#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptEventSignalAsync {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptEventSignalAsync() = default;

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
    // destructor thunk
    // NOLINTBEGIN

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
