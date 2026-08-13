#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/options/EducationServicesEnvironment.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/social/EduJoinerResponse.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct EduAddServerResponse; }
namespace Social { struct EduDedicatedServerDetails; }
namespace Social { struct EduFetchServersResponse; }
namespace Social { struct EduFetchTenantSettingsResponse; }
namespace Social { struct EduHeadlessConnectionHandshake; }
namespace Social { struct EduJoinServerResponse; }
// clang-format on

namespace Social {

class IEduMultiplayerHeadless : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IEduMultiplayerHeadless inner types define
    enum class ServerHealth : int {
        Unknown = -1,
        Poor    = 0,
        Mid     = 1,
        Good    = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void hostServer();

#ifdef LL_PLAT_S
    virtual ::Social::EduJoinerResponse tryAcceptJoiner(::std::string const&, ::std::string const&);
#else // LL_PLAT_C
    virtual ::Social::EduJoinerResponse
    tryAcceptJoiner(::std::string const& sessionToken, ::std::string const& joinerToHostNonce);
#endif

#ifdef LL_PLAT_S
    virtual ::std::string getHostToJoinerNonce(::std::string const&) const;
#else // LL_PLAT_C
    virtual ::std::string getHostToJoinerNonce(::std::string const& sessionToken) const;
#endif

    virtual ::Bedrock::Threading::Async<void> onNextFetchJoiners();

    virtual ::Bedrock::Threading::Async<::Social::EduFetchTenantSettingsResponse> requestTenantSettings();

    virtual ::Bedrock::Threading::Async<::Social::EduFetchServersResponse> requestBroadcastedServers();

    virtual ::Bedrock::Threading::Async<::Social::EduFetchServersResponse>
    requestServerInfo(::std::vector<::std::string> const& currentServerIds);

    virtual ::Bedrock::Threading::Async<::Social::EduAddServerResponse> requestAddServer(::std::string const& serverId);

    virtual ::Bedrock::Threading::Async<::Social::EduJoinServerResponse>
    requestJoinServer(::std::string const& serverId, ::std::string const& passcode);

    virtual void saveCachedServersToDisk(
        ::brstd::flat_map<
            ::std::string,
            ::Social::EduDedicatedServerDetails,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<::Social::EduDedicatedServerDetails>> const& servers
    );

    virtual ::brstd::flat_map<
        ::std::string,
        ::Social::EduDedicatedServerDetails,
        ::std::less<::std::string>,
        ::std::vector<::std::string>,
        ::std::vector<::Social::EduDedicatedServerDetails>>
    loadCachedServersFromDisk();

    virtual ::Social::EduHeadlessConnectionHandshake getHandshake() const;

    virtual ::std::string getHostIp() const;

    virtual int getHostPort() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::EducationServicesEnvironment& mCachedEnvironment();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $hostServer();

#ifdef LL_PLAT_S
    MCNAPI ::Social::EduJoinerResponse $tryAcceptJoiner(::std::string const&, ::std::string const&);
#else // LL_PLAT_C
    MCNAPI ::Social::EduJoinerResponse
    $tryAcceptJoiner(::std::string const& sessionToken, ::std::string const& joinerToHostNonce);
#endif

#ifdef LL_PLAT_S
    MCNAPI ::std::string $getHostToJoinerNonce(::std::string const&) const;
#else // LL_PLAT_C
    MCNAPI ::std::string $getHostToJoinerNonce(::std::string const& sessionToken) const;
#endif

    MCNAPI ::Bedrock::Threading::Async<void> $onNextFetchJoiners();

    MCNAPI ::Bedrock::Threading::Async<::Social::EduFetchTenantSettingsResponse> $requestTenantSettings();

    MCNAPI ::Bedrock::Threading::Async<::Social::EduFetchServersResponse> $requestBroadcastedServers();

    MCNAPI ::Bedrock::Threading::Async<::Social::EduFetchServersResponse>
    $requestServerInfo(::std::vector<::std::string> const& currentServerIds);

    MCNAPI ::Bedrock::Threading::Async<::Social::EduAddServerResponse> $requestAddServer(::std::string const& serverId);

    MCNAPI ::Bedrock::Threading::Async<::Social::EduJoinServerResponse>
    $requestJoinServer(::std::string const& serverId, ::std::string const& passcode);

    MCNAPI void $saveCachedServersToDisk(
        ::brstd::flat_map<
            ::std::string,
            ::Social::EduDedicatedServerDetails,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<::Social::EduDedicatedServerDetails>> const& servers
    );

    MCNAPI ::brstd::flat_map<
        ::std::string,
        ::Social::EduDedicatedServerDetails,
        ::std::less<::std::string>,
        ::std::vector<::std::string>,
        ::std::vector<::Social::EduDedicatedServerDetails>>
    $loadCachedServersFromDisk();

    MCNAPI ::Social::EduHeadlessConnectionHandshake $getHandshake() const;

    MCNAPI ::std::string $getHostIp() const;

    MCNAPI int $getHostPort() const;


    // NOLINTEND
};

} // namespace Social
