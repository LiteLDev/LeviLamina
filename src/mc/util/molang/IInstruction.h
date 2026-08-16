#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MolangEvalParams;
// clang-format on

namespace Molang::details {

class IInstruction {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInstruction();

    virtual ::Molang::details::IInstruction* cloneAt(void*) const = 0;

    virtual ::Molang::details::IInstruction* moveTo(void*) = 0;

    virtual uint64 getSize() const = 0;

    virtual auto getCodeAddress() const -> void (*)(::MolangEvalParams&, void*) = 0;
    // NOLINTEND
};

} // namespace Molang::details
