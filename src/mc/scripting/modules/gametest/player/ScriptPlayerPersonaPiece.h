#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptPlayerPersonaPiece {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        pieceId;
    ::ll::TypedStorage<4, 4, ::persona::PieceType>  pieceType;
    ::ll::TypedStorage<8, 32, ::std::string>        packId;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> isDefaultPiece;
    ::ll::TypedStorage<8, 32, ::std::string>        productId;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerPersonaPiece(ScriptPlayerPersonaPiece const&);
    ScriptPlayerPersonaPiece();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleGameTest::ScriptPlayerPersonaPiece&
    operator=(::ScriptModuleGameTest::ScriptPlayerPersonaPiece&&);

    MCAPI ::ScriptModuleGameTest::ScriptPlayerPersonaPiece&
    operator=(::ScriptModuleGameTest::ScriptPlayerPersonaPiece const&);

    MCAPI ~ScriptPlayerPersonaPiece();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
