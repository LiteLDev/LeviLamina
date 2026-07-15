#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct AttributeLayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk34e5f0;
    ::ll::UntypedStorage<8, 40> mUnk77c8f5;
    ::ll::UntypedStorage<4, 4>  mUnk6bdb54;
    ::ll::UntypedStorage<4, 12> mUnk81fd70;
    ::ll::UntypedStorage<8, 24> mUnkcfcce2;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeLayerData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeLayerData(::EAS::AttributeLayerData const&);

    MCNAPI ::EAS::AttributeLayerData& operator=(::EAS::AttributeLayerData&&);

    MCNAPI ::EAS::AttributeLayerData& operator=(::EAS::AttributeLayerData const&);

    MCNAPI bool operator==(::EAS::AttributeLayerData const& rhs) const;

    MCNAPI ~AttributeLayerData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EAS::AttributeLayerData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace EAS
