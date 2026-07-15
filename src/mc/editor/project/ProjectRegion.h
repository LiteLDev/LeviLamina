#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BoundingBox;
class Dimension;
struct Bounds;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor { struct ProjectRegionConfig; }
namespace mce { class UUID; }
// clang-format on

namespace Editor {

class ProjectRegion : public ::EnableGetWeakRef<::Editor::ProjectRegion> {
public:
    // ProjectRegion inner types declare
    // clang-format off
    struct AvailabilityRequest;
    struct BlockOperationAreaRequest;
    // clang-format on

    // ProjectRegion inner types define
    struct AvailabilityRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk2bc51b;
        ::ll::UntypedStorage<8, 8>  mUnk74d7f6;
        ::ll::UntypedStorage<4, 52> mUnk3ecc6b;
        ::ll::UntypedStorage<8, 64> mUnkf0bcf5;
        // NOLINTEND

    public:
        // prevent constructor by default
        AvailabilityRequest& operator=(AvailabilityRequest const&);
        AvailabilityRequest(AvailabilityRequest const&);
        AvailabilityRequest();
    };

    struct BlockOperationAreaRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk50f21a;
        ::ll::UntypedStorage<8, 8>  mUnkc56775;
        ::ll::UntypedStorage<8, 88> mUnk63a12f;
        ::ll::UntypedStorage<8, 64> mUnka710be;
        ::ll::UntypedStorage<8, 24> mUnk2429f3;
        ::ll::UntypedStorage<1, 1>  mUnk17d311;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockOperationAreaRequest& operator=(BlockOperationAreaRequest const&);
        BlockOperationAreaRequest(BlockOperationAreaRequest const&);
        BlockOperationAreaRequest();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3aca2e;
    ::ll::UntypedStorage<1, 1>  mUnkefe58d;
    ::ll::UntypedStorage<8, 16> mUnkbab940;
    ::ll::UntypedStorage<8, 8>  mUnke68e15;
    ::ll::UntypedStorage<8, 8>  mUnk3ed219;
    ::ll::UntypedStorage<8, 16> mUnk71bc73;
    ::ll::UntypedStorage<8, 8>  mUnkf091ed;
    ::ll::UntypedStorage<8, 16> mUnkc14a31;
    ::ll::UntypedStorage<4, 48> mUnk9bf443;
    ::ll::UntypedStorage<8, 72> mUnk92e626;
    ::ll::UntypedStorage<8, 24> mUnk1dc8dd;
    ::ll::UntypedStorage<8, 24> mUnk85c920;
    ::ll::UntypedStorage<8, 48> mUnka10fb0;
    ::ll::UntypedStorage<4, 52> mUnk8d2203;
    ::ll::UntypedStorage<4, 16> mUnk569f22;
    ::ll::UntypedStorage<8, 16> mUnk8cd97e;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectRegion& operator=(ProjectRegion const&);
    ProjectRegion(ProjectRegion const&);
    ProjectRegion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ProjectRegion(::Dimension& dimension, ::Editor::ProjectRegionConfig const& config, ::std::optional<uint64> ownerId);

    MCNAPI void _destroy();

    MCNAPI void _discardRequests();

    MCNAPI bool _isBoundsAvailable(::Bounds const& bounds) const;

    MCNAPI void _processAvailability();

    MCNAPI void _processBlockOperationAreas();

    MCNAPI void _processBounds();

    MCNAPI bool isAreaAvailable(::BoundingBox const& area);

    MCNAPI bool isLocationAvailable(::BlockPos const& loc) const;

    MCNAPI ::Scripting::Result_deprecated<::mce::UUID> requestAvailabilityCheck(
        ::std::function<void(::Scripting::Result_deprecated<void>)> callback,
        ::std::optional<::Bounds>                                   bounds
    );

    MCNAPI ::Scripting::Result_deprecated<::mce::UUID> requestBlockOperationArea(
        ::Editor::RelativeVolumeListBlockVolume volume,
        ::std::function<
            void(::Editor::RelativeVolumeListBlockVolume const&, ::std::optional<::Scripting::Result_deprecated<void>>)>
            callback
    );

    MCNAPI ::Scripting::Result_deprecated<void> requestBoundsUpdate(::Bounds const& bounds);

    MCNAPI ::Scripting::Result_deprecated<void> requestExpandToInclude(::Bounds const& bounds);

    MCNAPI ::Scripting::Result_deprecated<void> requestMove(::BlockPos const& center);

    MCNAPI ::Scripting::Result_deprecated<void> setBlock(::BlockPos const& pos, ::Block const& block);

    MCNAPI ::Scripting::Result_deprecated<void> tryDimensionTransfer(::Dimension& newDimension);

    MCNAPI ~ProjectRegion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Dimension& dimension, ::Editor::ProjectRegionConfig const& config, ::std::optional<uint64> ownerId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
