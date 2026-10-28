#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct AttributeLayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk34e5f0;
    ::ll::UntypedStorage<4, 4>  mUnk6bdb54;
    ::ll::UntypedStorage<4, 12> mUnk81fd70;
    ::ll::UntypedStorage<8, 24> mUnkcfcce2;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeLayerData& operator=(AttributeLayerData const&);
    AttributeLayerData(AttributeLayerData const&);
    AttributeLayerData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::EAS::AttributeLayerData const& rhs) const;
    // NOLINTEND
};

} // namespace EAS
