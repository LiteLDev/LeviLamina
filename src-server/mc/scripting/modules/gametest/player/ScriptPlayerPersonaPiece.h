#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptPlayerPersonaPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4b93f2;
    ::ll::UntypedStorage<4, 4> mUnk91f8e1;
    ::ll::UntypedStorage<8, 32> mUnk8c15a8;
    ::ll::UntypedStorage<1, 2> mUnkd4fae4;
    ::ll::UntypedStorage<8, 32> mUnk883a04;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerPersonaPiece& operator=(ScriptPlayerPersonaPiece const&);
    ScriptPlayerPersonaPiece(ScriptPlayerPersonaPiece const&);
    ScriptPlayerPersonaPiece();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleGameTest::ScriptPlayerPersonaPiece& operator=(::ScriptModuleGameTest::ScriptPlayerPersonaPiece&&);

    MCNAPI ~ScriptPlayerPersonaPiece();
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

}
