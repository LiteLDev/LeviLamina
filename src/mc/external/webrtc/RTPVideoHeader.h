#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoFrameMetadata; }
// clang-format on

namespace webrtc {

struct RTPVideoHeader {
public:
    // RTPVideoHeader inner types declare
    // clang-format off
    struct GenericDescriptorInfo;
    // clang-format on

    // RTPVideoHeader inner types define
    struct GenericDescriptorInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkb78a21;
        ::ll::UntypedStorage<4, 4>  mUnka9dd22;
        ::ll::UntypedStorage<4, 4>  mUnkaf802a;
        ::ll::UntypedStorage<8, 48> mUnkda409e;
        ::ll::UntypedStorage<8, 48> mUnkff5afc;
        ::ll::UntypedStorage<8, 24> mUnk460c95;
        ::ll::UntypedStorage<4, 4>  mUnk321c74;
        // NOLINTEND

    public:
        // prevent constructor by default
        GenericDescriptorInfo& operator=(GenericDescriptorInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI GenericDescriptorInfo();

        MCAPI GenericDescriptorInfo(::webrtc::RTPVideoHeader::GenericDescriptorInfo const&);

        MCAPI ~GenericDescriptorInfo();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();

        MCAPI void* $ctor(::webrtc::RTPVideoHeader::GenericDescriptorInfo const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>  mUnk3cb320;
    ::ll::UntypedStorage<4, 4>    mUnkb1b226;
    ::ll::UntypedStorage<2, 2>    mUnka07291;
    ::ll::UntypedStorage<2, 2>    mUnkd1fa85;
    ::ll::UntypedStorage<4, 4>    mUnk9b7a4d;
    ::ll::UntypedStorage<1, 1>    mUnk7fdd5e;
    ::ll::UntypedStorage<1, 1>    mUnk933240;
    ::ll::UntypedStorage<1, 1>    mUnk70f247;
    ::ll::UntypedStorage<1, 1>    mUnk640215;
    ::ll::UntypedStorage<1, 1>    mUnkd73807;
    ::ll::UntypedStorage<4, 4>    mUnk41dcb3;
    ::ll::UntypedStorage<8, 24>   mUnkc01752;
    ::ll::UntypedStorage<2, 14>   mUnk3e85a5;
    ::ll::UntypedStorage<4, 72>   mUnk424e76;
    ::ll::UntypedStorage<2, 4>    mUnkc85a99;
    ::ll::UntypedStorage<8, 1648> mUnkb3a15e;
    ::ll::UntypedStorage<8, 32>   mUnk66255c;
    // NOLINTEND

public:
    // prevent constructor by default
    RTPVideoHeader& operator=(RTPVideoHeader const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::VideoFrameMetadata GetAsMetadata() const;

    MCAPI RTPVideoHeader();

    MCAPI RTPVideoHeader(::webrtc::RTPVideoHeader const&);

    MCAPI void SetFromMetadata(::webrtc::VideoFrameMetadata const&);

    MCAPI ~RTPVideoHeader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::RTPVideoHeader FromMetadata(::webrtc::VideoFrameMetadata const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::RTPVideoHeader const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
