#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_file_attributes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3c9f12;
    ::ll::UntypedStorage<1, 1> mUnk77dfa1;
    ::ll::UntypedStorage<1, 1> mUnk62c99c;
    ::ll::UntypedStorage<1, 1> mUnkc74393;
    ::ll::UntypedStorage<1, 1> mUnk31da5f;
    ::ll::UntypedStorage<4, 4> mUnke0efe0;
    ::ll::UntypedStorage<2, 2> mUnk443b9f;
    ::ll::UntypedStorage<2, 2> mUnkd6e911;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_file_attributes& operator=(zip_file_attributes const&);
    zip_file_attributes(zip_file_attributes const&);
    zip_file_attributes();

};
