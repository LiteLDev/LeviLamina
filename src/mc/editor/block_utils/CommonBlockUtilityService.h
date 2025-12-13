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
class BlockPos;
class BlockSource;
class BlockVolumeBase;
class BoundingBox;
class ChunkPos;
class CompoundBlockVolume;
class Dimension;
class Vec3;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor { class ServiceProviderCollection; }
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
    virtual ~CommonBlockUtilityService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::std::set<::ChunkPos> getChunksFromAABB(::AABB const& aabb) const /*override*/;

    virtual bool isChunkLoaded(::ChunkPos const& pos) const /*override*/;

    virtual bool isChunkFullyLoaded(::ChunkPos const& pos) const /*override*/;

    virtual bool areChunksLoaded(::std::set<::ChunkPos> const& chunks) const /*override*/;

    virtual bool isAreaLoaded(::AABB const& aabb) const /*override*/;

    virtual ::Editor::RelativeVolumeListBlockVolume trimVolumeToFitContents(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const inVolume,
        bool                                      retainMarqueeAfterTrimming,
        bool                                      ignoreLiquid,
        bool                                      ignoreNoCollision,
        ::Editor::BlockMask::BlockMaskList const& blockMask
    ) /*override*/;

    virtual ::Editor::RelativeVolumeListBlockVolume findObscuredBlocksWithinVolume(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const inVolume
    ) /*override*/;

    virtual ::Editor::RelativeVolumeListBlockVolume shrinkWrapVolume(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const
    ) /*override*/;

    virtual bool isLocationInsideDimensionBounds(
        ::std::variant<
            ::BlockVolumeBase const*,
            ::Editor::RelativeVolumeListBlockVolume const*,
            ::Vec3 const*,
            ::BoundingBox const*,
            ::BlockPos const*> const test
    ) /*override*/;

    virtual ::Vec3 getDimensionMinLocation() const /*override*/;

    virtual ::Vec3 getDimensionMaxLocation() const /*override*/;

    virtual ::BoundingBox getDimensionLocationBoundingBox() const /*override*/;

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

    virtual bool areBlocksContiguous(
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::Block const&                                       blockToTest,
        ::Block const&                                       blockToFollow,
        ::std::vector<::std::string> const&                  allowList
    ) const /*override*/;

    virtual ::Vec3 getDeltaFromDirection(::Facing::Name const& selectionDirection) const /*override*/;

    virtual ::Scripting::Result_deprecated<void> _implInit() = 0;

    virtual ::Scripting::Result_deprecated<void> _implReady() = 0;

    virtual ::Scripting::Result_deprecated<void> _implQuit() = 0;

    virtual ::AABB getBoundForContiguousSelection(
        ::Vec3 const&         initialLocation,
        ::Facing::Name const& selectionDirection,
        int const             size,
        bool const            isFace
    ) const /*override*/;

    virtual bool isBlockExposedInDirection(
        ::Dimension const&    dimension,
        ::Vec3 const&         targetLocation,
        ::Facing::Name const& direction
    ) const /*override*/;

    virtual bool isSameBlockType(::Block const& blockA, ::Block const& blockB) const /*override*/;

    virtual bool isSameBlockAndProperties(::Block const& blockA, ::Block const& blockB) const /*override*/;

    virtual bool isBlockTypeInSelectionList(::Block const& block, ::std::vector<::std::string> const& allowList) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit CommonBlockUtilityService(::Editor::ServiceProviderCollection& providers);

    MCNAPI ::BlockSource& _getBlockSource() const;

    MCNAPI ::Dimension& _getDimension() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Editor::ServiceProviderCollection& providers);
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

    MCNAPI ::Editor::RelativeVolumeListBlockVolume $findObscuredBlocksWithinVolume(
        ::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const inVolume
    );

    MCNAPI ::Editor::RelativeVolumeListBlockVolume
    $shrinkWrapVolume(::std::variant<::BlockVolumeBase const*, ::Editor::RelativeVolumeListBlockVolume const*> const);

    MCNAPI bool $isLocationInsideDimensionBounds(
        ::std::variant<
            ::BlockVolumeBase const*,
            ::Editor::RelativeVolumeListBlockVolume const*,
            ::Vec3 const*,
            ::BoundingBox const*,
            ::BlockPos const*> const test
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
