#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MolangEvalParams;
// clang-format on

class IMolangInstruction {
public:
    // prevent constructor by default
    IMolangInstruction& operator=(IMolangInstruction const&);
    IMolangInstruction(IMolangInstruction const&);
    IMolangInstruction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMolangInstruction();

    // vIndex: 1
    virtual void execute(::MolangEvalParams&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
