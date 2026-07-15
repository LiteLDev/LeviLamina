#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptMeshCacheService : public ::Editor::Services::PayloadStoreHelper {
public:
    // ScriptMeshCacheService inner types declare
    // clang-format off
    struct ActiveCommitState;
    struct PendingRevertState;
    // clang-format on

    // ScriptMeshCacheService inner types define
    struct ActiveCommitState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkefe3d4;
        ::ll::UntypedStorage<4, 4>  mUnkdc9416;
        ::ll::UntypedStorage<4, 4>  mUnkbd8342;
        ::ll::UntypedStorage<4, 4>  mUnk16cc64;
        ::ll::UntypedStorage<8, 8>  mUnkefbc91;
        ::ll::UntypedStorage<8, 24> mUnkf173c4;
        ::ll::UntypedStorage<8, 24> mUnk7b8a2f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActiveCommitState& operator=(ActiveCommitState const&);
        ActiveCommitState(ActiveCommitState const&);
        ActiveCommitState();
    };

    struct PendingRevertState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk6986ab;
        ::ll::UntypedStorage<8, 24> mUnk106b8a;
        ::ll::UntypedStorage<8, 8>  mUnkbccea1;
        ::ll::UntypedStorage<8, 8>  mUnka6339d;
        ::ll::UntypedStorage<8, 8>  mUnk7be2f3;
        ::ll::UntypedStorage<8, 64> mUnkf82e9b;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingRevertState& operator=(PendingRevertState const&);
        PendingRevertState(PendingRevertState const&);
        PendingRevertState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnke1af66;
    ::ll::UntypedStorage<8, 64>  mUnkc26ae0;
    ::ll::UntypedStorage<1, 1>   mUnkff5e75;
    ::ll::UntypedStorage<8, 64>  mUnk3ce9f8;
    ::ll::UntypedStorage<8, 32>  mUnk98a1e1;
    ::ll::UntypedStorage<8, 32>  mUnk7b608c;
    ::ll::UntypedStorage<1, 1>   mUnka6f20d;
    ::ll::UntypedStorage<8, 112> mUnk2f73de;
    ::ll::UntypedStorage<8, 144> mUnk7465cf;
    ::ll::UntypedStorage<8, 8>   mUnk588404;
    ::ll::UntypedStorage<8, 16>  mUnkfdc293;
    ::ll::UntypedStorage<8, 16>  mUnk545102;
    ::ll::UntypedStorage<8, 16>  mUnk2122b6;
    ::ll::UntypedStorage<8, 16>  mUnk847939;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMeshCacheService& operator=(ScriptMeshCacheService const&);
    ScriptMeshCacheService(ScriptMeshCacheService const&);
    ScriptMeshCacheService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptMeshCacheService(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const&);

    MCNAPI ~ScriptMeshCacheService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindMeshLoadError();

    MCNAPI static ::Scripting::EnumBinding bindMeshPlacementError();

    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& services, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
