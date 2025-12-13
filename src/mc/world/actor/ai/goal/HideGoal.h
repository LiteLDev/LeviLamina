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
    MCNAPI void _sendSoundTheAlarmAchievement() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $stop();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI ::std::weak_ptr<::POIInstance> $_getOwnedPOI(::POIType type) const;

    MCNAPI uint64 $_getRepathTime() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
