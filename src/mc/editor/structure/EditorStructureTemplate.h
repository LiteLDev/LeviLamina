#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/StructureTemplate.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPalette;
class BlockPos;
class BlockSource;
class BlockVolumeBase;
class BoundingBox;
class CompoundTag;
class IUnknownBlockTypeRegistry;
class StructureSettings;
namespace Editor { class RelativeVolumeListBlockVolume; }
// clang-format on

namespace Editor {

class EditorStructureTemplate : public ::StructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk64c2f5;
    ::ll::UntypedStorage<8, 24> mUnkd0f99f;
    ::ll::UntypedStorage<4, 12> mUnk873fae;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureTemplate& operator=(EditorStructureTemplate const&);
    EditorStructureTemplate(EditorStructureTemplate const&);
    EditorStructureTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorStructureTemplate() /*override*/;

    virtual void clear() /*override*/;

    virtual bool load(::CompoundTag const& tag) /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> save() const /*override*/;

    virtual ::BoundingBox
    getTransformedBounds(::BlockPos loadPosition, ::StructureSettings const& structureSettings) const /*override*/;

    virtual void fillEmpty(::BlockPos const& size) /*override*/;

    virtual bool _allowReadBlock(::BlockPos const& position, ::Block const& block) const /*override*/;

    virtual bool _allowReadActor(::Actor const& actor) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorStructureTemplate(::std::string_view name);

#ifdef LL_PLAT_C
    MCNAPI EditorStructureTemplate(
        ::StructureTemplate const&                              temp,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );
#endif

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

    MCNAPI void placeStructureTemplateInWorldForEditor(
        ::BlockSource&             region,
        ::BlockPalette const&      globalBlockPalette,
        ::BoundingBox const&       transformedBounds,
        ::StructureSettings const& structureSettings,
        bool                       excludeAirBlocks
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view name);

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::StructureTemplate const&                              temp,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );
#endif
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
