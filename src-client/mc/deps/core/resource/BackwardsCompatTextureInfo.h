#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BackwardsCompatTextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk96efec;
    ::ll::UntypedStorage<4, 8>  mUnk2ac2dd;
    ::ll::UntypedStorage<4, 8>  mUnkacd42c;
    ::ll::UntypedStorage<4, 8>  mUnke0f3bc;
    ::ll::UntypedStorage<8, 32> mUnk4ab516;
    // NOLINTEND

public:
    // prevent constructor by default
    BackwardsCompatTextureInfo& operator=(BackwardsCompatTextureInfo const&);
    BackwardsCompatTextureInfo(BackwardsCompatTextureInfo const&);
    BackwardsCompatTextureInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void load(::Json::Value const& value);
    // NOLINTEND
};
