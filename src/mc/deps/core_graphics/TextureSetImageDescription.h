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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        LayerInfoVar(LayerInfoVar const&);
        LayerInfoVar();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD ::cg::TextureSetLayerType const& getLayerType() const;

        MCAPI bool isColor() const;

        MCAPI bool isColorChannel() const;

        MCAPI bool isImage() const;

        MCAPI ::cg::TextureSetImageDescription::LayerInfoVar&
        operator=(::cg::TextureSetImageDescription::LayerInfoVar const& var);
#endif
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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI TextureSetImageDescription();

    MCAPI explicit TextureSetImageDescription(::cg::ImageDescription const& imageDesc);

    MCAPI explicit TextureSetImageDescription(::gsl::not_null<::cg::TextureSetDefinition const*> textureSet);

    MCFOLD ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::cg::TextureSetImageDescription::LayerInfoVar>>> const
    begin() const;

    MCFOLD ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::cg::TextureSetImageDescription::LayerInfoVar>>> const
    end() const;

    MCFOLD uint64 const getLayerCount() const;

    MCAPI ::cg::TextureSetImageDescription::LayerInfoVar const*
    tryGetLayerInfo(::cg::TextureSetLayerType const& layerType) const;

    MCAPI ~TextureSetImageDescription();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor();

    MCAPI void* $ctor(::cg::ImageDescription const& imageDesc);

    MCAPI void* $ctor(::gsl::not_null<::cg::TextureSetDefinition const*> textureSet);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};

} // namespace cg
