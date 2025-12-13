#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommonImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7da705;
    ::ll::UntypedStorage<8, 32> mUnkf74580;
    ::ll::UntypedStorage<8, 32> mUnk68942a;
    ::ll::UntypedStorage<8, 32> mUnk71ca84;
    ::ll::UntypedStorage<8, 32> mUnkf1613e;
    ::ll::UntypedStorage<8, 32> mUnk1e28f9;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonImage& operator=(CommonImage const&);
    CommonImage(CommonImage const&);
    CommonImage();
};
