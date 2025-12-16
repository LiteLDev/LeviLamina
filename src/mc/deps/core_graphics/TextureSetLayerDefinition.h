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

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~TextureSetLayerDefinition() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~TextureSetLayerDefinition() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::std::optional<::std::string> hasValidationError() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
