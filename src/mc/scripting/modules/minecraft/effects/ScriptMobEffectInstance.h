#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class MobEffectInstance;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMobEffectInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>             mEffectIdx;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
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

    MCAPI_C int getAmplifier_010() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getDisplayName() const;

    MCAPI ::std::string getDisplayName_010() const;

    MCAPI ::Scripting::Result_deprecated<int> getDuration() const;

    MCAPI_C int getDuration_010() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getTypeId_V1() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getTypeId_V2() const;

    MCAPI ::ScriptModuleMinecraft::ScriptMobEffectInstance&
    operator=(::ScriptModuleMinecraft::ScriptMobEffectInstance&&);

    MCAPI_S ::MobEffectInstance const* tryGetEffect() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
