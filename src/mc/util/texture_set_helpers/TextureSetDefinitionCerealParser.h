#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
namespace SharedTypes { struct Color255RGB; }
namespace SharedTypes { struct Color255RGBA; }
// clang-format on

namespace TextureSetHelpers {

class TextureSetDefinitionCerealParser : public ::Bedrock::EnableNonOwnerReferences {
public:
    // TextureSetDefinitionCerealParser inner types declare
    // clang-format off
    struct TextureSetParametersV0;
    struct TextureSetTraits;
    // clang-format on

    // TextureSetDefinitionCerealParser inner types define
    struct TextureSetParametersV0 {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnk877043;
        ::ll::UntypedStorage<8, 40> mUnk606734;
        ::ll::UntypedStorage<8, 40> mUnkc7c863;
        ::ll::UntypedStorage<8, 48> mUnk742ded;
        ::ll::UntypedStorage<8, 48> mUnk5522b8;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextureSetParametersV0& operator=(TextureSetParametersV0 const&);
        TextureSetParametersV0(TextureSetParametersV0 const&);
        TextureSetParametersV0();
    };

    struct TextureSetTraits {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 272> mUnk37e669;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetDefinitionCerealParser& operator=(TextureSetDefinitionCerealParser const&);
    TextureSetDefinitionCerealParser(TextureSetDefinitionCerealParser const&);
    TextureSetDefinitionCerealParser();
};

} // namespace TextureSetHelpers
