#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class ILevelListCache;
class IResourcePackRepository;
class LevelData;
class Scheduler;
namespace mce { class UUID; }
// clang-format on

namespace Editor {

class ProjectConverter : public ::FileArchiver::IWorldConverter {
public:
    // ProjectConverter inner types declare
    // clang-format off
    struct ExportConversionData;
    // clang-format on

    // ProjectConverter inner types define
    struct ExportConversionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkd2cc4b;
        ::ll::UntypedStorage<8, 8>  mUnk407f1d;
        ::ll::UntypedStorage<8, 16> mUnkd2600a;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExportConversionData& operator=(ExportConversionData const&);
        ExportConversionData(ExportConversionData const&);
        ExportConversionData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk510001;
    ::ll::UntypedStorage<8, 8>  mUnk77ffb6;
    ::ll::UntypedStorage<8, 24> mUnk1acc17;
    ::ll::UntypedStorage<8, 24> mUnkc7a3bd;
    ::ll::UntypedStorage<8, 8>  mUnk4fc66b;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectConverter& operator=(ProjectConverter const&);
    ProjectConverter(ProjectConverter const&);
    ProjectConverter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ProjectConverter() /*override*/;

    // vIndex: 1
    virtual void enqueueConvertImportingWorldTasks(
        ::std::shared_ptr<::FileArchiver::Result>&                      sharedResult,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter> progress,
        ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>&    prevTaskHandle
    ) /*override*/;

    // vIndex: 2
    virtual bool shouldCopyWorldForConversion(::std::string const& levelId) const /*override*/;

    // vIndex: 3
    virtual void enqueueConvertExportingWorldTasks(
        ::std::shared_ptr<::FileArchiver::ExportData>&                  exportData,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter> progress,
        ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>&    prevTaskHandle,
        ::std::function<void(::LevelData&)>                             preExportCallback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProjectConverter(
        ::ILevelListCache&                                              levelListCache,
        ::Scheduler&                                                    scheduler,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>      keyProvider
    );

    MCNAPI void _fixupPackHistoryFile(
        ::Core::PathBuffer<::std::string> const& filePath,
        ::std::unordered_set<::mce::UUID> const& packsToRemove
    ) const;

    MCNAPI void _fixupPacksFile(
        ::Core::PathBuffer<::std::string> const& filePath,
        ::std::unordered_set<::mce::UUID> const& packsToRemove
    ) const;

    MCNAPI ::Core::PathBuffer<::std::string> _getLevelFolder(::std::string const& levelId) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& WORLD_BEHAVIOR_PACKS_FILE();

    MCNAPI static ::std::string const& WORLD_RESOURCE_PACKS_FILE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ILevelListCache&                                              levelListCache,
        ::Scheduler&                                                    scheduler,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>      keyProvider
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $enqueueConvertImportingWorldTasks(
        ::std::shared_ptr<::FileArchiver::Result>&                      sharedResult,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter> progress,
        ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>&    prevTaskHandle
    );

    MCNAPI bool $shouldCopyWorldForConversion(::std::string const& levelId) const;

    MCNAPI void $enqueueConvertExportingWorldTasks(
        ::std::shared_ptr<::FileArchiver::ExportData>&                  exportData,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter> progress,
        ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>&    prevTaskHandle,
        ::std::function<void(::LevelData&)>                             preExportCallback
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor
