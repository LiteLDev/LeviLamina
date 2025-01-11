#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class BlockPos;
class BlockSource;
class CompoundBlockVolume;
class StructureSettings;
namespace Editor { class EditorStructureTemplate; }
namespace Editor::Selection { class SelectionContainer; }
namespace Editor::Services { struct ClipboardWriteOptions; }
namespace mce { class UUID; }
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
    MCAPI explicit ClipboardItem(::mce::UUID id);

    MCFOLD void clear();

    MCFOLD ::mce::UUID const& getId() const;

    MCAPI ::CompoundBlockVolume getPredictedWriteAsVolume(
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;

    MCAPI ::BlockPos getSize() const;

    MCFOLD ::Editor::EditorStructureTemplate* getStructureData() const;

    MCAPI ::StructureSettings getStructureSettingsFromOptions(
        ::BlockPos const&                                size,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;

    MCAPI bool isEmpty() const;

    MCAPI void readFromSelection(::BlockSource& region, ::Editor::Selection::SelectionContainer const& selection);

    MCAPI void readFromVolume(::BlockSource& region, ::CompoundBlockVolume const& volume);

    MCAPI void readFromWorld(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to);

    MCAPI void setStructureData(::Editor::EditorStructureTemplate const& structure);

    MCAPI bool writeToWorld(
        ::BlockSource&                                   region,
        ::BlockPalette const&                            levelPalette,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::UUID id);
    // NOLINTEND
};

} // namespace Editor::Services
