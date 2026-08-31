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
    ::ll::UntypedStorage<4, 4>  mUnkf034fd;
    ::ll::UntypedStorage<1, 1>  mUnkb1783c;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentAttributeData& operator=(EnvironmentAttributeData const&);
    EnvironmentAttributeData(EnvironmentAttributeData const&);
    EnvironmentAttributeData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::EAS::EnvironmentAttributeData const& other) const;
    // NOLINTEND
};

} // namespace EAS
