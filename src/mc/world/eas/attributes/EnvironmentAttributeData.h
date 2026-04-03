#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct EnvironmentAttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk483852;
    ::ll::UntypedStorage<4, 32> mUnk254b6b;
    ::ll::UntypedStorage<4, 28> mUnkaef95d;
    ::ll::UntypedStorage<4, 32> mUnk77394e;
    ::ll::UntypedStorage<4, 4>  mUnkc3d61b;
    ::ll::UntypedStorage<4, 4>  mUnkd4ed13;
    ::ll::UntypedStorage<4, 4>  mUnkb665ec;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentAttributeData(EnvironmentAttributeData const&);
    EnvironmentAttributeData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::EAS::EnvironmentAttributeData& operator=(::EAS::EnvironmentAttributeData&&);

    MCNAPI ::EAS::EnvironmentAttributeData& operator=(::EAS::EnvironmentAttributeData const&);

    MCNAPI bool operator==(::EAS::EnvironmentAttributeData const&) const;
    // NOLINTEND
};

} // namespace EAS
