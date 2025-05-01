#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ContiguousSelectionType.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/serviceproviders/CommonBlockUtilityServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/legacy/facing/Name.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockSource;
class ChunkPos;
class CompoundBlockVolume;
class Dimension;
class Vec3;
// clang-format on

namespace Editor::BlockUtils {

class CommonBlockUtilityService : public ::Editor::Services::IEditorService,
                                  public ::Editor::Services::PayloadStoreHelper,
                                  public ::Editor::BlockUtils::CommonBlockUtilityServiceProvider {
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
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

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

    // vIndex: 7
    virtual bool areBlocksContiguous(
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::Block const&                                       blockToTest,
        ::Block const&                                       blockToFollow,
        ::std::vector<::std::string> const&                  allowList
    ) const /*override*/;

    // vIndex: 8
    virtual ::Vec3 getDeltaFromDirection(::Facing::Name const& selectionDirection) const /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void> _implInit() = 0;

    // vIndex: 8
    virtual ::Scripting::Result<void> _implReady() = 0;

    // vIndex: 9
    virtual ::Scripting::Result<void> _implQuit() = 0;

    // vIndex: 9
    virtual ::AABB getBoundForContiguousSelection(
        ::Vec3 const&         initialLocation,
        ::Facing::Name const& selectionDirection,
        int const             size,
        bool const            isFace
    ) const /*override*/;

    // vIndex: 10
    virtual bool isBlockExposedInDirection(
        ::Dimension const&    dimension,
        ::Vec3 const&         targetLocation,
        ::Facing::Name const& direction
    ) const /*override*/;

    // vIndex: 11
    virtual bool isSameBlockType(::Block const& blockA, ::Block const& blockB) const /*override*/;

    // vIndex: 12
    virtual bool isSameBlockAndProperties(::Block const& blockA, ::Block const& blockB) const /*override*/;

    // vIndex: 13
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
    MCNAPI ::Scripting::Result<void> $init();

    MCNAPI ::Scripting::Result<void> $ready();

    MCNAPI ::Scripting::Result<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::std::set<::ChunkPos> $getChunksFromAABB(::AABB const& aabb) const;

    MCNAPI bool $isChunkLoaded(::ChunkPos const& pos) const;

    MCNAPI bool $isChunkFullyLoaded(::ChunkPos const& pos) const;

    MCNAPI bool $areChunksLoaded(::std::set<::ChunkPos> const& chunks) const;

    MCNAPI bool $isAreaLoaded(::AABB const& aabb) const;

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
