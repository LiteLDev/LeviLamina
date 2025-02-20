#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MobEffectInstance;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMobEffectInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6f7818;
    ::ll::UntypedStorage<8, 24> mUnke266c8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMobEffectInstance& operator=(ScriptMobEffectInstance const&);
    ScriptMobEffectInstance(ScriptMobEffectInstance const&);
    ScriptMobEffectInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptMobEffectInstance(::Actor const& actor, uint effectIdx);

    MCAPI ::Scripting::Result_deprecated<int> getAmplifier() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getDisplayName() const;

    MCAPI ::std::string getDisplayName_010() const;

    MCAPI ::Scripting::Result_deprecated<int> getDuration() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getTypeId_V1() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getTypeId_V2() const;

    MCAPI ::ScriptModuleMinecraft::ScriptMobEffectInstance&
    operator=(::ScriptModuleMinecraft::ScriptMobEffectInstance&&);

    MCAPI ::MobEffectInstance const* tryGetEffect() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptMobEffectInstance> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor, uint effectIdx);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
