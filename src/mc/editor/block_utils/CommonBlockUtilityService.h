#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ContiguousSelectionType.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/CommonBlockUtilityServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/legacy/facing/Name.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockSource;
class BlockVolumeBase;
class BoundingBox;
class ChunkPos;
class CompoundBlockVolume;
class Dimension;
class Vec3;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::BlockMask { class BlockMaskList; }
// clang-format on

namespace Editor::BlockUtils {

class CommonBlockUtilityService : public ::Editor::Services::IEditorService,
                                  public ::Editor::BlockUtils::CommonBlockUtilityServiceProvider,
                                  public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9a172d;
    ::ll::UntypedStorage<8, 8> mUnk3de541;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonBlockUtilityService& operator=(CommonBlockUtilityService const&);
    CommonBlockUtilityService(CommonBlockUtilityService const&);
    CommonBlockUtilityService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommonBlockUtilityService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::std::set<::ChunkPos> getChunksFromAABB(::AABB const& aabb) const /*override*/;

    // vIndex: 2
    virtual bool isChunkLoaded(::ChunkPos const& pos) const /*override*/;

    // vIndex: 3
    virtual bool isChunkFullyLoaded(::ChunkPos const& pos) const /*override*/;

    // vIndex: 4
    virtual bool areChunksLoaded(::std::set<::ChunkPos> const& chunks) const /*override*/;

    // vIndex: 5
    virtual bool isAreaLoaded(::AABB const& aabb) const /*override*/;

    // vIndex: 6
    virtual ::Editor::RelativeVolumeListBlockVolume trimVolumeToFitContents(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const inVolume,
        bool                                      retainMarqueeAfterTrimming,
        bool                                      ignoreLiquid,
        bool                                      ignoreNoCollision,
        ::Editor::BlockMask::BlockMaskList const& blockMask
    ) /*override*/;

    // vIndex: 7
    virtual ::Editor::RelativeVolumeListBlockVolume shrinkWrapVolume(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const
    ) /*override*/;

    // vIndex: 8
    virtual bool isLocationInsideDimensionBounds(
        ::std::variant<
            ::BlockVolumeBase const*,
            ::Editor::RelativeVolumeListBlockVolume const*,
            ::Vec3 const*,
            ::BoundingBox const*> const test
    ) /*override*/;

    // vIndex: 12
    virtual ::Vec3 getDimensionMinLocation() const /*override*/;

    // vIndex: 13
    virtual ::Vec3 getDimensionMaxLocation() const /*override*/;

    // vIndex: 14
    virtual ::BoundingBox getDimensionLocationBoundingBox() const /*override*/;

    // vIndex: 9
    virtual ::CompoundBlockVolume getContiguousSelection(
        int const                                            size,
        ::Facing::Name const&                                selectionDirection,
        ::Vec3 const&                                        startingLocation,
        bool const                                           isFace,
        int const                                            fullSelectionToleranceLevel,
        bool const                                           checkForAdjacentFaceBlocks,
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::std::vector<::std::string> const&                  contiguousSelectionBlockList
    ) const /*override*/;

    // vIndex: 10
    virtual bool areBlocksContiguous(
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::Block const&                                       blockToTest,
        ::Block const&                                       blockToFollow,
        ::std::vector<::std::string> const&                  allowList
    ) const /*override*/;

    // vIndex: 11
    virtual ::Vec3 getDeltaFromDirection(::Facing::Name const& selectionDirection) const /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<void> _implInit() = 0;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<void> _implReady() = 0;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<void> _implQuit() = 0;

    // vIndex: 15
    virtual ::AABB getBoundForContiguousSelection(
        ::Vec3 const&         initialLocation,
        ::Facing::Name const& selectionDirection,
        int const             size,
        bool const            isFace
    ) const /*override*/;

    // vIndex: 16
    virtual bool isBlockExposedInDirection(
        ::Dimension const&    dimension,
        ::Vec3 const&         targetLocation,
        ::Facing::Name const& direction
    ) const /*override*/;

    // vIndex: 17
    virtual bool isSameBlockType(::Block const& blockA, ::Block const& blockB) const /*override*/;

    // vIndex: 18
    virtual bool isSameBlockAndProperties(::Block const& blockA, ::Block const& blockB) const /*override*/;

    // vIndex: 19
    virtual bool isBlockTypeInSelectionList(::Block const& block, ::std::vector<::std::string> const& allowList) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockSource& _getBlockSource() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::std::set<::ChunkPos> $getChunksFromAABB(::AABB const& aabb) const;

    MCNAPI bool $isChunkLoaded(::ChunkPos const& pos) const;

    MCNAPI bool $isChunkFullyLoaded(::ChunkPos const& pos) const;

    MCNAPI bool $areChunksLoaded(::std::set<::ChunkPos> const& chunks) const;

    MCNAPI bool $isAreaLoaded(::AABB const& aabb) const;

    MCNAPI ::Editor::RelativeVolumeListBlockVolume $trimVolumeToFitContents(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const inVolume,
        bool                                      retainMarqueeAfterTrimming,
        bool                                      ignoreLiquid,
        bool                                      ignoreNoCollision,
        ::Editor::BlockMask::BlockMaskList const& blockMask
    );

    MCNAPI ::Editor::RelativeVolumeListBlockVolume
    $shrinkWrapVolume(::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const);

    MCNAPI bool $isLocationInsideDimensionBounds(
        ::std::variant<
            ::BlockVolumeBase const*,
            ::Editor::RelativeVolumeListBlockVolume const*,
            ::Vec3 const*,
            ::BoundingBox const*> const test
    );

    MCNAPI ::Vec3 $getDimensionMinLocation() const;

    MCNAPI ::Vec3 $getDimensionMaxLocation() const;

    MCNAPI ::BoundingBox $getDimensionLocationBoundingBox() const;

    MCNAPI ::CompoundBlockVolume $getContiguousSelection(
        int const                                            size,
        ::Facing::Name const&                                selectionDirection,
        ::Vec3 const&                                        startingLocation,
        bool const                                           isFace,
        int const                                            fullSelectionToleranceLevel,
        bool const                                           checkForAdjacentFaceBlocks,
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::std::vector<::std::string> const&                  contiguousSelectionBlockList
    ) const;

    MCNAPI bool $areBlocksContiguous(
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::Block const&                                       blockToTest,
        ::Block const&                                       blockToFollow,
        ::std::vector<::std::string> const&                  allowList
    ) const;

    MCNAPI ::Vec3 $getDeltaFromDirection(::Facing::Name const& selectionDirection) const;

    MCNAPI ::AABB $getBoundForContiguousSelection(
        ::Vec3 const&         initialLocation,
        ::Facing::Name const& selectionDirection,
        int const             size,
        bool const            isFace
    ) const;

    MCNAPI bool $isBlockExposedInDirection(
        ::Dimension const&    dimension,
        ::Vec3 const&         targetLocation,
        ::Facing::Name const& direction
    ) const;

    MCNAPI bool $isSameBlockType(::Block const& blockA, ::Block const& blockB) const;

    MCNAPI bool $isSameBlockAndProperties(::Block const& blockA, ::Block const& blockB) const;

    MCNAPI bool $isBlockTypeInSelectionList(::Block const& block, ::std::vector<::std::string> const& allowList) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForCommonBlockUtilityServiceProvider();
    // NOLINTEND
};

} // namespace Editor::BlockUtils
