#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptEventSignalAsync {
public:
    // prevent constructor by default
    IScriptEventSignalAsync& operator=(IScriptEventSignalAsync const&);
    IScriptEventSignalAsync(IScriptEventSignalAsync const&);
    IScriptEventSignalAsync();

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
    MCAPI uint64 $getSubscriberCount() const;

    MCAPI void $enqueueClosureRemovalForActor(::ActorUniqueID const&);

    MCAPI bool $isActorSignal() const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
