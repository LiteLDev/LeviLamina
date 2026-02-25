#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/ImageDimensions.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct ImageData;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

struct MessageImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              mId;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                     mAnimatedUrl;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                     mNonAnimatedUrl;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsLoaded;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<4, 12, ::std::optional<::OreUI::ImageDimensions>>                  mImageSize;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageImage& operator=(MessageImage const&);
    MessageImage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessageImage(::OreUI::MessageImage&&);

    MCAPI MessageImage(::OreUI::MessageImage const&);

    MCAPI MessageImage(
        ::ImageData const&                                         image,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI MessageImage(
        ::ImageData const&                                         image,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>
    );

    MCAPI ~MessageImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::MessageImage&&);

    MCAPI void* $ctor(::OreUI::MessageImage const&);

    MCAPI void*
    $ctor(::ImageData const& image, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList);

    MCAPI void* $ctor(
        ::ImageData const&                                         image,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
