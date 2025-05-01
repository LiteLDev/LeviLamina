#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/selection/SelectionContainer.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
class CompoundBlockVolumeItem;
class SimpleBlockVolume;
namespace Editor::Network { class INetworkPayload; }
namespace mce { class Color; }
// clang-format on

namespace Editor::Selection {

class ServerSelectionContainer : public ::Editor::Selection::SelectionContainer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerSelectionContainer() /*override*/ = default;

    // vIndex: 1
    virtual void setVisible(bool visible) /*override*/;

    // vIndex: 2
    virtual void setOutlineColor(::mce::Color color) /*override*/;

    // vIndex: 3
    virtual void setFillColor(::mce::Color color) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result<void> pushVolume(::CompoundBlockVolumeItem const& item) /*override*/;

    // vIndex: 5
    virtual ::Scripting::Result<void> popVolume() /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result<void> replaceOrAddLastVolume(::CompoundBlockVolumeItem const& item) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> clearContainer() /*override*/;

    // vIndex: 11
    virtual ::Scripting::Result<void> replaceContainerContents(::WeakRef<::Editor::Selection::SelectionContainer> other
    ) /*override*/;

    // vIndex: 10
    virtual ::Scripting::Result<void> replaceContainerContents(::CompoundBlockVolume const& other) /*override*/;

    // vIndex: 12
    virtual ::Scripting::Result<void> translateContainer(int dx, int dy, int dz) /*override*/;

    // vIndex: 27
    virtual void _setVisible(bool visible) /*override*/;

    // vIndex: 29
    virtual void _setOutlineColor(::mce::Color color) /*override*/;

    // vIndex: 28
    virtual void _setFillColor(::mce::Color color) /*override*/;

    // vIndex: 14
    virtual ::Scripting::Result<void> _pushVolume(::CompoundBlockVolumeItem const& item) /*override*/;

    // vIndex: 15
    virtual ::Scripting::Result<void> _popVolume() /*override*/;

    // vIndex: 16
    virtual ::Scripting::Result<void> _replaceOrAddLastVolume(::CompoundBlockVolumeItem const& item) /*override*/;

    // vIndex: 17
    virtual ::Scripting::Result<void> _clearContainer() /*override*/;

    // vIndex: 19
    virtual ::Scripting::Result<void> _replaceContainerContents(::WeakRef<::Editor::Selection::SelectionContainer> other
    ) /*override*/;

    // vIndex: 18
    virtual ::Scripting::Result<void> _replaceContainerContents(::CompoundBlockVolume const& other) /*override*/;

    // vIndex: 20
    virtual ::Scripting::Result<void> _translateContainer(int dx, int dy, int dz) /*override*/;

    // vIndex: 22
    virtual ::Scripting::Result<void> _checkVolumeIsValid(::CompoundBlockVolume const& volume) const /*override*/;

    // vIndex: 21
    virtual ::Scripting::Result<void> _checkVolumeIsValid(::SimpleBlockVolume const& volume) const /*override*/;

    // vIndex: 26
    virtual bool _isClientSide() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _sendNotifications(::Editor::Network::INetworkPayload&& eventPayload) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setVisible(bool visible);

    MCNAPI void $setOutlineColor(::mce::Color color);

    MCNAPI void $setFillColor(::mce::Color color);

    MCNAPI ::Scripting::Result<void> $pushVolume(::CompoundBlockVolumeItem const& item);

    MCNAPI ::Scripting::Result<void> $popVolume();

    MCNAPI ::Scripting::Result<void> $replaceOrAddLastVolume(::CompoundBlockVolumeItem const& item);

    MCNAPI ::Scripting::Result<void> $clearContainer();

    MCNAPI ::Scripting::Result<void> $replaceContainerContents(::WeakRef<::Editor::Selection::SelectionContainer> other
    );

    MCNAPI ::Scripting::Result<void> $replaceContainerContents(::CompoundBlockVolume const& other);

    MCNAPI ::Scripting::Result<void> $translateContainer(int dx, int dy, int dz);

    MCNAPI void $_setVisible(bool visible);

    MCNAPI void $_setOutlineColor(::mce::Color color);

    MCNAPI void $_setFillColor(::mce::Color color);

    MCNAPI ::Scripting::Result<void> $_pushVolume(::CompoundBlockVolumeItem const& item);

    MCNAPI ::Scripting::Result<void> $_popVolume();

    MCNAPI ::Scripting::Result<void> $_replaceOrAddLastVolume(::CompoundBlockVolumeItem const& item);

    MCNAPI ::Scripting::Result<void> $_clearContainer();

    MCNAPI ::Scripting::Result<void> $_replaceContainerContents(::WeakRef<::Editor::Selection::SelectionContainer> other
    );

    MCNAPI ::Scripting::Result<void> $_replaceContainerContents(::CompoundBlockVolume const& other);

    MCNAPI ::Scripting::Result<void> $_translateContainer(int dx, int dy, int dz);

    MCNAPI ::Scripting::Result<void> $_checkVolumeIsValid(::CompoundBlockVolume const& volume) const;

    MCNAPI ::Scripting::Result<void> $_checkVolumeIsValid(::SimpleBlockVolume const& volume) const;

    MCNAPI bool $_isClientSide() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Selection
