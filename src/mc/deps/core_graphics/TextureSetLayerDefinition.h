#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/ColorChannel.h"
#include "mc/deps/core/resource/ResourceLocationPair.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core_graphics/TextureSetLayerType.h"

namespace cg {

class TextureSetLayerDefinition : public ::Bedrock::EnableNonOwnerReferences {
public:
    // TextureSetLayerDefinition inner types define
    using TextureSetLayerInfoVariant = ::std::variant<::ResourceLocationPair, ::ColorChannel, ::mce::Color>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::std::variant<::ResourceLocationPair, ::ColorChannel, ::mce::Color>> mData;
    ::ll::TypedStorage<1, 1, ::cg::TextureSetLayerType>                                              mLayerType;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TextureSetLayerDefinition();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI TextureSetLayerDefinition(
        ::cg::TextureSetLayerType const&                                            type,
        ::std::variant<::ResourceLocationPair, ::ColorChannel, ::mce::Color> const& var
    );

    MCAPI void _setValue(::std::variant<::ResourceLocationPair, ::ColorChannel, ::mce::Color> const& var);

    MCFOLD ::cg::TextureSetLayerType const& getLayerType() const;

    MCAPI ::std::optional<::std::string> hasValidationError() const;

    MCAPI bool isColor() const;

    MCAPI bool isColorChannel() const;

    MCAPI bool isResourceLocation() const;

    MCAPI bool isUniform() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::cg::TextureSetLayerType const&                                            type,
        ::std::variant<::ResourceLocationPair, ::ColorChannel, ::mce::Color> const& var
    );
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
