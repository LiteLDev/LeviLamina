#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/Task.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class EditorManager; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct CoroutineStatus; }
namespace Editor::Coroutine { class CoroutineTaskContext; }
namespace Editor::Services { class TransactionManagerServiceProvider; }
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
    struct PlaceBatchTaskFactory;
    struct PlacedBlockPos;
    struct ActiveBatchProcess;
    struct QueuedBatch;
    // clang-format on

    // ScriptMeshCacheService inner types define
    enum class MeshTaskActivity : uint64 {
        PlacingBlocks = 0,
        Count         = 1,
    };

    struct ActiveCommitState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkefe3d4;
        ::ll::UntypedStorage<8, 24> mUnk3458e4;
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

    struct PlaceBatchTaskFactory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1bcaca;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlaceBatchTaskFactory& operator=(PlaceBatchTaskFactory const&);
        PlaceBatchTaskFactory(PlaceBatchTaskFactory const&);
        PlaceBatchTaskFactory();
    };

    struct PlacedBlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkc733ae;
        ::ll::UntypedStorage<8, 8>  mUnk8d6f47;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlacedBlockPos& operator=(PlacedBlockPos const&);
        PlacedBlockPos(PlacedBlockPos const&);
        PlacedBlockPos();
    };

    struct ActiveBatchProcess {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk443aa4;
        ::ll::UntypedStorage<8, 24> mUnka05fe8;
        ::ll::UntypedStorage<8, 24> mUnkccf96e;
        ::ll::UntypedStorage<8, 8>  mUnk6208e4;
        ::ll::UntypedStorage<8, 8>  mUnk970404;
        ::ll::UntypedStorage<1, 1>  mUnkeca352;
        ::ll::UntypedStorage<8, 32> mUnk454cef;
        ::ll::UntypedStorage<8, 8>  mUnk1dfcae;
        ::ll::UntypedStorage<8, 16> mUnkfabbbe;
        ::ll::UntypedStorage<8, 40> mUnkbb3c9e;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActiveBatchProcess& operator=(ActiveBatchProcess const&);
        ActiveBatchProcess(ActiveBatchProcess const&);
        ActiveBatchProcess();
    };

    struct QueuedBatch {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkc4c1fa;
        ::ll::UntypedStorage<8, 24> mUnke44ab8;
        ::ll::UntypedStorage<8, 24> mUnk94905c;
        ::ll::UntypedStorage<1, 1>  mUnkacf3f4;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedBatch& operator=(QueuedBatch const&);
        QueuedBatch(QueuedBatch const&);
        QueuedBatch();
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
    ::ll::UntypedStorage<8, 136> mUnk2f73de;
    ::ll::UntypedStorage<8, 144> mUnk7465cf;
    ::ll::UntypedStorage<8, 40>  mUnk788c4f;
    ::ll::UntypedStorage<8, 8>   mUnkd79157;
    ::ll::UntypedStorage<8, 8>   mUnk588404;
    ::ll::UntypedStorage<8, 16>  mUnkfdc293;
    ::ll::UntypedStorage<8, 16>  mUnk545102;
    ::ll::UntypedStorage<8, 16>  mUnk2122b6;
    ::ll::UntypedStorage<8, 16>  mUnk847939;
    ::ll::UntypedStorage<8, 16>  mUnke21971;
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

    MCNAPI void _cancelActivePlaceCoroutine();

    MCNAPI void
    _finishActiveCommit(::std::string const& requestId, bool clientSuccess, ::std::string const& clientError);

    MCNAPI void _kickOffNextBatchIfNeeded();

    MCNAPI void _onLevelTick(::Editor::EditorManager&);

    MCNAPI void _processPendingRevertChunk();

    MCNAPI void _rejectCommitPromise(::std::string const& requestId, ::std::string const& errorCode);

    MCNAPI void _resolveCommitPromise(
        ::std::string const& requestId,
        bool                 isSuccess,
        int                  blockCount,
        ::std::string const& errorMessage
    );

    MCNAPI void _revertAppliedBlocksAndDiscard(
        ::Editor::Services::TransactionManagerServiceProvider& transactionManager,
        ::std::function<void()>                                onComplete
    );

    MCNAPI void _sendCommitCancelIfNeeded();

    MCNAPI ::Scripting::Result_deprecated<void> cancelCommit(::std::string const& requestId);

    MCNAPI ::Scripting::Result_deprecated<void> unloadMesh(::std::string const& meshId);

    MCNAPI ~ScriptMeshCacheService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindMeshColorSourceKind();

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
