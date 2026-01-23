#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ContentSource.h"

namespace cricket {

class RtcpMuxFilter {
public:
    // RtcpMuxFilter inner types define
    enum class State : int {
        Init             = 0,
        Receivedoffer    = 1,
        Sentoffer        = 2,
        Sentpranswer     = 3,
        Receivedpranswer = 4,
        Active           = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk517183;
    ::ll::UntypedStorage<1, 1> mUnk702653;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcpMuxFilter& operator=(RtcpMuxFilter const&);
    RtcpMuxFilter(RtcpMuxFilter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool IsActive() const;

    MCNAPI RtcpMuxFilter();

    MCNAPI bool SetAnswer(bool answer_enable, ::cricket::ContentSource src);

    MCNAPI bool SetOffer(bool offer_enable, ::cricket::ContentSource src);

    MCNAPI bool SetProvisionalAnswer(bool answer_enable, ::cricket::ContentSource src);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace cricket
