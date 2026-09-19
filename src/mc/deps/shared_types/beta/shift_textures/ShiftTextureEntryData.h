#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Beta { struct ShiftPhaseData; }
// clang-format on

namespace SharedTypes::Beta {

struct ShiftTextureEntryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                  mCollection;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::SharedTypes::Beta::ShiftPhaseData>> mTextures;
    // NOLINTEND
};

} // namespace SharedTypes::Beta
