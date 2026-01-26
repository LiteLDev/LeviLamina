#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocationPair.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class TextureSetImageContainer; }
namespace cg { class TextureSetLayerDefinition; }
namespace mce { class Color; }
// clang-format on

namespace cg {

class TextureSetDefinition {
public:
    // TextureSetDefinition inner types define
    using TextureSetLayerInfoList = ::std::vector<::cg::TextureSetLayerDefinition>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::cg::TextureSetLayerDefinition>>   mLayerInfoList;
    ::ll::TypedStorage<1, 1, bool>                                              mIsMissingTexture;
    ::ll::TypedStorage<1, 1, bool>                                              mNeedsDecompression;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cg::TextureSetImageContainer>> mTextureSetImageData;
    ::ll::TypedStorage<8, 112, ::ResourceLocationPair>                          mResourceLocationPair;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::std::optional<::Bedrock::NonOwnerPointer<::cg::TextureSetLayerDefinition const>>
    _addLayer(::cg::TextureSetLayerType const& type, ::mce::Color const& color);

    MCAPI_C ::std::optional<::Bedrock::NonOwnerPointer<::cg::TextureSetLayerDefinition const>>
    _addLayer(::cg::TextureSetLayerType const& type, ::ResourceLocationPair const& resourceLocationPair);

    MCAPI_C ::Bedrock::NotNullNonOwnerPtr<::cg::TextureSetImageContainer> _getImageContainer();

    MCAPI_C void _removeLayerInfo(::cg::TextureSetLayerType const& type);

    MCAPI_C ::std::vector<::Bedrock::NotNullNonOwnerPtr<::cg::TextureSetLayerDefinition const>>
    getLayerInfoList() const;

    MCAPI_C uint64 getStorageSize(::cg::TextureSetLayerType t) const;

    MCAPI_C ::std::optional<::std::string> hasValidationError() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();
    // NOLINTEND
};

} // namespace cg
