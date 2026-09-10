#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IGeometryAtlasCaptureService.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/future.h"
#include "mc/platform/brstd/once_flag.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class GeometryAtlasCapture; }
namespace GeometryAtlas { class IAtlasTile; }
namespace dragon::atlas { class IAtlasHandle; }
namespace dragon::atlas { class IAtlasRenderOperations; }
// clang-format on

namespace GeometryAtlas {

class CaptureImpl : public ::GeometryAtlas::IGeometryAtlasCaptureService {
public:
    // CaptureImpl inner types declare
    // clang-format off
    struct PendingAtlas;
    struct PendingTile;
    struct PendingRequest;
    // clang-format on

    // CaptureImpl inner types define
    struct PendingAtlas {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::dragon::atlas::IAtlasHandle>>> mAtlas;
        ::ll::TypedStorage<8, 16, ::brstd::future<::cg::ImageBuffer>>                                mFuture;
        ::ll::TypedStorage<8, 56, ::std::optional<::cg::ImageBuffer>>                                mBuffer;
        // NOLINTEND
    };

    struct PendingTile {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>> mTile;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::CaptureImpl::PendingAtlas>>   mAtlas;
        // NOLINTEND
    };

    struct PendingRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::Bedrock::Threading::AsyncPromise<::GeometryAtlas::GeometryAtlasCapture>> mPromise;
        ::ll::TypedStorage<8, 24, ::std::vector<::GeometryAtlas::CaptureImpl::PendingTile>>                  mTiles;
        ::ll::TypedStorage<
            8,
            48,
            ::brstd::flat_map<
                uint64,
                ::std::shared_ptr<::GeometryAtlas::CaptureImpl::PendingAtlas>,
                ::std::less<uint64>,
                ::std::vector<uint64>,
                ::std::vector<::std::shared_ptr<::GeometryAtlas::CaptureImpl::PendingAtlas>>>>
                                                                      mAtlases;
        ::ll::TypedStorage<8, 16, ::brstd::future<::cg::ImageBuffer>> mDragonFuture;
        ::ll::TypedStorage<4, 4, ::brstd::once_flag>                  mAssignAtlases;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::GeometryAtlas::CaptureImpl::PendingRequest>>> mRequests;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void processCaptureRequests(::dragon::atlas::IAtlasRenderOperations& renderOps) /*override*/;

    virtual ::Bedrock::Threading::Async<::GeometryAtlas::GeometryAtlasCapture>
    requestCapture(::std::vector<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>&& tiles) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $processCaptureRequests(::dragon::atlas::IAtlasRenderOperations& renderOps);

    MCAPI ::Bedrock::Threading::Async<::GeometryAtlas::GeometryAtlasCapture>
    $requestCapture(::std::vector<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>&& tiles);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace GeometryAtlas
