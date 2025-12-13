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
    ::ll::UntypedStorage<8, 32>  mUnk4fafae;
    ::ll::UntypedStorage<8, 32>  mUnkcce7e7;
    ::ll::UntypedStorage<4, 4>   mUnk180685;
    ::ll::UntypedStorage<8, 8>   mUnk875a0a;
    ::ll::UntypedStorage<1, 1>   mUnke34628;
    ::ll::UntypedStorage<8, 24>  mUnk7ac4d5;
    ::ll::UntypedStorage<8, 64>  mUnkaa09a6;
    ::ll::UntypedStorage<8, 336> mUnk84517e;
    ::ll::UntypedStorage<8, 56>  mUnk6ade59;
    ::ll::UntypedStorage<8, 16>  mUnkfac924;
    // NOLINTEND

public:
    // prevent constructor by default
    EduMultiplayerHeadlessHost& operator=(EduMultiplayerHeadlessHost const&);
    EduMultiplayerHeadlessHost(EduMultiplayerHeadlessHost const&);
    EduMultiplayerHeadlessHost();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduMultiplayerHeadlessHost() /*override*/ = default;

    virtual void hostServer() /*override*/;

    virtual ::Social::EduJoinerResponse tryAcceptJoiner(::std::string const&, ::std::string const&) /*override*/;

    virtual ::std::string getHostToJoinerNonce(::std::string const&) const /*override*/;

    virtual ::Bedrock::Threading::Async<void> onNextFetchJoiners() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social
