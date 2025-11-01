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
namespace Social { struct EduHeadlessConnectionHandshake; }
namespace Social { struct EduJoinServerResponse; }
// clang-format on

namespace Social {

class IEduMultiplayerHeadless : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IEduMultiplayerHeadless inner types define
    enum class ServerHealth : int {
        Unknown = -1,
        Poor = 0,
        Mid = 1,
        Good = 2,
    };
    
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void hostServer();

    // vIndex: 2
    virtual ::Social::EduJoinerResponse tryAcceptJoiner(::std::string const&, ::std::string const&);

    // vIndex: 3
    virtual ::std::string getHostToJoinerNonce(::std::string const&) const;

    // vIndex: 4
    virtual ::Bedrock::Threading::Async<void> onNextFetchJoiners();

    // vIndex: 5
    virtual ::Bedrock::Threading::Async<::Social::EduFetchServersResponse> requestBroadcastedServers();

    // vIndex: 6
    virtual ::Bedrock::Threading::Async<::Social::EduFetchServersResponse> requestServerInfo(::std::vector<::std::string> const&);

    // vIndex: 7
    virtual ::Bedrock::Threading::Async<::Social::EduAddServerResponse> requestAddServer(::std::string const&);

    // vIndex: 8
    virtual ::Bedrock::Threading::Async<::Social::EduJoinServerResponse> requestJoinServer(::std::string const&, ::std::string const&);

    // vIndex: 9
    virtual void saveCachedServersToDisk(::brstd::flat_map<::std::string, ::Social::EduDedicatedServerDetails, ::std::less<::std::string>, ::std::vector<::std::string>, ::std::vector<::Social::EduDedicatedServerDetails>> const&);

    // vIndex: 10
    virtual ::brstd::flat_map<::std::string, ::Social::EduDedicatedServerDetails, ::std::less<::std::string>, ::std::vector<::std::string>, ::std::vector<::Social::EduDedicatedServerDetails>> loadCachedServersFromDisk();

    // vIndex: 11
    virtual ::Social::EduHeadlessConnectionHandshake getHandshake() const;

    // vIndex: 12
    virtual ::std::string getHostIp() const;

    // vIndex: 13
    virtual int getHostPort() const;

    // vIndex: 0
    virtual ~IEduMultiplayerHeadless() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::EducationServicesEnvironment& mCachedEnvironment();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
