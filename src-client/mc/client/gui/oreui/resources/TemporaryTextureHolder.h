#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
namespace mce { class TexturePtr; }
// clang-format on

namespace OreUI {

class TemporaryTextureHolder {
public:
    // TemporaryTextureHolder inner types define
    using ImageId = uint64;

    using TextureResource = ::std::variant<::cg::ImageBuffer, ::mce::TexturePtr>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
    ::ll::TypedStorage<8, 8, uint64>                       mId;
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::std::variant<::cg::ImageBuffer, ::mce::TexturePtr>>>
        mTextureResources;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::variant<::cg::ImageBuffer, ::mce::TexturePtr> consumeImageBuffer(uint64 id);

    MCAPI uint64 holdTexturePtr(::mce::TexturePtr texture);

    MCAPI ~TemporaryTextureHolder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
