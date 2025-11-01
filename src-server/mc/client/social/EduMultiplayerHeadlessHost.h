#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/social/EduJoinerResponse.h"
#include "mc/social/IEduMultiplayerHeadless.h"

namespace Social {

class EduMultiplayerHeadlessHost : public ::Social::IEduMultiplayerHeadless {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4fafae;
    ::ll::UntypedStorage<8, 32> mUnkcce7e7;
    ::ll::UntypedStorage<4, 4> mUnk180685;
    ::ll::UntypedStorage<8, 8> mUnk875a0a;
    ::ll::UntypedStorage<1, 1> mUnke34628;
    ::ll::UntypedStorage<8, 24> mUnk7ac4d5;
    ::ll::UntypedStorage<8, 64> mUnkaa09a6;
    ::ll::UntypedStorage<8, 336> mUnk84517e;
    ::ll::UntypedStorage<8, 56> mUnk6ade59;
    ::ll::UntypedStorage<8, 16> mUnkfac924;
    // NOLINTEND

public:
    // prevent constructor by default
    EduMultiplayerHeadlessHost& operator=(EduMultiplayerHeadlessHost const&);
    EduMultiplayerHeadlessHost(EduMultiplayerHeadlessHost const&);
    EduMultiplayerHeadlessHost();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EduMultiplayerHeadlessHost() /*override*/ = default;

    // vIndex: 1
    virtual void hostServer() /*override*/;

    // vIndex: 2
    virtual ::Social::EduJoinerResponse tryAcceptJoiner(::std::string const&, ::std::string const&) /*override*/;

    // vIndex: 3
    virtual ::std::string getHostToJoinerNonce(::std::string const&) const /*override*/;

    // vIndex: 4
    virtual ::Bedrock::Threading::Async<void> onNextFetchJoiners() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
