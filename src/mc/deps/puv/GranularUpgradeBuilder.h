#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

class GranularUpgradeBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7cb7f3;
    ::ll::UntypedStorage<8, 16> mUnk6677e2;
    ::ll::UntypedStorage<8, 48> mUnk1bd83e;
    ::ll::UntypedStorage<8, 64> mUnkcc617e;
    ::ll::UntypedStorage<1, 1>  mUnkc741d1;
    // NOLINTEND

public:
    // prevent constructor by default
    GranularUpgradeBuilder& operator=(GranularUpgradeBuilder const&);
    GranularUpgradeBuilder(GranularUpgradeBuilder const&);
    GranularUpgradeBuilder();
};

} // namespace Puv
