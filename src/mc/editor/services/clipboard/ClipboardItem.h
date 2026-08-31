#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class BlockPos;
class BlockSource;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::Services { struct ClipboardWriteOptions; }
// clang-format on

namespace Editor::Services {

class ClipboardItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf1c8c4;
    ::ll::UntypedStorage<8, 8>  mUnk26d811;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardItem& operator=(ClipboardItem const&);
    ClipboardItem(ClipboardItem const&);
    ClipboardItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::RelativeVolumeListBlockVolume
    getPredictedWriteVolume(::BlockPos const& position, ::Editor::Services::ClipboardWriteOptions const* options) const;

    MCNAPI bool writeToWorld(
        ::BlockSource&                                   region,
        ::BlockPalette const&                            levelPalette,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;
    // NOLINTEND
};

} // namespace Editor::Services
