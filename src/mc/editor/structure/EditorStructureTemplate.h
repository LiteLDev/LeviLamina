#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureTemplate.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseBlockLocationIterator;
class Block;
class BlockPalette;
class BlockPos;
class BlockSource;
class BlockVolumeBase;
class BoundingBox;
class CompoundTag;
class StructureSettings;
class Vec3;
namespace Editor { class RelativeVolumeListBlockVolume; }
// clang-format on

namespace Editor {

class EditorStructureTemplate : public ::StructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk64c2f5;
    ::ll::UntypedStorage<8, 32> mUnkfcd3e5;
    ::ll::UntypedStorage<8, 24> mUnk30c525;
    ::ll::UntypedStorage<4, 12> mUnkd4367e;
    ::ll::UntypedStorage<8, 32> mUnk8b0f70;
    ::ll::UntypedStorage<8, 32> mUnkbc4997;
    ::ll::UntypedStorage<8, 32> mUnk363497;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureTemplate& operator=(EditorStructureTemplate const&);
    EditorStructureTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorStructureTemplate() /*override*/;

    // vIndex: 5
    virtual void clear() /*override*/;

    // vIndex: 3
    virtual bool load(::CompoundTag const& tag) /*override*/;

    // vIndex: 4
    virtual ::std::unique_ptr<::CompoundTag> save() const /*override*/;

    // vIndex: 6
    virtual ::BoundingBox
    getTransformedBounds(::BlockPos loadPosition, ::StructureSettings const& structureSettings) const /*override*/;

    // vIndex: 7
    virtual void fillEmpty(::BlockPos const& size) /*override*/;

    // vIndex: 8
    virtual bool _allowReadBlock(::BlockPos const& position, ::Block const& block) const /*override*/;

    // vIndex: 9
    virtual bool _allowReadActor(::Actor const& actor) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorStructureTemplate(::Editor::EditorStructureTemplate const&);

    MCNAPI explicit EditorStructureTemplate(::std::string_view name);

    MCNAPI void _editorFillBlockInfo(
        ::BlockSource&                                 region,
        ::std::unique_ptr<::BaseBlockLocationIterator> locationIterator,
        ::BlockPos const&                              posMin,
        ::BlockPos const&                              size,
        ::BlockPos const&                              structureOffset
    );

    MCNAPI bool _parseOrigin(::CompoundTag const& tag);

    MCNAPI void editorFillFromWorld(
        ::BlockSource&             region,
        ::StructureSettings const& structureSettings,
        ::BlockVolumeBase const&   volume
    );

    MCNAPI void editorFillFromWorld(
        ::BlockSource&                                 region,
        ::StructureSettings const&                     structureSettings,
        ::Editor::RelativeVolumeListBlockVolume const& volume
    );

    MCNAPI void editorFillFromWorld(
        ::BlockSource&                                 region,
        ::StructureSettings const&                     structureSettings,
        ::std::unique_ptr<::BaseBlockLocationIterator> locationIterator,
        ::BlockPos const&                              posMin,
        ::BlockPos const&                              span
    );

    MCNAPI void placeStructureTemplateInWorldForEditor(
        ::BlockSource&             region,
        ::BlockPalette const&      globalBlockPalette,
        ::BoundingBox const&       transformedBounds,
        ::StructureSettings const& structureSettings
    ) const;

    MCNAPI bool setOrigin(::Vec3 newOrigin);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::EditorStructureTemplate const&);

    MCNAPI void* $ctor(::std::string_view name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clear();

    MCNAPI bool $load(::CompoundTag const& tag);

    MCNAPI ::std::unique_ptr<::CompoundTag> $save() const;

    MCNAPI ::BoundingBox
    $getTransformedBounds(::BlockPos loadPosition, ::StructureSettings const& structureSettings) const;

    MCNAPI void $fillEmpty(::BlockPos const& size);

    MCNAPI bool $_allowReadBlock(::BlockPos const& position, ::Block const& block) const;

    MCNAPI bool $_allowReadActor(::Actor const& actor) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor
