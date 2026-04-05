#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class PermissionsHandler {
public:
    // PermissionsHandler inner types define
    using PermissionsPublisher =
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>;

    using PermissionsPublisherRefWrapper = ::std::reference_wrapper<
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mCommandPermissions;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel>  mPlayerPermissions;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
        mClientPlayerPermissionsPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    PermissionsHandler(PermissionsHandler const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PermissionsHandler();

    MCAPI void addSaveData(::CompoundTag& tag) const;

    MCAPI bool loadSaveData(::CompoundTag const& tag);

    MCAPI ::PermissionsHandler& operator=(::PermissionsHandler const&);

    MCAPI ~PermissionsHandler();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::std::string>
    getDiff(::PermissionsHandler const& lhs, ::PermissionsHandler const& rhs);
#endif

    MCAPI static ::PlayerPermissionLevel playerPermissionLevelFromString(::std::string const& s);

    MCAPI static ::std::string playerPermissionLevelToString(::PlayerPermissionLevel const& permission);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DIFF_COMMAND_PERMISSION();

    MCAPI static ::std::string const& DIFF_PLAYER_PERMISSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
