#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"

// auto generated forward declare list
// clang-format off
namespace BlockGeometry { struct Element; }
namespace BlockGeometry { struct ElementBox; }
namespace Json { class Value; }
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void LoadModel(::Json::Value const& root);

    MCAPI void _loadBoxes(::Json::Value const& boxes, ::BlockGeometry::Element& curElement);

    MCAPI void _loadFaces(::Json::Value const& faces, ::BlockGeometry::ElementBox& curBox);

    MCAPI ~Model();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockGeometry
