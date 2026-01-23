#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct TripWireTripEvent;
namespace ScriptModuleMinecraft { struct ScriptActorData; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTripWireTripAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                              mDimension;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                                                         mPos;
    ::ll::TypedStorage<1, 1, bool>                                                                      mIsPowered;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::optional<::ScriptModuleMinecraft::ScriptActorData>>> mSources;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTripWireTripAfterEventIntermediateData& operator=(ScriptTripWireTripAfterEventIntermediateData const&);
    ScriptTripWireTripAfterEventIntermediateData(ScriptTripWireTripAfterEventIntermediateData const&);
    ScriptTripWireTripAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptTripWireTripAfterEventIntermediateData(::TripWireTripEvent const& eventData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TripWireTripEvent const& eventData);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
