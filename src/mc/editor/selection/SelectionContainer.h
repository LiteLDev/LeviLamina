#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class CompoundBlockVolume;
class CompoundBlockVolumeItem;
class SimpleBlockVolume;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class PayloadServiceProvider; }
namespace mce { class Color; }
namespace mce { class UUID; }
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
    virtual ~SelectionContainer() /*override*/;

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
    // member functions
    // NOLINTBEGIN
    MCAPI SelectionContainer(
        ::Editor::ServiceProviderCollection&       serviceProviders,
        ::Editor::Network::PayloadServiceProvider& payloadService,
        ::mce::UUID                                id,
        bool                                       requiresReplication
    );

    MCAPI bool _isPendingDestroy() const;

    MCAPI void _logMessage(::std::string const& msg);

    MCAPI void _setPendingDestroy(bool destroy);

    MCAPI void _setScriptRefCount(uint value);

    MCAPI ::CompoundBlockVolume const& getCompoundVolume() const;

    MCAPI ::mce::Color const& getFillColor() const;

    MCAPI ::mce::UUID const& getId();

    MCAPI ::mce::Color const& getOutlineColor() const;

    MCAPI uint getScriptRefCount() const;

    MCAPI bool isVisible() const;

    MCAPI bool requiresReplication() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color const& mDefaultBorderColor();

    MCAPI static ::mce::Color const& mDefaultFillColor();
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
    MCAPI ::std::optional<::CompoundBlockVolumeItem>
    $peekLastVolume(::std::optional<::CompoundBlockVolumePositionRelativity> optRelativity);

    MCAPI ::Scripting::Result_deprecated<int> $volumeCount();

    MCAPI ::Scripting::Result<void> $moveContainerToLocation(::BlockPos const& newPos);

    MCAPI ::Scripting::Result<void> $_pushVolume(::CompoundBlockVolumeItem const& item);

    MCAPI ::Scripting::Result<void> $_popVolume();

    MCAPI ::Scripting::Result<void> $_replaceOrAddLastVolume(::CompoundBlockVolumeItem const& item);

    MCAPI ::Scripting::Result<void> $_clearContainer();

    MCAPI ::Scripting::Result<void> $_replaceContainerContents(::WeakRef<::Editor::Selection::SelectionContainer> other
    );

    MCAPI ::Scripting::Result<void> $_replaceContainerContents(::CompoundBlockVolume const& other);

    MCAPI ::Scripting::Result<void> $_translateContainer(int dx, int dy, int dz);

    MCAPI ::Scripting::Result<void> $_checkTranslationIsValid(int dx, int dy, int dz) const;

    MCAPI ::Scripting::Result<void> $_checkSizeIsValid(int x, int y, int z) const;

    MCAPI ::Scripting::Result<void> $_checkDimensionHeightIsValid(::BoundingBox const& boundingBox) const;

    MCAPI void $_setVisible(bool visible);

    MCAPI void $_setFillColor(::mce::Color color);

    MCAPI void $_setOutlineColor(::mce::Color color);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Selection
