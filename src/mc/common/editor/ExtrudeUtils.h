#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ContiguousSelectionType.h"
#include "mc/legacy/facing/Name.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
class Player;
class Vec3;
// clang-format on

namespace Editor::BlockUtils {

class ExtrudeUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::Vec3> GetFacePreviewPositions(
        ::Player const&                                      player,
        int                                                  size,
        ::Facing::Name const&                                selectionDirection,
        ::Vec3 const&                                        extrudeLocation,
        bool                                                 checkForAdjacentFaceBlocks,
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::std::vector<::std::string> const&                  contiguousSelectionBlockList,
        bool                                                 isShrink,
        int                                                  layerCount
    );

    MCNAPI static ::CompoundBlockVolume generatePreviewExtrudePositions(
        ::Player const&                                      player,
        ::CompoundBlockVolume&                               selection,
        ::Facing::Name const&                                selectionDirection,
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::std::vector<::std::string> const&                  contiguousSelectionBlockList,
        bool                                                 isShrink,
        int                                                  layerCount
    );

    MCNAPI static void growSelection(
        ::Player const&        player,
        ::CompoundBlockVolume& selection,
        int                    layerCount,
        ::Facing::Name const&  selectionDirection
    );

    MCNAPI static void quickExtrude(
        ::Player const&                                      player,
        int                                                  size,
        ::Facing::Name const&                                selectionDirection,
        ::Vec3 const&                                        extrudeLocation,
        bool                                                 checkForAdjacentFaceBlocks,
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::std::vector<::std::string> const&                  contiguousSelectionBlockList,
        bool                                                 isGrowing,
        int                                                  layerCount
    );

    MCNAPI static void shrinkSelection(
        ::Player const&                                      player,
        ::CompoundBlockVolume&                               selection,
        int                                                  layerCount,
        ::Facing::Name const&                                selectionDirection,
        ::Editor::BlockUtils::ContiguousSelectionType const& contiguousSelectionType,
        ::std::vector<::std::string> const&                  contiguousSelectionBlockList
    );
    // NOLINTEND
};

} // namespace Editor::BlockUtils
