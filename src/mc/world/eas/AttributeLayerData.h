#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct AttributeLayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk34e5f0;
    ::ll::UntypedStorage<4, 4>  mUnk1ba605;
    ::ll::UntypedStorage<8, 56> mUnk81fd70;
    ::ll::UntypedStorage<8, 24> mUnkcfcce2;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeLayerData(AttributeLayerData const&);
    AttributeLayerData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeLayerData(::EAS::AttributeLayerData&&);

    MCNAPI ::EAS::AttributeLayerData& operator=(::EAS::AttributeLayerData&&);

    MCNAPI ::EAS::AttributeLayerData& operator=(::EAS::AttributeLayerData const&);

    MCNAPI bool operator==(::EAS::AttributeLayerData const&) const;

    MCNAPI ~AttributeLayerData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EAS::AttributeLayerData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace EAS
