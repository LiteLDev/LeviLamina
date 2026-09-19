#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Beta { struct ShiftTextureEntryData; }
// clang-format on

namespace SharedTypes::Beta {

struct ShiftTexturesDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                         mFormatVersion;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::SharedTypes::Beta::ShiftTextureEntryData>> mShiftTextures;
    // NOLINTEND
};

} // namespace SharedTypes::Beta
