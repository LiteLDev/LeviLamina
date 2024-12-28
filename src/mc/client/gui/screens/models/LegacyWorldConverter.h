#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyWorldConverter : public ::std::enable_shared_from_this<::LegacyWorldConverter> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk547e41;
    ::ll::UntypedStorage<8, 8>  mUnke3fb5d;
    ::ll::UntypedStorage<8, 8>  mUnkb503fd;
    ::ll::UntypedStorage<8, 24> mUnk4e6bbb;
    ::ll::UntypedStorage<8, 24> mUnk709c7c;
    ::ll::UntypedStorage<1, 1>  mUnk5f67dc;
    ::ll::UntypedStorage<1, 1>  mUnkbbcfa3;
    ::ll::UntypedStorage<1, 1>  mUnk437111;
    ::ll::UntypedStorage<8, 48> mUnkbf23da;
    ::ll::UntypedStorage<8, 8>  mUnk9d4cfb;
    ::ll::UntypedStorage<8, 16> mUnk5e0490;
    ::ll::UntypedStorage<8, 16> mUnk8febfb;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyWorldConverter& operator=(LegacyWorldConverter const&);
    LegacyWorldConverter(LegacyWorldConverter const&);
    LegacyWorldConverter();
};
