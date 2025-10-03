#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MobEffectInstance;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk55ac51;
    ::ll::UntypedStorage<8, 96> mUnkae0ff3;
    ::ll::UntypedStorage<4, 4>  mUnkd5188a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorAddEffectAfterEventIntermediateData& operator=(ScriptActorAddEffectAfterEventIntermediateData const&);
    ScriptActorAddEffectAfterEventIntermediateData(ScriptActorAddEffectAfterEventIntermediateData const&);
    ScriptActorAddEffectAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActorAddEffectAfterEventIntermediateData(::Actor const& actor, ::MobEffectInstance mobEffect);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const& actor, ::MobEffectInstance mobEffect);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
