#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MolangEvalParams;
namespace Molang::details { class IInstruction; }
// clang-format on

namespace Molang::details {

class Program {
public:
    // Program inner types declare
    // clang-format off
    struct UnpackedInstruction;
    // clang-format on
    
    // Program inner types define
    struct UnpackedInstruction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb67df9;
        ::ll::UntypedStorage<8, 8> mUnkb78589;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        UnpackedInstruction& operator=(UnpackedInstruction const&);
        UnpackedInstruction(UnpackedInstruction const&);
        UnpackedInstruction();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3eeb0e;
    ::ll::UntypedStorage<4, 4> mUnkdf34c4;
    ::ll::UntypedStorage<1, 1> mUnkebc975;
    // NOLINTEND

public:
    // prevent constructor by default
    Program(Program const&);
    Program();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Program(::std::vector<::std::unique_ptr<::Molang::details::IInstruction>> instructions, bool storeStackState);

    MCNAPI ::Molang::details::Program& operator=(::Molang::details::Program const& rhs);

    MCNAPI ~Program();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::std::unique_ptr<::Molang::details::IInstruction>> instructions, bool storeStackState);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
