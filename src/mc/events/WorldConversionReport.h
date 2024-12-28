#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Legacy {

struct WorldConversionReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf2cb98;
    ::ll::UntypedStorage<8, 32> mUnk754f03;
    ::ll::UntypedStorage<8, 8>  mUnkff12ce;
    ::ll::UntypedStorage<8, 8>  mUnk30a270;
    ::ll::UntypedStorage<8, 8>  mUnk7edec7;
    ::ll::UntypedStorage<8, 8>  mUnk87d908;
    ::ll::UntypedStorage<8, 8>  mUnkaaeb12;
    ::ll::UntypedStorage<4, 4>  mUnkcafe45;
    ::ll::UntypedStorage<8, 32> mUnk37e268;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldConversionReport& operator=(WorldConversionReport const&);
    WorldConversionReport(WorldConversionReport const&);
    WorldConversionReport();
};

} // namespace Legacy
