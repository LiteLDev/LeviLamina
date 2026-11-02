#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DebuggerStat;
class DebuggerStatCollector;
class DynamicProperties;
class ILevelStorageManagerConnector;
class LevelStorage;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DynamicPropertiesManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                 mTotalBytesSaved;
    ::ll::TypedStorage<4, 4, int>                                    mWatchdogTick;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mOnSaveLevelDataSubscription;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DynamicProperties>> mLevelDynamicProperties;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCerealContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DebuggerStatCollector>>                    mMemoryStatCollector;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DebuggerStatCollector>>                    mPropertiesStatCollector;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicPropertiesManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DynamicPropertiesManager(::cereal::ReflectionCtx const& ctx);

    MCNAPI void _collectMemoryStats(::DebuggerStat& dynamicPropertiesStats);

    MCNAPI void _collectPropertiesStats(::DebuggerStat& dynamicProperties);

    MCNAPI ::DynamicProperties& getOrAddLevelDynamicProperties();

    MCNAPI void readFromLevelStorage(::LevelStorage& levelStorage);

    MCNAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCNAPI void writeToLevelStorage(::LevelStorage& levelStorage);

    MCNAPI ~DynamicPropertiesManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
