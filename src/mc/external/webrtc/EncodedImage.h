#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class EncodedImage {
public:
    // EncodedImage inner types declare
    // clang-format off
    struct Psnr;
    struct Timing;
    // clang-format on

    // EncodedImage inner types define
    struct Psnr {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk9c3501;
        ::ll::UntypedStorage<8, 8> mUnk6da1c9;
        ::ll::UntypedStorage<8, 8> mUnk86d088;
        // NOLINTEND

    public:
        // prevent constructor by default
        Psnr& operator=(Psnr const&);
        Psnr(Psnr const&);
        Psnr();
    };

    struct Timing {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk11cd84;
        ::ll::UntypedStorage<8, 8> mUnke0be10;
        ::ll::UntypedStorage<8, 8> mUnkd0fcf4;
        ::ll::UntypedStorage<8, 8> mUnk84c243;
        ::ll::UntypedStorage<8, 8> mUnk2efacd;
        ::ll::UntypedStorage<8, 8> mUnk6a9172;
        ::ll::UntypedStorage<8, 8> mUnkcf532c;
        ::ll::UntypedStorage<8, 8> mUnkc94b43;
        ::ll::UntypedStorage<8, 8> mUnkb51663;
        // NOLINTEND

    public:
        // prevent constructor by default
        Timing& operator=(Timing const&);
        Timing(Timing const&);
        Timing();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk60dc35;
    ::ll::UntypedStorage<4, 4>  mUnk3caf61;
    ::ll::UntypedStorage<8, 8>  mUnke04f1a;
    ::ll::UntypedStorage<8, 8>  mUnk9e709e;
    ::ll::UntypedStorage<4, 4>  mUnkc71607;
    ::ll::UntypedStorage<4, 4>  mUnk981d02;
    ::ll::UntypedStorage<1, 1>  mUnk38c7f9;
    ::ll::UntypedStorage<4, 4>  mUnk937b0c;
    ::ll::UntypedStorage<8, 72> mUnkea9ff2;
    ::ll::UntypedStorage<8, 24> mUnk71f955;
    ::ll::UntypedStorage<8, 8>  mUnkf54889;
    ::ll::UntypedStorage<8, 8>  mUnk80115a;
    ::ll::UntypedStorage<4, 4>  mUnke01019;
    ::ll::UntypedStorage<4, 8>  mUnk227a5e;
    ::ll::UntypedStorage<8, 16> mUnk1ee0f6;
    ::ll::UntypedStorage<4, 8>  mUnk83aaff;
    ::ll::UntypedStorage<4, 8>  mUnk5d7896;
    ::ll::UntypedStorage<8, 16> mUnk2acd68;
    ::ll::UntypedStorage<4, 72> mUnka18a6a;
    ::ll::UntypedStorage<2, 4>  mUnkc3eb0c;
    ::ll::UntypedStorage<8, 8>  mUnk917932;
    ::ll::UntypedStorage<1, 1>  mUnkedf20d;
    ::ll::UntypedStorage<1, 1>  mUnkc98a8e;
    ::ll::UntypedStorage<1, 1>  mUnk3b4d67;
    ::ll::UntypedStorage<8, 24> mUnke79c44;
    ::ll::UntypedStorage<8, 32> mUnk9c7b81;
    // NOLINTEND

public:
    // prevent constructor by default
    EncodedImage& operator=(EncodedImage const&);
    EncodedImage(EncodedImage const&);
    EncodedImage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::Timestamp CaptureTime() const;
    // NOLINTEND
};

} // namespace webrtc
