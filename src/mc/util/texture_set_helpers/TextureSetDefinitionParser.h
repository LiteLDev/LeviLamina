#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/util/texture_set_helpers/TextureSetDefinitionLoader.h"

// auto generated forward declare list
// clang-format off
class ResourceLocationPair;
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace cg { class TextureSetDefinition; }
// clang-format on

namespace TextureSetHelpers {

class TextureSetDefinitionParser {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static bool _postParse(
        ::std::shared_ptr<::cg::TextureSetDefinition>                         textureSetDefinition,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const& colorPipeline
    );

    MCNAPI_C static bool _postValidation(::ResourceLocationPair const&, ::Json::Value const& root);

    MCNAPI_C static ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::cg::TextureSetDefinition>>
    buildTextureSetFileSchema_v1_16_100();

    MCNAPI_C static ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::cg::TextureSetDefinition>>
    buildTextureSetFileSchema_v1_21_30();

    MCNAPI_C static bool generateTextureSetDefinition(
        ::ResourceLocationPair const& resourceLocationPair,
        ::Json::Value const&          root,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::cg::TextureSetDefinition>> const&
                                                                              schema,
        ::TextureSetHelpers::TextureSetDefinitionLoader::ColorPipeline const& colorMode,
        ::gsl::not_null<::std::shared_ptr<::cg::TextureSetDefinition>>        out
    );
    // NOLINTEND
};

} // namespace TextureSetHelpers
