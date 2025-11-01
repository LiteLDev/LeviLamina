#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaSenderInfo.h"

namespace cricket {

struct VideoSenderInfo : public ::cricket::MediaSenderInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk22548d;
    ::ll::UntypedStorage<8, 40> mUnk9b2e2c;
    ::ll::UntypedStorage<4, 4> mUnkea1849;
    ::ll::UntypedStorage<4, 4> mUnkfdf173;
    ::ll::UntypedStorage<4, 4> mUnk9c849f;
    ::ll::UntypedStorage<4, 4> mUnk45e1b0;
    ::ll::UntypedStorage<4, 4> mUnk822e3d;
    ::ll::UntypedStorage<8, 8> mUnkf82591;
    ::ll::UntypedStorage<4, 4> mUnk85be67;
    ::ll::UntypedStorage<4, 4> mUnke9ea62;
    ::ll::UntypedStorage<4, 4> mUnka21191;
    ::ll::UntypedStorage<4, 4> mUnkfac611;
    ::ll::UntypedStorage<4, 4> mUnk4c10b8;
    ::ll::UntypedStorage<4, 4> mUnk2197ac;
    ::ll::UntypedStorage<8, 16> mUnk37bc61;
    ::ll::UntypedStorage<4, 4> mUnkc177b2;
    ::ll::UntypedStorage<4, 4> mUnk621e63;
    ::ll::UntypedStorage<4, 4> mUnk572e27;
    ::ll::UntypedStorage<4, 4> mUnkeb37b8;
    ::ll::UntypedStorage<4, 4> mUnk2eea21;
    ::ll::UntypedStorage<8, 8> mUnkc52137;
    ::ll::UntypedStorage<8, 8> mUnkcfa72c;
    ::ll::UntypedStorage<1, 1> mUnk127374;
    ::ll::UntypedStorage<8, 16> mUnk923ec1;
    ::ll::UntypedStorage<1, 1> mUnkec3331;
    ::ll::UntypedStorage<4, 4> mUnk861749;
    ::ll::UntypedStorage<4, 4> mUnkc47afa;
    ::ll::UntypedStorage<4, 4> mUnk5887a3;
    ::ll::UntypedStorage<8, 40> mUnk74091c;
    ::ll::UntypedStorage<1, 2> mUnk5f9966;
    ::ll::UntypedStorage<1, 2> mUnka9dd6e;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoSenderInfo& operator=(VideoSenderInfo const&);
    VideoSenderInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoSenderInfo(::cricket::VideoSenderInfo const&);

    MCNAPI ~VideoSenderInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::VideoSenderInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
