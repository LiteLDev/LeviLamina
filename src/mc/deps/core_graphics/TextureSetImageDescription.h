#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/ColorChannel.h"
#include "mc/deps/core_graphics/ImageDescription.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
namespace cg { class TextureSetDefinition; }
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
        // LayerInfoVar inner types define
        using Var = ::std::variant<::cg::ImageDescription, ::ColorChannel, ::mce::Color>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>                                             mLayerType;
        ::ll::TypedStorage<4, 24, ::std::variant<::cg::ImageDescription, ::ColorChannel, ::mce::Color>> mData;
        // NOLINTEND
    };

    using LayerInfoVarList = ::std::vector<::cg::TextureSetImageDescription::LayerInfoVar>;

    using LayerInfoVarListIterator = ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::cg::TextureSetImageDescription::LayerInfoVar>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::cg::TextureSetImageDescription::LayerInfoVar>> mLayerInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetImageDescription& operator=(TextureSetImageDescription const&);
    TextureSetImageDescription(TextureSetImageDescription const&);
    TextureSetImageDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C explicit TextureSetImageDescription(::cg::ImageDescription const& imageDesc);

    MCAPI_C explicit TextureSetImageDescription(::gsl::not_null<::cg::TextureSetDefinition const*> textureSet);

    MCAPI_C ::cg::TextureSetImageDescription& operator=(::cg::TextureSetImageDescription&&);

    MCAPI_C ~TextureSetImageDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::cg::ImageDescription const& imageDesc);

    MCAPI_C void* $ctor(::gsl::not_null<::cg::TextureSetDefinition const*> textureSet);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace cg
