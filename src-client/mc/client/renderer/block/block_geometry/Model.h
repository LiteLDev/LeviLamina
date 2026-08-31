#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"

// auto generated forward declare list
// clang-format off
namespace BlockGeometry { struct Element; }
// clang-format on

namespace BlockGeometry {

struct Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::GameVersion>                                      mVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mParent;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockGeometry::Element>>            mElements;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mTextureMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                       mTextureList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                       mTextureStack;
    // NOLINTEND
};

} // namespace BlockGeometry
