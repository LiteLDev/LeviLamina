#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MobEffectInstance;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMobEffectInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6f7818;
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
    MCNAPI ScriptMobEffectInstance(::Actor const& actor, uint effectIdx);

    MCNAPI bool _isValid() const;

    MCNAPI ::Scripting::Result_deprecated<int> getAmplifier() const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getDisplayName() const;

    MCNAPI ::std::string getDisplayName_010() const;

    MCNAPI ::Scripting::Result_deprecated<int> getDuration() const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getTypeId_V1() const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getTypeId_V2() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptMobEffectInstance& operator=(::ScriptModuleMinecraft::ScriptMobEffectInstance&&);

    MCNAPI ::MobEffectInstance const* tryGetEffect() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const& actor, uint effectIdx);
    // NOLINTEND

};

}
