#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundBlockVolume;
class StructureSettings;
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
    MCAPI ::CompoundBlockVolume getPredictedWriteAsVolume(
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;

    MCAPI ::StructureSettings getStructureSettingsFromOptions(
        ::BlockPos const&                                size,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;

    MCAPI bool isEmpty() const;

    MCAPI void readFromVolume(::BlockSource& region, ::CompoundBlockVolume const& volume);

    MCAPI void readFromWorld(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to);
    // NOLINTEND
};

} // namespace Editor::Services
