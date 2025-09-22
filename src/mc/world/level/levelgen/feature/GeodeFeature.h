#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class GeodeFeature : public ::IFeature {
public:
    // GeodeFeature inner types define
    enum class BlockType : uchar {
        StandardSimple = 0,
        Standard       = 1,
        ExtraSimple    = 2,
        Extra          = 3,
        Count          = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 184> mUnk8f2b7a;
    ::ll::UntypedStorage<8, 184> mUnk6b31c8;
    ::ll::UntypedStorage<8, 184> mUnk19a2e4;
    ::ll::UntypedStorage<8, 184> mUnk799316;
    ::ll::UntypedStorage<8, 184> mUnk741344;
    ::ll::UntypedStorage<8, 24>  mUnkf09792;
    ::ll::UntypedStorage<4, 4>   mUnkc637e1;
    ::ll::UntypedStorage<4, 4>   mUnk8ab50d;
    ::ll::UntypedStorage<4, 4>   mUnk6cb927;
    ::ll::UntypedStorage<4, 4>   mUnkf315a5;
    ::ll::UntypedStorage<4, 4>   mUnka8fe44;
    ::ll::UntypedStorage<4, 4>   mUnkd4c3ac;
    ::ll::UntypedStorage<4, 4>   mUnk6e803f;
    ::ll::UntypedStorage<4, 4>   mUnkc0dc8d;
    ::ll::UntypedStorage<4, 4>   mUnkbe122e;
    ::ll::UntypedStorage<4, 4>   mUnk49061d;
    ::ll::UntypedStorage<4, 4>   mUnk71b372;
    ::ll::UntypedStorage<4, 4>   mUnk688d1e;
    ::ll::UntypedStorage<4, 4>   mUnk54d195;
    ::ll::UntypedStorage<1, 1>   mUnkb40fdf;
    ::ll::UntypedStorage<4, 4>   mUnk4f3ef1;
    // NOLINTEND

public:
    // prevent constructor by default
    GeodeFeature& operator=(GeodeFeature const&);
    GeodeFeature(GeodeFeature const&);
    GeodeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    // vIndex: 0
    virtual ~GeodeFeature() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
