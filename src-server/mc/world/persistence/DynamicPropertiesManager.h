#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DynamicProperties;
class ILevelStorageManagerConnector;
class LevelStorage;
// clang-format on

class DynamicPropertiesManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkde8f1d;
    ::ll::UntypedStorage<4, 4> mUnke0cd59;
    ::ll::UntypedStorage<8, 16> mUnk3126ff;
    ::ll::UntypedStorage<8, 8> mUnkf1bef4;
    ::ll::UntypedStorage<8, 24> mUnk52c501;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicPropertiesManager& operator=(DynamicPropertiesManager const&);
    DynamicPropertiesManager(DynamicPropertiesManager const&);
    DynamicPropertiesManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DynamicProperties& getOrAddLevelDynamicProperties();

    MCNAPI void readFromLevelStorage(::LevelStorage& levelStorage);

    MCNAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCNAPI void writeToLevelStorage(::LevelStorage& levelStorage);

    MCNAPI ~DynamicPropertiesManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
