#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk786da7;
    ::ll::UntypedStorage<8, 80> mUnkc4058d;
    ::ll::UntypedStorage<8, 8>  mUnk782009;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardIdentity& operator=(ScriptScoreboardIdentity const&);
    ScriptScoreboardIdentity(ScriptScoreboardIdentity const&);
    ScriptScoreboardIdentity();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getActor() const;

    MCNAPI ::std::string getName() const;

    MCNAPI bool isValid() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptScoreboardIdentity&
    operator=(::ScriptModuleMinecraft::ScriptScoreboardIdentity&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
