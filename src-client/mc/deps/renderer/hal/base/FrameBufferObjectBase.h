#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class FrameBufferAttachment; }
namespace mce { class FrameBufferAttachmentDescription; }
namespace mce { class RenderContext; }
namespace mce { class Texture; }
// clang-format on

namespace mce {

class FrameBufferObjectBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkd32709;
    ::ll::UntypedStorage<8, 24> mUnk79f716;
    ::ll::UntypedStorage<8, 8>  mUnk7c5f1f;
    ::ll::UntypedStorage<8, 8>  mUnkb2d486;
    ::ll::UntypedStorage<8, 32> mUnkbcedd5;
    ::ll::UntypedStorage<4, 4>  mUnk57d773;
    ::ll::UntypedStorage<1, 1>  mUnk196f8b;
    ::ll::UntypedStorage<1, 1>  mUnk82aeab;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameBufferObjectBase& operator=(FrameBufferObjectBase const&);
    FrameBufferObjectBase(FrameBufferObjectBase const&);
    FrameBufferObjectBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FrameBufferObjectBase(::mce::FrameBufferObjectBase&& frameBufferObjectBase);

    MCNAPI ::mce::FrameBufferAttachment& createFrameBufferAttachmentAndTexture(
        ::mce::RenderContext&                          renderContext,
        ::mce::FrameBufferAttachmentDescription const& frameBufferAttachmentDescription,
        ::mce::Texture&                                texture
    );

    MCNAPI ::mce::FrameBufferAttachment& createFrameBufferAttachmentWithTexture(
        ::mce::RenderContext&                          renderContext,
        ::mce::FrameBufferAttachmentDescription const& frameBufferAttachmentDescription,
        ::mce::Texture const&                          texture,
        uchar                                          textureLevel,
        ushort                                         textureLayer,
        uint                                           textureArraySize
    );

    MCNAPI void destroyFrameBuffer();

    MCNAPI void setFrameBufferObjectName(::std::string_view frameBufferObjectName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::FrameBufferObjectBase&& frameBufferObjectBase);
    // NOLINTEND
};

} // namespace mce
