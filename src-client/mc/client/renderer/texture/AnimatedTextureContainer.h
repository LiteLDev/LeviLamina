#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/player/AnimatedTextureDefinition.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
class AnimatedTextureTintCollection;
namespace cg { struct ImageBuffer; }
namespace mce { class TextureContainer; }
// clang-format on

class AnimatedTextureContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::AnimatedTextureDefinition>                    mTextureDefinition;
    ::ll::TypedStorage<4, 4, uint>                                            mMaxWidth;
    ::ll::TypedStorage<4, 4, uint>                                            mMaxHeight;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimatedTextureTintCollection>> mTextureContainerCollection;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::vector<::std::pair<
            ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>,
            ::std::unique_ptr<::mce::TextureContainer>>>>>
                                                                   mUniqueTextureSets;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cg::ImageBuffer>> mAnimatedImageBuffer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AnimatedTextureContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
