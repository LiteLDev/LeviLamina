#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/NameIdStore.h"
#include "mc/world/level/IDimensionManagerConnector.h"
#include "mc/world/level/dimension/DimensionDefinitionGroup.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class DimensionRegistry;
class IDimensionFactory;
class ILevelStorageManagerConnector;
struct DimensionIdType;
struct DimensionType;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on
class IDimensionFactory;

class DimensionManager : public ::IDimensionManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Util::NameIdStore<::DimensionIdType>>>>
                                                                                        mDimensionNameIdStore;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::DimensionRegistry>>>   mDimensionRegistry;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> const> mDimensionFactory;
    ::ll::TypedStorage<8, 16, ::DimensionDefinitionGroup>                               mDimensionDefinitionGroup;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::DimensionManager&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnReadyForCustomDimensionRegistrationPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Dimension&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnNewDimensionCreatedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageStartLeaveGameSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DimensionManager() = default;

    virtual ::Bedrock::PubSub::Connector<void(::DimensionManager&)>&
    getOnReadyForCustomDimensionRegistrationConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::Dimension&)>& getOnNewDimensionCreatedConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DimensionManager(::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> dimensionFactory);

#ifdef LL_PLAT_C
    MCAPI DimensionManager(
        ::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> dimensionFactory,
        ::DimensionDefinitionGroup                         dimensionDefinitions
    );
#endif

    MCAPI bool _registerCustomDimensionWithDimensionDefinitionGroup(::std::string_view name, ::DimensionType type);

    MCAPI void _registerCustomDimensionWithFactory(::std::string_view name, ::DimensionType type);

    MCFOLD void forEachDimension(::std::function<bool(::Dimension&)> callback);

    MCFOLD void forEachDimension(::std::function<bool(::Dimension const&)> callback) const;

    MCAPI ::WeakRef<::Dimension> getDimension(::DimensionType dimensionType) const;

    MCAPI ::WeakRef<::Dimension> getOrCreateDimension(::std::string_view dimensionName);

    MCAPI ::WeakRef<::Dimension> getOrCreateDimension(::DimensionType dimensionType);

    MCAPI void serverInitialize(
        ::ILevelStorageManagerConnector& levelStorageManagerConnector,
        ::DimensionDefinitionGroup       dimensionDefinitionGroup
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> dimensionFactory);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> dimensionFactory,
        ::DimensionDefinitionGroup                         dimensionDefinitions
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
