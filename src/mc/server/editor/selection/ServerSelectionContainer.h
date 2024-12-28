#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/editor/selection/SelectionContainer.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
class CompoundBlockVolumeItem;
class SimpleBlockVolume;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class INetworkPayload; }
namespace Editor::Network { class PayloadServiceProvider; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Selection {

class ServerSelectionContainer : public ::Editor::Selection::SelectionContainer {
public:
    // prevent constructor by default
    ServerSelectionContainer& operator=(ServerSelectionContainer const&);
    ServerSelectionContainer(ServerSelectionContainer const&);
    ServerSelectionContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerSelectionContainer() /*override*/;

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
    MCAPI ServerSelectionContainer(
        ::Editor::ServiceProviderCollection&       serviceProviders,
        ::Editor::Network::PayloadServiceProvider& payloadService,
        ::mce::UUID                                id,
        bool                                       requiresReplication
    );

    MCAPI void _sendNotifications(::Editor::Network::INetworkPayload&& eventPayload) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Editor::ServiceProviderCollection&       serviceProviders,
        ::Editor::Network::PayloadServiceProvider& payloadService,
        ::mce::UUID                                id,
        bool                                       requiresReplication
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
    MCAPI void $setVisible(bool visible);

    MCAPI void $setOutlineColor(::mce::Color color);

    MCAPI void $setFillColor(::mce::Color color);

    MCAPI ::Scripting::Result<void> $pushVolume(::CompoundBlockVolumeItem const& item);

    MCAPI ::Scripting::Result<void> $popVolume();

    MCAPI ::Scripting::Result<void> $replaceOrAddLastVolume(::CompoundBlockVolumeItem const& item);

    MCAPI ::Scripting::Result<void> $clearContainer();

    MCAPI ::Scripting::Result<void> $replaceContainerContents(::WeakRef<::Editor::Selection::SelectionContainer> other);

    MCAPI ::Scripting::Result<void> $replaceContainerContents(::CompoundBlockVolume const& other);

    MCAPI ::Scripting::Result<void> $translateContainer(int dx, int dy, int dz);

    MCAPI void $_setVisible(bool visible);

    MCAPI void $_setOutlineColor(::mce::Color color);

    MCAPI void $_setFillColor(::mce::Color color);

    MCAPI ::Scripting::Result<void> $_pushVolume(::CompoundBlockVolumeItem const& item);

    MCAPI ::Scripting::Result<void> $_popVolume();

    MCAPI ::Scripting::Result<void> $_replaceOrAddLastVolume(::CompoundBlockVolumeItem const& item);

    MCAPI ::Scripting::Result<void> $_clearContainer();

    MCAPI ::Scripting::Result<void> $_replaceContainerContents(::WeakRef<::Editor::Selection::SelectionContainer> other
    );

    MCAPI ::Scripting::Result<void> $_replaceContainerContents(::CompoundBlockVolume const& other);

    MCAPI ::Scripting::Result<void> $_translateContainer(int dx, int dy, int dz);

    MCAPI ::Scripting::Result<void> $_checkVolumeIsValid(::CompoundBlockVolume const& volume) const;

    MCAPI ::Scripting::Result<void> $_checkVolumeIsValid(::SimpleBlockVolume const& volume) const;

    MCAPI bool $_isClientSide() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Selection
