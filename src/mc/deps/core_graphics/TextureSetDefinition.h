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
#ifdef LL_PLAT_C
    MCAPI TextureSetDefinition();

    MCAPI ::std::optional<::Bedrock::NonOwnerPointer<::cg::TextureSetLayerDefinition const>>
    _addLayer(::cg::TextureSetLayerType const& type, ::mce::Color const& color);

    MCAPI ::std::optional<::Bedrock::NonOwnerPointer<::cg::TextureSetLayerDefinition const>>
    _addLayer(::cg::TextureSetLayerType const& type, ::ResourceLocationPair const& resourceLocationPair);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::cg::TextureSetImageContainer> _getImageContainer();

    MCAPI void _setResourceLocationPair(::ResourceLocationPair const& loc);

    MCAPI ::std::optional<::std::string> hasValidationError() const;

    MCAPI ~TextureSetDefinition();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace cg
