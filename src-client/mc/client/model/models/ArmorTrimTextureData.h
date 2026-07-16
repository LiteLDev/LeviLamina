#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ArmorTrimTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           mIsDyeable;
    ::ll::TypedStorage<1, 1, bool>           mIsDarker;
    ::ll::TypedStorage<1, 1, bool>           mIsLegging;
    ::ll::TypedStorage<8, 32, ::std::string> mMaterialName;
    ::ll::TypedStorage<8, 32, ::std::string> mPatternName;
    ::ll::TypedStorage<8, 32, ::std::string> mArmorTexturePath;
    ::ll::TypedStorage<8, 32, ::std::string> mCustomPatternPath;
    ::ll::TypedStorage<8, 32, ::std::string> mCustomMaterialPalettePath;
    // NOLINTEND
};
