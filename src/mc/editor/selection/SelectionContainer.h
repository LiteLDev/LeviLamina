#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class CompoundBlockVolume;
class CompoundBlockVolumeItem;
class SimpleBlockVolume;
namespace mce { class Color; }
// clang-format on

namespace Editor::Selection {

class SelectionContainer : public ::Bedrock::EnableNonOwnerReferences,
                           public ::EnableGetWeakRef<::Editor::Selection::SelectionContainer> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke9c0ad;
    ::ll::UntypedStorage<8, 8>  mUnkf6299e;
    ::ll::UntypedStorage<8, 16> mUnke51fc6;
    ::ll::UntypedStorage<1, 1>  mUnke76635;
    ::ll::UntypedStorage<4, 4>  mUnkf8e83c;
    ::ll::UntypedStorage<1, 1>  mUnka16114;
    ::ll::UntypedStorage<1, 1>  mUnkd91d09;
    ::ll::UntypedStorage<4, 20> mUnkdf4773;
    ::ll::UntypedStorage<4, 20> mUnk5159c6;
    ::ll::UntypedStorage<8, 88> mUnk2280fd;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainer& operator=(SelectionContainer const&);
    SelectionContainer(SelectionContainer const&);
    SelectionContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionContainer() /*override*/ = default;

    // vIndex: 1
    virtual void setVisible(bool visible) = 0;

    // vIndex: 2
    virtual void setOutlineColor(::mce::Color) = 0;

    // vIndex: 3
    virtual void setFillColor(::mce::Color) = 0;

    // vIndex: 4
    virtual ::Scripting::Result<void> pushVolume(::CompoundBlockVolumeItem const&) = 0;

    // vIndex: 5
    virtual ::Scripting::Result<void> popVolume() = 0;

    // vIndex: 6
    virtual ::Scripting::Result<void> replaceOrAddLastVolume(::CompoundBlockVolumeItem const&) = 0;

    // vIndex: 7
    virtual ::std::optional<::CompoundBlockVolumeItem>
    peekLastVolume(::std::optional<::CompoundBlockVolumePositionRelativity> optRelativity);

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<int> volumeCount();

    // vIndex: 9
    virtual ::Scripting::Result<void> clearContainer() = 0;

    // vIndex: 11
    virtual ::Scripting::Result<void> replaceContainerContents(::WeakRef<::Editor::Selection::SelectionContainer>) = 0;

    // vIndex: 10
    virtual ::Scripting::Result<void> replaceContainerContents(::CompoundBlockVolume const&) = 0;

    // vIndex: 12
    virtual ::Scripting::Result<void> translateContainer(int, int, int) = 0;

    // vIndex: 13
    virtual ::Scripting::Result<void> moveContainerToLocation(::BlockPos const& newPos);

    // vIndex: 14
    virtual ::Scripting::Result<void> _pushVolume(::CompoundBlockVolumeItem const& item);

    // vIndex: 15
    virtual ::Scripting::Result<void> _popVolume();

    // vIndex: 16
    virtual ::Scripting::Result<void> _replaceOrAddLastVolume(::CompoundBlockVolumeItem const& item);

    // vIndex: 17
    virtual ::Scripting::Result<void> _clearContainer();

    // vIndex: 19
    virtual ::Scripting::Result<void> _replaceContainerContents(::WeakRef<::Editor::Selection::SelectionContainer> other
    );

    // vIndex: 18
    virtual ::Scripting::Result<void> _replaceContainerContents(::CompoundBlockVolume const& other);

    // vIndex: 20
    virtual ::Scripting::Result<void> _translateContainer(int dx, int dy, int dz);

    // vIndex: 22
    virtual ::Scripting::Result<void> _checkVolumeIsValid(::CompoundBlockVolume const&) const = 0;

    // vIndex: 21
    virtual ::Scripting::Result<void> _checkVolumeIsValid(::SimpleBlockVolume const&) const = 0;

    // vIndex: 23
    virtual ::Scripting::Result<void> _checkTranslationIsValid(int dx, int dy, int dz) const;

    // vIndex: 24
    virtual ::Scripting::Result<void> _checkSizeIsValid(int x, int y, int z) const;

    // vIndex: 25
    virtual ::Scripting::Result<void> _checkDimensionHeightIsValid(::BoundingBox const& boundingBox) const;

    // vIndex: 26
    virtual bool _isClientSide() const = 0;

    // vIndex: 27
    virtual void _setVisible(bool visible);

    // vIndex: 28
    virtual void _setFillColor(::mce::Color color);

    // vIndex: 29
    virtual void _setOutlineColor(::mce::Color color);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::Color const& mDefaultBorderColor();

    MCNAPI static ::mce::Color const& mDefaultFillColor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::CompoundBlockVolumeItem>
    $peekLastVolume(::std::optional<::CompoundBlockVolumePositionRelativity> optRelativity);

    MCNAPI ::Scripting::Result_deprecated<int> $volumeCount();

    MCNAPI ::Scripting::Result<void> $moveContainerToLocation(::BlockPos const& newPos);

    MCNAPI ::Scripting::Result<void> $_pushVolume(::CompoundBlockVolumeItem const& item);

    MCNAPI ::Scripting::Result<void> $_popVolume();

    MCNAPI ::Scripting::Result<void> $_replaceOrAddLastVolume(::CompoundBlockVolumeItem const& item);

    MCNAPI ::Scripting::Result<void> $_clearContainer();

    MCNAPI ::Scripting::Result<void> $_replaceContainerContents(::WeakRef<::Editor::Selection::SelectionContainer> other
    );

    MCNAPI ::Scripting::Result<void> $_replaceContainerContents(::CompoundBlockVolume const& other);

    MCNAPI ::Scripting::Result<void> $_translateContainer(int dx, int dy, int dz);

    MCNAPI ::Scripting::Result<void> $_checkTranslationIsValid(int dx, int dy, int dz) const;

    MCNAPI ::Scripting::Result<void> $_checkSizeIsValid(int x, int y, int z) const;

    MCNAPI ::Scripting::Result<void> $_checkDimensionHeightIsValid(::BoundingBox const& boundingBox) const;

    MCNAPI void $_setVisible(bool visible);

    MCNAPI void $_setFillColor(::mce::Color color);

    MCNAPI void $_setOutlineColor(::mce::Color color);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Selection
