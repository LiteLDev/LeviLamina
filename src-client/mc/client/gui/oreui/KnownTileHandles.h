#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/IGeometryAtlasKnownTilesReader.h"
#include "mc/client/gui/oreui/IGeometryAtlasKnownTilesWriter.h"
#include "mc/deps/core/math/Random.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

namespace OreUI {

class KnownTileHandles : public ::OreUI::IGeometryAtlasKnownTilesWriter,
                         public ::OreUI::IGeometryAtlasKnownTilesReader {
public:
    // KnownTileHandles inner types define
    using Map = ::brstd::flat_map<
        uint,
        ::std::weak_ptr<::GeometryAtlas::IAtlasTile>,
        ::std::less<uint>,
        ::std::vector<uint>,
        ::std::vector<::std::weak_ptr<::GeometryAtlas::IAtlasTile>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        56,
        ::Bedrock::Threading::SharedLockbox<
            ::brstd::flat_map<
                uint,
                ::std::weak_ptr<::GeometryAtlas::IAtlasTile>,
                ::std::less<uint>,
                ::std::vector<uint>,
                ::std::vector<::std::weak_ptr<::GeometryAtlas::IAtlasTile>>>,
            ::std::shared_mutex>>
                                                mTiles;
    ::ll::TypedStorage<1, 1, uchar>             mGCTimer;
    ::ll::TypedStorage<8, 2536, ::Core::Random> mRandom;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<
            ::std::shared_ptr<::GeometryAtlas::IAtlasTile>(::GeometryAtlas::TileDefinition const&)>>
        mFactory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::IAtlasTile> tryGet(uint) /*override*/;

    virtual ::gsl::not_null<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>
    getOrCreate(::GeometryAtlas::TileDefinition const&) /*override*/;

    virtual void garbageCollect() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
