#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BlockVolumeBase;
class StructureSettings;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::Services { struct ClipboardWriteOptions; }
// clang-format on

namespace Editor::Services {

class ClipboardItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf1c8c4;
    ::ll::UntypedStorage<8, 8>  mUnkad9346;
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

    MCNAPI ::StructureSettings getStructureSettingsFromOptions(
        ::BlockPos const&                                size,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;

    MCNAPI bool isEmpty() const;

    MCNAPI void readFromWorld(::BlockSource& region, ::BlockVolumeBase const& volume);

    MCNAPI void readFromWorld(::BlockSource& region, ::Editor::RelativeVolumeListBlockVolume const& volume);
    // NOLINTEND
};

} // namespace Editor::Services
