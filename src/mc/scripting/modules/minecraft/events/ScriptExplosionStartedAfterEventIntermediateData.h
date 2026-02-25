#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Dimension;
struct ExplosionStartedEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionStartedAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                mDimension;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                                  mBlocks;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExplosionStartedAfterEventIntermediateData&
    operator=(ScriptExplosionStartedAfterEventIntermediateData const&);
    ScriptExplosionStartedAfterEventIntermediateData(ScriptExplosionStartedAfterEventIntermediateData const&);
    ScriptExplosionStartedAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptExplosionStartedAfterEventIntermediateData(::ExplosionStartedEvent const& eventData, ::Actor const* source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ExplosionStartedEvent const& eventData, ::Actor const* source);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
