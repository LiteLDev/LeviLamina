#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class ILevelListCache;
class IResourcePackRepository;
class Player;
class Scheduler;
namespace Editor { class IEditorPlayer; }
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Editor {

class IEditorManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEditorManager() /*override*/;

    // vIndex: 1
    virtual ::Editor::ServiceProviderCollection& getServiceProviders() = 0;

    // vIndex: 2
    virtual bool isClientSide() const = 0;

    // vIndex: 3
    virtual ::std::unique_ptr<::Editor::IEditorPlayer> createPlayer(::Player&) = 0;

    // vIndex: 4
    virtual ::std::unique_ptr<::FileArchiver::IWorldConverter>
    createWorldConverter(::ILevelListCache&, ::Scheduler&, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>) = 0;

    // vIndex: 5
    virtual void cleanupOrphanedTemporaryPlaytestWorlds(::ILevelListCache&) const = 0;

    // vIndex: 6
    virtual ::Scripting::Result<void> scriptingTeardown() = 0;

    // vIndex: 7
    virtual ::Scripting::Result<void> scriptingRebuild(::Scripting::ContextId, bool) = 0;

    // vIndex: 8
    virtual void tryClearPlaytestRoundtripInfo() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
