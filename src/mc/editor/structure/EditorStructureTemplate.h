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
class BoundingBox;
class CompoundBlockVolume;
class CompoundTag;
class IUnknownBlockTypeRegistry;
class StructureSettings;
// clang-format on

namespace Editor {

class EditorStructureTemplate : public ::StructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkb140e7;
    ::ll::UntypedStorage<8, 32> mUnkfcd3e5;
    ::ll::UntypedStorage<8, 24> mUnk30c525;
    ::ll::UntypedStorage<8, 32> mUnk8b0f70;
    ::ll::UntypedStorage<8, 32> mUnkbc4997;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureTemplate& operator=(EditorStructureTemplate const&);
    EditorStructureTemplate(EditorStructureTemplate const&);
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
    virtual bool _allowReadBlock(::BlockPos const& position, ::Block const& block) const /*override*/;

    // vIndex: 8
    virtual bool _allowReadActor(::Actor const& actor) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorStructureTemplate(::std::string_view name);

    MCAPI EditorStructureTemplate(
        ::StructureTemplate const&                              temp,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );

    MCAPI ::std::string getLocation() const;

    MCAPI ::std::vector<::std::string> getTags() const;

    MCAPI void placeStructureTemplateInWorldForEditor(
        ::BlockSource&             region,
        ::BlockPalette const&      globalBlockPalette,
        ::BoundingBox const&       transformedBounds,
        ::StructureSettings const& structureSettings
    ) const;

    MCAPI void setBounds(::CompoundBlockVolume const& volume);

    MCAPI void setBounds(::BlockPos const& from, ::BlockPos const& to);

    MCAPI void setLocation(::std::string location);

    MCAPI void setTags(::std::vector<::std::string> tags);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view name);

    MCAPI void* $ctor(
        ::StructureTemplate const&                              temp,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clear();

    MCAPI bool $load(::CompoundTag const& tag);

    MCAPI ::std::unique_ptr<::CompoundTag> $save() const;

    MCAPI ::BoundingBox
    $getTransformedBounds(::BlockPos loadPosition, ::StructureSettings const& structureSettings) const;

    MCAPI bool $_allowReadBlock(::BlockPos const& position, ::Block const& block) const;

    MCFOLD bool $_allowReadActor(::Actor const& actor) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor
