#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptPlayerSkinData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkae6bca;
    ::ll::UntypedStorage<4, 32> mUnk7ec2fa;
    ::ll::UntypedStorage<8, 16> mUnke3c76a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerSkinData& operator=(ScriptPlayerSkinData const&);
    ScriptPlayerSkinData(ScriptPlayerSkinData const&);
    ScriptPlayerSkinData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptPlayerSkinData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
