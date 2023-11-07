#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class BehaviorTreeDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    BehaviorTreeDescription& operator=(BehaviorTreeDescription const&);
    BehaviorTreeDescription(BehaviorTreeDescription const&);
    BehaviorTreeDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@BehaviorTreeDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1BehaviorTreeDescription@@UEAA@XZ
    virtual ~BehaviorTreeDescription();

    // NOLINTEND
};
