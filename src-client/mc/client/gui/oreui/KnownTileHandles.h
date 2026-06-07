#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IAtlasTile; }
// clang-format on

namespace OreUI {

class KnownTileHandles {
public:
    // KnownTileHandles inner types define
    using TileFactory = ::brstd::function_ref<::std::shared_ptr<::GeometryAtlas::IAtlasTile>()>;

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
    ::ll::TypedStorage<1, 1, uchar> mGCTimer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void garbageCollect();

    MCAPI ::gsl::not_null<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>
    getOrCreate(uint id, ::brstd::function_ref<::std::shared_ptr<::GeometryAtlas::IAtlasTile>()> createTile);
    // NOLINTEND
};

} // namespace OreUI
