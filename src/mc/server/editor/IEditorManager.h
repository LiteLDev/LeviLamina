#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
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
    virtual ~IEditorManager() /*override*/;

    virtual ::Editor::ServiceProviderCollection& getServiceProviders() = 0;

    virtual bool isClientSide() const = 0;

    virtual ::std::unique_ptr<::Editor::IEditorPlayer> createPlayer(::Player&) = 0;

    virtual ::std::unique_ptr<::FileArchiver::IWorldConverter> createWorldConverter(
        ::ILevelListCache&,
        ::Scheduler&,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>
    ) = 0;

    virtual void cleanupOrphanedTemporaryPlaytestWorlds(::ILevelListCache&) const = 0;

    virtual void cleanupOrphanedTemporaryRealmsUploadWorlds() = 0;

    virtual ::Scripting::Result_deprecated<void> scriptingTeardown() = 0;

    virtual ::Scripting::Result_deprecated<void> scriptingRebuild(::Scripting::ContextId, bool) = 0;

    virtual void tryClearPlaytestRoundtripInfo() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
