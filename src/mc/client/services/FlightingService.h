#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"
#include "mc/client/services/flighting/TagType.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace flighting { class IFlightReader; }
namespace flighting { struct ConfigurationToggles; }
namespace flighting { struct TreatmentToggles; }
// clang-format on

class FlightingService : public ::ServiceClient, public ::std::enable_shared_from_this<::FlightingService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdca36e;
    ::ll::UntypedStorage<8, 8>  mUnkcaf89c;
    ::ll::UntypedStorage<8, 32> mUnk470d56;
    ::ll::UntypedStorage<8, 32> mUnk63fa6d;
    ::ll::UntypedStorage<8, 32> mUnkf3fb41;
    ::ll::UntypedStorage<8, 24> mUnk777e87;
    ::ll::UntypedStorage<8, 16> mUnka54c9d;
    ::ll::UntypedStorage<8, 16> mUnkdb9034;
    ::ll::UntypedStorage<8, 8>  mUnkd6ac3d;
    ::ll::UntypedStorage<8, 8>  mUnkc0023e;
    ::ll::UntypedStorage<8, 8>  mUnk4d344d;
    ::ll::UntypedStorage<1, 1>  mUnkf27daa;
    ::ll::UntypedStorage<8, 16> mUnkc9df62;
    ::ll::UntypedStorage<8, 16> mUnk7b74cc;
    ::ll::UntypedStorage<8, 16> mUnk68e627;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingService& operator=(FlightingService const&);
    FlightingService(FlightingService const&);
    FlightingService();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~FlightingService() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FlightingService() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C FlightingService(
        ::IMinecraftEventing& eventing,
        ::Core::Path const&   cacheLocation,
        ::std::string const&  clientId,
        bool
    );

    MCNAPI_C FlightingService(
        ::IMinecraftEventing&                                                           eventing,
        ::std::shared_ptr<::flighting::ConfigurationToggles>                            configurations,
        ::std::shared_ptr<::flighting::TreatmentToggles>                                treatments,
        ::Core::Path const&                                                             cacheLocation,
        ::std::string                                                                   clientID,
        ::std::function<::ServiceRegistrationToken<::FlightingService>()> const&        registerToken,
        ::brstd::function_ref<::ServiceRegistrationToken<::flighting::IFlightReader>()> registerFlightReader,
        ::Core::FileSystem&                                                             fileSystem
    );

    MCNAPI_C void getCurrentTagsByTagTypeAsync(
        ::flighting::TagType                                       tagType,
        ::std::function<void(::std::vector<::std::string> const&)> callback
    );

    MCNAPI_C ::Bedrock::PubSub::Subscription monitorTagsByTagType(
        ::flighting::TagType const&                                tagType,
        ::std::function<void(::std::vector<::std::string> const&)> callback
    );

    MCNAPI_C ::Bedrock::PubSub::Subscription
    monitorTreatments(::std::function<void(::std::vector<::std::string> const&)> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void*
    $ctor(::IMinecraftEventing& eventing, ::Core::Path const& cacheLocation, ::std::string const& clientId, bool);

    MCNAPI_C void* $ctor(
        ::IMinecraftEventing&                                                           eventing,
        ::std::shared_ptr<::flighting::ConfigurationToggles>                            configurations,
        ::std::shared_ptr<::flighting::TreatmentToggles>                                treatments,
        ::Core::Path const&                                                             cacheLocation,
        ::std::string                                                                   clientID,
        ::std::function<::ServiceRegistrationToken<::FlightingService>()> const&        registerToken,
        ::brstd::function_ref<::ServiceRegistrationToken<::flighting::IFlightReader>()> registerFlightReader,
        ::Core::FileSystem&                                                             fileSystem
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
