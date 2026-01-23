#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

class UWPMigrationManager {
public:
    // UWPMigrationManager inner types declare
    // clang-format off
    struct MoveOperation;
    struct OperationResult;
    struct MoveDirectoryOperation;
    struct MoveFileOperation;
    struct MoveSecureStorageOperation;
    // clang-format on

    // UWPMigrationManager inner types define
    enum class Status : int {
        None           = 0,
        Success        = 1,
        Migrationerror = 2,
        Criticalerror  = 3,
    };

    struct MoveOperation {
    public:
        // MoveOperation inner types define
        enum class Type : int {
            File          = 0,
            Directory     = 1,
            SecureStorage = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk99cb0a;
        ::ll::UntypedStorage<1, 1>  mUnk5dcea8;
        ::ll::UntypedStorage<8, 32> mUnkc44eb6;
        ::ll::UntypedStorage<8, 32> mUnk53541f;
        ::ll::UntypedStorage<4, 4>  mUnk459421;
        // NOLINTEND

    public:
        // prevent constructor by default
        MoveOperation& operator=(MoveOperation const&);
        MoveOperation(MoveOperation const&);
        MoveOperation();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~MoveOperation();

        virtual ::Core::Result migrate(bool) const = 0;

        virtual void cleanup() const = 0;
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

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct OperationResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk71c09f;
        ::ll::UntypedStorage<1, 1> mUnkd9e5e5;
        // NOLINTEND

    public:
        // prevent constructor by default
        OperationResult& operator=(OperationResult const&);
        OperationResult(OperationResult const&);
        OperationResult();
    };

    struct MoveDirectoryOperation : public ::UWPMigrationManager::MoveOperation {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::Core::Result migrate(bool forceCritical) const /*override*/;

        virtual void cleanup() const /*override*/;

        virtual ~MoveDirectoryOperation() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Core::Result $migrate(bool forceCritical) const;

        MCNAPI void $cleanup() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct MoveFileOperation : public ::UWPMigrationManager::MoveOperation {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::Core::Result migrate(bool forceCritical) const /*override*/;

        virtual void cleanup() const /*override*/;

        virtual ~MoveFileOperation() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Core::Result $migrate(bool forceCritical) const;

        MCNAPI void $cleanup() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct MoveSecureStorageOperation : public ::UWPMigrationManager::MoveOperation {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::Core::Result migrate(bool) const /*override*/;

        virtual void cleanup() const /*override*/;

        virtual ~MoveSecureStorageOperation() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::Core::Result $migrate(bool) const;

        MCNAPI void $cleanup() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk806ad7;
    ::ll::UntypedStorage<8, 32> mUnk3a354c;
    ::ll::UntypedStorage<8, 32> mUnk2524e5;
    ::ll::UntypedStorage<4, 4>  mUnk26a1a9;
    ::ll::UntypedStorage<8, 24> mUnk113a50;
    // NOLINTEND

public:
    // prevent constructor by default
    UWPMigrationManager& operator=(UWPMigrationManager const&);
    UWPMigrationManager(UWPMigrationManager const&);
    UWPMigrationManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UWPMigrationManager(
        ::Core::PathBuffer<::std::string> const& externalStoragePath,
        ::Core::PathBuffer<::std::string> const& userStorageRootPath,
        ::Core::PathBuffer<::std::string> const& logsPath,
        ::Core::PathBuffer<::std::string> const& uwpInstallationPath
    );

    MCNAPI ::Core::PathBuffer<::std::string> getMigrationFilePath() const;

    MCNAPI ::Bedrock::Result<void> migrateFromUWP();

    MCNAPI ~UWPMigrationManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string getLastMigrationErrorsAsJson();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string& sErrors();

    MCNAPI static ::std::string_view const& sLogsFileName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::PathBuffer<::std::string> const& externalStoragePath,
        ::Core::PathBuffer<::std::string> const& userStorageRootPath,
        ::Core::PathBuffer<::std::string> const& logsPath,
        ::Core::PathBuffer<::std::string> const& uwpInstallationPath
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
