#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EntityOperation.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockVolumeBase;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Transactions {

class PendingTransaction {
public:
    // PendingTransaction inner types declare
    // clang-format off
    struct RetainedBlockRegion;
    // clang-format on

    // PendingTransaction inner types define
    struct RetainedBlockRegion {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk7468fa;
        ::ll::UntypedStorage<8, 16> mUnk3e7dbf;
        // NOLINTEND

    public:
        // prevent constructor by default
        RetainedBlockRegion& operator=(RetainedBlockRegion const&);
        RetainedBlockRegion(RetainedBlockRegion const&);
        RetainedBlockRegion();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk792894;
    ::ll::UntypedStorage<8, 8>  mUnk75213a;
    ::ll::UntypedStorage<8, 24> mUnkb45e14;
    ::ll::UntypedStorage<8, 24> mUnk8db6d5;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingTransaction& operator=(PendingTransaction const&);
    PendingTransaction(PendingTransaction const&);
    PendingTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _clearRetainedBlockRegions();

    MCNAPI ::Scripting::Result_deprecated<bool>
    addEntityOperation(::Actor* entity, ::Editor::Transactions::EntityOperation::OperationType type);

    MCNAPI ::Scripting::Result_deprecated<void> addPrefabInstanceOperation(
        ::mce::UUID const&             instanceId,
        ::std::optional<::std::string> oldPayload,
        ::std::optional<::std::string> newPayload,
        ::mce::UUID                    eventHandlerId
    );

    MCNAPI ::Scripting::Result_deprecated<bool> addUserDefinedOperation(
        ::std::string        oldPayload,
        ::std::string        newPayload,
        ::std::string const& operationName,
        ::mce::UUID          eventHandlerId
    );

    MCNAPI ::Scripting::Result_deprecated<void> addVolumeListOperation(
        ::std::vector<::Editor::RelativeVolumeListBlockVolume>&& oldVolumes,
        ::std::vector<::Editor::RelativeVolumeListBlockVolume>&& newVolumes,
        ::mce::UUID                                              eventHandlerId
    );

    MCNAPI ::Scripting::Result_deprecated<int> commitTrackedChanges();

    MCNAPI ::Scripting::Result_deprecated<int> discardTrackedChanges();

    MCNAPI ::Scripting::Result_deprecated<bool> trackBlockChangeArea(::BlockPos const& from, ::BlockPos const& to);

    MCNAPI ::Scripting::Result_deprecated<bool> trackBlockChangeList(::std::vector<::BlockPos> const& locations);

    MCNAPI ::Scripting::Result_deprecated<bool> trackBlockChangeVolume(::BlockVolumeBase const& volume);

    MCNAPI ::Scripting::Result_deprecated<bool>
    trackPrefabInstanceChange(::mce::UUID const& instanceId, ::mce::UUID eventHandlerId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID getId(::WeakRef<::Editor::Transactions::PendingTransaction> weak);

    MCNAPI static bool isValid(::WeakRef<::Editor::Transactions::PendingTransaction> weak);
    // NOLINTEND
};

} // namespace Editor::Transactions
