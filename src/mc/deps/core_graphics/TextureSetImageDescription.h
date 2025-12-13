#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ColorChannel;
namespace cg { class TextureSetDefinition; }
namespace cg { struct ImageDescription; }
namespace mce { class Color; }
// clang-format on

namespace cg {

class TextureSetImageDescription {
public:
    // TextureSetImageDescription inner types declare
    // clang-format off
    class LayerInfoVar;
    // clang-format on

    // TextureSetImageDescription inner types define
    class LayerInfoVar {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkf70e18;
        ::ll::UntypedStorage<4, 24> mUnk1eef15;
        // NOLINTEND

    public:
        // prevent constructor by default
        LayerInfoVar& operator=(LayerInfoVar const&);
        LayerInfoVar(LayerInfoVar const&);
        LayerInfoVar();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcecc6d;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetImageDescription& operator=(TextureSetImageDescription const&);
    TextureSetImageDescription(TextureSetImageDescription const&);
    TextureSetImageDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit TextureSetImageDescription(::cg::ImageDescription const& imageDesc);

    MCNAPI_C explicit TextureSetImageDescription(::gsl::not_null<::cg::TextureSetDefinition const*> textureSet);

    MCNAPI_C ::cg::TextureSetImageDescription& operator=(::cg::TextureSetImageDescription&&);

    MCNAPI_C ~TextureSetImageDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::cg::ImageDescription const& imageDesc);

    MCNAPI_C void* $ctor(::gsl::not_null<::cg::TextureSetDefinition const*> textureSet);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace cg
