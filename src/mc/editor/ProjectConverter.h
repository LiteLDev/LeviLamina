#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class ILevelListCache;
class IResourcePackRepository;
class Scheduler;
// clang-format on

namespace Editor {

class ProjectConverter : public ::FileArchiver::IWorldConverter {
public:
    // ProjectConverter inner types declare
    // clang-format off
    struct ExportConversionData;
    // clang-format on

    // ProjectConverter inner types define
    struct ExportConversionData {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb54ac5;
    ::ll::UntypedStorage<8, 8>  mUnk77ffb6;
    ::ll::UntypedStorage<8, 24> mUnk1acc17;
    ::ll::UntypedStorage<8, 24> mUnkc7a3bd;
    ::ll::UntypedStorage<8, 8>  mUnk7f5560;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectConverter& operator=(ProjectConverter const&);
    ProjectConverter(ProjectConverter const&);
    ProjectConverter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProjectConverter() /*override*/ = default;

    virtual void enqueueConvertImportingWorldTasks(
        ::std::shared_ptr<::FileArchiver::Result>&,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter>,
        ::Bedrock::Threading::Async<void>&
    ) /*override*/;

    virtual bool shouldCopyWorldForConversion(::std::string const&) const /*override*/;

    virtual void enqueueConvertExportingWorldTasks(
        ::std::shared_ptr<::FileArchiver::ExportData>&,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter>,
        ::Bedrock::Threading::Async<void>&,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>>,
        ::std::optional<::FileArchiver::WorldConverterExportSettings> const
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
