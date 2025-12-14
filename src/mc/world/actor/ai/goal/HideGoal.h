#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class POIInstance;
// clang-format on

class HideGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mHideAttempts;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void stop() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ::std::weak_ptr<::POIInstance> _getOwnedPOI(::POIType type) const /*override*/;

    virtual uint64 _getRepathTime() const /*override*/;

    virtual ~HideGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _sendSoundTheAlarmAchievement() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI bool $canContinueToUse();

    MCAPI void $stop();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI ::std::weak_ptr<::POIInstance> $_getOwnedPOI(::POIType type) const;

    MCFOLD uint64 $_getRepathTime() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
