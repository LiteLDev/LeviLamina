#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Scripting { class WeakLifetimeScope; }
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
    MCAPI ::Scripting::Result_deprecated<int> getAmplifier() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getDisplayName() const;

    MCAPI ::std::string getDisplayName_010() const;

    MCAPI ::Scripting::Result_deprecated<int> getDuration() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getTypeId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptMobEffectInstance> bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMobEffectInstance>
    getHandle(::Actor const& actor, uint effectIdx, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
