#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct TransitionAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 28> mUnk95ccf6;
    ::ll::UntypedStorage<4, 28> mUnkaa55e2;
    ::ll::UntypedStorage<8, 48> mUnk6b9c3d;
    // NOLINTEND

public:
    // prevent constructor by default
    TransitionAttributeData& operator=(TransitionAttributeData const&);
    TransitionAttributeData(TransitionAttributeData const&);
    TransitionAttributeData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::EAS::TransitionAttributeData const& other) const;
    // NOLINTEND
};

} // namespace EAS
