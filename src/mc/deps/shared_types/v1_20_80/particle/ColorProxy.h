#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper {

struct ColorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk9e335b;
    ::ll::UntypedStorage<8, 48> mUnka0e09e;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorProxy& operator=(ColorProxy const&);
    ColorProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ColorProxy(::SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper::ColorProxy const&);

    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper::ColorProxy const& other
    ) const;

    MCNAPI ~ColorProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper::ColorProxy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80::ParticleAppearanceTintingComponentHelper
