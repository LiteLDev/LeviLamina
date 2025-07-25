#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockPos;
class BlockSource;
class HashedString;
class Vec3;
struct TextureUVCoordinateSet;
namespace BlockTessellationFallbackUtils { struct TessellationConfigInfo; }
namespace Json { class Value; }
// clang-format on

class BlockGraphics {
public:
    // BlockGraphics inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockGraphics inner types define
    struct ConstructorToken {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6b9406;
    ::ll::UntypedStorage<4, 4>  mUnkf361c7;
    ::ll::UntypedStorage<4, 4>  mUnkb40d00;
    ::ll::UntypedStorage<1, 1>  mUnk56f9b4;
    ::ll::UntypedStorage<1, 1>  mUnk3736cf;
    ::ll::UntypedStorage<1, 1>  mUnkb0552c;
    ::ll::UntypedStorage<1, 1>  mUnk341d8f;
    ::ll::UntypedStorage<8, 32> mUnk232607;
    ::ll::UntypedStorage<4, 24> mUnkbcd0bf;
    ::ll::UntypedStorage<8, 24> mUnkbe394e;
    ::ll::UntypedStorage<8, 8>  mUnk24c02c;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockGraphics& operator=(BlockGraphics const&);
    BlockGraphics(BlockGraphics const&);
    BlockGraphics();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockGraphics() = default;

    // vIndex: 1
    virtual ::BlockRenderLayer getRenderLayer(::BlockSource&, ::BlockPos const&) const;

    // vIndex: 3
    virtual int getColor(int) const;

    // vIndex: 2
    virtual int getColor(::BlockSource&, ::BlockPos const&) const;

    // vIndex: 4
    virtual bool isSeasonTinted(::BlockSource&, ::BlockPos const&) const;

    // vIndex: 5
    virtual void onGraphicsModeChanged(bool, bool);

    // vIndex: 6
    virtual int getExtraRenderLayers();

    // vIndex: 7
    virtual ::TextureUVCoordinateSet const& getCarriedTexture(uint64, int) const;

    // vIndex: 9
    virtual void setVisualShape(::AABB const&);

    // vIndex: 8
    virtual void setVisualShape(::Vec3 const&, ::Vec3 const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
