#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
struct TextureUVCoordinateSet;
// clang-format on

namespace ClientBlockPipeline {

class Material : public ::Bedrock::EnableNonOwnerReferences {
public:
    // Material inner types declare
    // clang-format off
    struct PackedBools;
    // clang-format on

    // Material inner types define
    struct PackedBools {
    public:
        // member variables
        // NOLINTBEGIN
        bool mUnkfb735a : 1;
        bool mUnkfee5e9 : 1;
        bool mUnk33af0e : 1;
        bool mUnk443042 : 1;
        bool mUnk450720 : 1;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackedBools& operator=(PackedBools const&);
        PackedBools(PackedBools const&);
        PackedBools();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf65d90;
    ::ll::UntypedStorage<4, 4>  mUnk98f450;
    ::ll::UntypedStorage<1, 1>  mUnk1c7c71;
    ::ll::UntypedStorage<1, 1>  mUnkf68e6c;
    ::ll::UntypedStorage<1, 1>  mUnk96c7ef;
    // NOLINTEND

public:
    // prevent constructor by default
    Material& operator=(Material const&);
    Material(Material const&);
    Material();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~Material() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~Material() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C Material(::std::vector<::TextureUVCoordinateSet> const& uvSets, ::BlockRenderLayer terrainLayer);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::vector<::TextureUVCoordinateSet> const& EMPTY_TEXTURES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::vector<::TextureUVCoordinateSet> const& uvSets, ::BlockRenderLayer terrainLayer);
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

} // namespace ClientBlockPipeline
