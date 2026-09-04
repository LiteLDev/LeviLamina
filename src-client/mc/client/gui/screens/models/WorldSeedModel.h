#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace OreUI { class IResourceAllowList; }
// clang-format on

class WorldSeedModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                     mProductId;
    ::ll::TypedStorage<8, 32, ::std::string>                     mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                     mSeed;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>            mOreUIImagePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mImagePath;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSeedModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldSeedModel(::std::string const& productId, ::std::string const& title, ::std::string const& seed);

    MCAPI void setImagePath(
        ::Core::Path const&                                               fullpath,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& productId, ::std::string const& title, ::std::string const& seed);
    // NOLINTEND
};
