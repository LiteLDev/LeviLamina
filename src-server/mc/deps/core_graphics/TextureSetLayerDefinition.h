#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ColorChannel;
class ResourceLocationPair;
namespace mce { class Color; }
// clang-format on

namespace cg {

class TextureSetLayerDefinition : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnkd9360c;
    ::ll::UntypedStorage<1, 1>   mUnkf64bec;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetLayerDefinition& operator=(TextureSetLayerDefinition const&);
    TextureSetLayerDefinition(TextureSetLayerDefinition const&);
    TextureSetLayerDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextureSetLayerDefinition() /*override*/ = default;
    // NOLINTEND
};

} // namespace cg
