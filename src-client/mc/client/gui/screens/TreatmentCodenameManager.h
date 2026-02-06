#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct FlightingService;
struct RealmsAPI;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class TreatmentCodenameManager : public ::std::enable_shared_from_this<::TreatmentCodenameManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                   mCodenameString;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTreatmentsMonitorSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsFeatureFlagsMonitorSubscription;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::std::string_view), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                            mCodenameUpdatedPublisher;
    ::ll::TypedStorage<1, 1, bool>                          mDisableLocalizationForTesting;
    ::ll::TypedStorage<1, 1, bool>                          mShowActualTreatmentName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mRealmsFeatureFlags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mTreatments;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _generateCodenames(
        ::std::vector<::std::string> const& treatments,
        ::std::vector<::std::string>&       codenamesInUse,
        ::std::stringstream&                inoutStream
    );

    MCAPI void generateNewCodenames(
        ::std::vector<::std::string> const& realmFeatures,
        ::std::vector<::std::string> const& treatments
    );

    MCAPI ::Bedrock::PubSub::Subscription
    registerCodenameUpdatedListener(::std::function<void(::std::string_view)> callback);

    MCAPI void registerRealmsFeatureNamesListener(::RealmsAPI& realmsAPI);

    MCAPI void registerTreatmentsListener(::std::weak_ptr<::FlightingService> flightingService);
    // NOLINTEND
};
