#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct AttributeLayerSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk281b37;
    ::ll::UntypedStorage<8, 40> mUnkf5991e;
    ::ll::UntypedStorage<1, 1>  mUnk23fceb;
    ::ll::UntypedStorage<1, 1>  mUnk2c8253;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeLayerSettings& operator=(AttributeLayerSettings const&);
    AttributeLayerSettings(AttributeLayerSettings const&);
    AttributeLayerSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::EAS::AttributeLayerSettings const&) const;

    MCNAPI ~AttributeLayerSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace EAS
