#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextureAtlasItemTextureSetTranslation {
public:
    // TextureAtlasItemTextureSetTranslation inner types declare
    // clang-format off
    struct LayerType;
    struct SingleChannelInfo;
    struct MERSInfo;
    struct NormalInfo;
    struct TranslationScale;
    struct UniformFloat;
    struct UniformVec3;
    struct UniformVec4;
    struct Translation;
    struct ColorUniform;
    struct NormalTranslation;
    struct MERSTranslation;
    struct MERSUniform;
    struct Uniform;
    struct SingleChannelTranslation;
    // clang-format on

    // TextureAtlasItemTextureSetTranslation inner types define
    enum class Channel : uchar {};

    struct LayerType {};

    struct SingleChannelInfo {};

    struct MERSInfo {};

    struct NormalInfo {};

    struct TranslationScale {};

    struct UniformFloat {};

    struct UniformVec3 {};

    struct UniformVec4 {};

    struct Translation {};

    struct ColorUniform {};

    struct NormalTranslation {};

    struct MERSTranslation {};

    struct MERSUniform {};

    struct Uniform {};

    struct SingleChannelTranslation {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk304c6e;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureAtlasItemTextureSetTranslation& operator=(TextureAtlasItemTextureSetTranslation const&);
    TextureAtlasItemTextureSetTranslation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureAtlasItemTextureSetTranslation(::TextureAtlasItemTextureSetTranslation const&);

    MCNAPI ~TextureAtlasItemTextureSetTranslation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TextureAtlasItemTextureSetTranslation const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
