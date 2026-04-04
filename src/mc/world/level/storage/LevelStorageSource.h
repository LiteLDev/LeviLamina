#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class LevelData;
class LevelDbEnv;
class LevelLooseFileStorage;
class LevelStorage;
class LevelStorageEventing;
class Scheduler;
namespace Core { class Path; }
// clang-format on

class LevelStorageSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelStorageSource() /*override*/;

    virtual ::std::string const& getName() const = 0;

    virtual ::Bedrock::Result<bool> getLevelData(::std::string const& levelId, ::LevelData& levelDataOut) const = 0;

    virtual void saveLevelData(::std::string const& levelId, ::LevelData const& data) = 0;

    virtual void getLevelList(::std::vector<::Core::PathBuffer<::std::string>>& paths) = 0;

    virtual ::Bedrock::UniqueOwnerPointer<::LevelStorage> createLevelStorage(
        ::Scheduler&                                                      scheduler,
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::chrono::nanoseconds const&                                 writeFlushInterval,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                       levelDbEnv,
        ::std::unique_ptr<::LevelStorageEventing>                         levelStorageEventing
    ) = 0;

    virtual ::std::unique_ptr<::LevelLooseFileStorage> createLevelLooseStorage(
        ::std::string const&                                              levelId,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) = 0;

    virtual void deleteLevel(::std::string const& levelId) = 0;

    virtual bool renameLevel(::std::string const& levelId, ::std::string const& newLevelName) = 0;

    virtual void
    renameLevel(::LevelData& levelData, ::Core::Path const& fullPath, ::std::string const& newLevelName) = 0;

    virtual bool createBackupCopyOfWorld(
        ::std::string const& levelId,
        ::std::string const& newLeveId,
        ::std::string const& newName
    ) = 0;

    virtual bool isLevelMarkedForSync(::Core::Path const& levelPath) const = 0;

    virtual bool isLevelPartiallyCopied(::Core::Path const& levelPath) const = 0;

    virtual ::Core::PathBuffer<::std::string> getLevelDatFoundPath(::Core::Path const& levelPath) const = 0;

    virtual ::Core::PathBuffer<::std::string> const getBasePath() const = 0;

    virtual ::Core::PathBuffer<::std::string> const getPathToLevel(::std::string const& levelId) const = 0;

    virtual ::Core::PathBuffer<::std::string> const getPathToLevelInfo(::std::string const&, bool) const = 0;

    virtual ::std::string getLevelIdFromPath(::Core::Path const& fullPath, ::Core::Path const& worldsPath) const = 0;

    virtual bool isBetaRetailLevel(::std::string const&) const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::chrono::nanoseconds const& WORLD_SAVE_FLUSH_INTERVAL();

    MCNAPI static ::std::chrono::nanoseconds const& WORLD_SAVE_MENU_FLUSH_INTERVAL();
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
