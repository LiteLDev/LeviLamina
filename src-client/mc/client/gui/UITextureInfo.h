#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class UITextureInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk252cea;
    ::ll::UntypedStorage<1, 1>  mUnka28e80;
    ::ll::UntypedStorage<4, 8>  mUnkf3e63a;
    ::ll::UntypedStorage<8, 24> mUnkbc4b00;
    ::ll::UntypedStorage<4, 4>  mUnkf654c2;
    // NOLINTEND

public:
    // prevent constructor by default
    UITextureInfo& operator=(UITextureInfo const&);
    UITextureInfo(UITextureInfo const&);
    UITextureInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _loadAseprite(::Json::Value const& value);

    MCNAPI void _loadNineslice(::Json::Value const& value);
    // NOLINTEND
};
