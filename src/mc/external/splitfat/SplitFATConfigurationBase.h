#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/splitfat/ErrorCode.h"

// auto generated forward declare list
// clang-format off
namespace SFAT { class DataPlacementStrategyBase; }
namespace SFAT { class FileHandle; }
namespace SFAT { class VirtualFileSystem; }
namespace SFAT { class VolumeManager; }
// clang-format on

namespace SFAT {

class SplitFATConfigurationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk92cffc;
    ::ll::UntypedStorage<8, 16> mUnke39f89;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitFATConfigurationBase& operator=(SplitFATConfigurationBase const&);
    SplitFATConfigurationBase(SplitFATConfigurationBase const&);
    SplitFATConfigurationBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SplitFATConfigurationBase() = default;

    // vIndex: 1
    virtual ::SFAT::ErrorCode shutdown() = 0;

    // vIndex: 2
    virtual ::SFAT::ErrorCode create() = 0;

    // vIndex: 3
    virtual ::SFAT::ErrorCode open() = 0;

    // vIndex: 4
    virtual ::SFAT::ErrorCode close() = 0;

    // vIndex: 5
    virtual ::SFAT::FileHandle getClusterDataFile(int) const = 0;

    // vIndex: 6
    virtual ::SFAT::FileHandle getFATDataFile(int) const = 0;

    // vIndex: 7
    virtual ::SFAT::ErrorCode remove() = 0;

    // vIndex: 8
    virtual ::SFAT::ErrorCode flushFATDataFile() = 0;

    // vIndex: 9
    virtual ::SFAT::ErrorCode flushClusterDataFile() = 0;

    // vIndex: 10
    virtual ::SFAT::ErrorCode allocateDataBlock(::SFAT::VolumeManager&, uint) = 0;

    // vIndex: 11
    virtual ::SFAT::ErrorCode defragmentationOnTransactionEnd();

    // vIndex: 12
    virtual bool clusterDataFileExists() const = 0;

    // vIndex: 13
    virtual bool fatDataFileExists() const = 0;

    // vIndex: 14
    virtual ::SFAT::ErrorCode
    createDataPlacementStrategy(::std::shared_ptr<::SFAT::DataPlacementStrategyBase>&, ::SFAT::VolumeManager&, ::SFAT::VirtualFileSystem&) = 0;

    // vIndex: 15
    virtual bool isTransactionSupported() const;

    // vIndex: 16
    virtual ::SFAT::ErrorCode createTransactionFiles();

    // vIndex: 17
    virtual ::SFAT::ErrorCode tryOpenDirectoryTransactionFile(::SFAT::FileHandle&);

    // vIndex: 18
    virtual ::SFAT::ErrorCode tryOpenDataTransactionFile(::SFAT::FileHandle&);

    // vIndex: 19
    virtual ::SFAT::ErrorCode cleanupDirectoryTransactionFile();

    // vIndex: 20
    virtual ::SFAT::ErrorCode cleanupDataTransactionFile();

    // vIndex: 21
    virtual ::SFAT::ErrorCode cleanupTempTransactionFile();

    // vIndex: 22
    virtual ::SFAT::ErrorCode finalizeTransactionFile();

    // vIndex: 23
    virtual void getTempTransactionFile(::SFAT::FileHandle&) const;

    // vIndex: 24
    virtual void getDirectoryTransactionFile(::SFAT::FileHandle&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace SFAT
