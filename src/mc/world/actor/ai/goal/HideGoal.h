#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/POIType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

class HideGoal : public ::MoveToPOIGoal {
public:
    // prevent constructor by default
    HideGoal& operator=(HideGoal const&);
    HideGoal(HideGoal const&);
    HideGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HideGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 16
    virtual uint64 _getRepathTime() const;

    // vIndex: 17
    virtual std::weak_ptr<class POIInstance> _getOwnedPOI(::POIType type) const;

    // NOLINTEND
};
