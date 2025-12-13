#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ColorChannel;
class ResourceLocationPair;
namespace mce { class Color; }
// clang-format on

namespace cg {

class TextureSetLayerDefinition : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnkd9360c;
    ::ll::UntypedStorage<1, 1>   mUnkf64bec;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureSetLayerDefinition& operator=(TextureSetLayerDefinition const&);
    TextureSetLayerDefinition(TextureSetLayerDefinition const&);
    TextureSetLayerDefinition();

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
    MCNAPI_C ::std::optional<::std::string> hasValidationError() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
