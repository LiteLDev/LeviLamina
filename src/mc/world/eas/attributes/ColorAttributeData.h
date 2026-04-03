#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct ColorAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk742b22;
    ::ll::UntypedStorage<4, 4>  mUnk7249dd;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorAttributeData& operator=(ColorAttributeData const&);
    ColorAttributeData(ColorAttributeData const&);
    ColorAttributeData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::EAS::ColorAttributeData const&) const;
    // NOLINTEND
};

} // namespace EAS
