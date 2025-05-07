#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class CompressedImageBuffer; }
namespace cg { class TextureSetLayerImageMipList; }
// clang-format on

namespace cg {

class TextureSetImageContainer : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1331b4;
    ::ll::UntypedStorage<8, 24> mUnkfe1364;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetImageContainer& operator=(TextureSetImageContainer const&);
    TextureSetImageContainer(TextureSetImageContainer const&);
    TextureSetImageContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextureSetImageContainer() /*override*/ = default;
    // NOLINTEND
};

} // namespace cg
