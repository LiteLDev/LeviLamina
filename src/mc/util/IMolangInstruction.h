#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MolangEvalParams;
// clang-format on

class IMolangInstruction {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMolangInstruction() = default;

    // vIndex: 1
    virtual void execute(::MolangEvalParams&) const = 0;

    // vIndex: 2
    virtual ::std::unique_ptr<::IMolangInstruction> clone() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
