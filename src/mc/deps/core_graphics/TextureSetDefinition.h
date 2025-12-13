#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocationPair;
namespace cg { class TextureSetImageContainer; }
namespace cg { class TextureSetLayerDefinition; }
namespace mce { class Color; }
// clang-format on

namespace cg {

class TextureSetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk117ac6;
    ::ll::UntypedStorage<1, 1>   mUnkcd60ba;
    ::ll::UntypedStorage<1, 1>   mUnkaf0821;
    ::ll::UntypedStorage<8, 8>   mUnk108902;
    ::ll::UntypedStorage<8, 112> mUnk3fef51;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetDefinition& operator=(TextureSetDefinition const&);
    TextureSetDefinition(TextureSetDefinition const&);
    TextureSetDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::optional<::Bedrock::NonOwnerPointer<::cg::TextureSetLayerDefinition const>>
    _addLayer(::cg::TextureSetLayerType const& type, ::mce::Color const& color);

    MCNAPI_C ::std::optional<::Bedrock::NonOwnerPointer<::cg::TextureSetLayerDefinition const>>
    _addLayer(::cg::TextureSetLayerType const& type, ::ResourceLocationPair const& resourceLocationPair);

    MCNAPI_C ::Bedrock::NotNullNonOwnerPtr<::cg::TextureSetImageContainer> _getImageContainer();

    MCNAPI_C ::Bedrock::NonOwnerPointer<::cg::TextureSetLayerDefinition>
    _getLayerRef(::cg::TextureSetLayerType const& t);

    MCNAPI_C void _removeLayerInfo(::cg::TextureSetLayerType const& type);

    MCNAPI_C ::std::vector<::Bedrock::NotNullNonOwnerPtr<::cg::TextureSetLayerDefinition const>>
    getLayerInfoList() const;

    MCNAPI_C uint64 getStorageSize(::cg::TextureSetLayerType t) const;

    MCNAPI_C ::std::optional<::std::string> hasValidationError() const;
    // NOLINTEND
};

} // namespace cg
