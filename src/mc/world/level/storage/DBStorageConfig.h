#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class LevelStorageEventing;
class SaveTransactionManager;
class Scheduler;
namespace Core { class FileStorageArea; }
// clang-format on

struct DBStorageConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                             scheduler;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                       fullPath;
    ::ll::TypedStorage<8, 32, ::std::string>                                           levelId;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                       dbSubfolder;
    ::ll::TypedStorage<8, 8, ::ContentIdentity const*>                                 contentIdentity;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IContentKeyProvider const>> keyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SaveTransactionManager>>    saveTransactionManager;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                               compactionInterval;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                               writeFlushInterval;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FileStorageArea>>              storageArea;
    ::ll::TypedStorage<1, 1, bool>                                                     enableCompactionListener;
    ::ll::TypedStorage<1, 1, bool>                                                     enableStorage;
    ::ll::TypedStorage<1, 1, bool>                                                     enableSnapshots;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelStorageEventing>>                levelStorageEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    DBStorageConfig& operator=(DBStorageConfig const&);
    DBStorageConfig(DBStorageConfig const&);
    DBStorageConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DBStorageConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
