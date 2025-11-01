#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct HdrMetadata; }
// clang-format on

namespace webrtc {

class ColorSpace {
public:
    // ColorSpace inner types define
    enum class PrimaryID : uchar {
        KBT709 = 1,
        KUnspecified = 2,
        KBT470M = 4,
        KBT470BG = 5,
        KSMPTE170M = 6,
        KSMPTE240M = 7,
        KFILM = 8,
        KBT2020 = 9,
        KSMPTEST428 = 10,
        KSMPTEST431 = 11,
        KSMPTEST432 = 12,
        KJEDECP22 = 22,
    };
    
    enum class TransferID : uchar {
        KBT709 = 1,
        KUnspecified = 2,
        KGAMMA22 = 4,
        KGAMMA28 = 5,
        KSMPTE170M = 6,
        KSMPTE240M = 7,
        KLINEAR = 8,
        KLOG = 9,
        KLOGSqrt = 10,
        KIEC61966_2_4 = 11,
        KBT1361Ecg = 12,
        KIEC61966_2_1 = 13,
        KBT2020_10 = 14,
        KBT2020_12 = 15,
        KSMPTEST2084 = 16,
        KSMPTEST428 = 17,
        KARIBStdB67 = 18,
    };
    
    enum class MatrixID : uchar {
        KRGB = 0,
        KBT709 = 1,
        KUnspecified = 2,
        KFCC = 4,
        KBT470BG = 5,
        KSMPTE170M = 6,
        KSMPTE240M = 7,
        KYCOCG = 8,
        KBT2020Ncl = 9,
        KBT2020Cl = 10,
        KSMPTE2085 = 11,
        KCDNCLS = 12,
        KCDCLS = 13,
        KBT2100Ictcp = 14,
    };
    
    enum class RangeID : int {
        KInvalid = 0,
        KLimited = 1,
        KFull = 2,
        KDerived = 3,
    };
    
    enum class ChromaSiting : int {
        KUnspecified = 0,
        KCollocated = 1,
        KHalf = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk16a997;
    ::ll::UntypedStorage<1, 1> mUnkcfb7d0;
    ::ll::UntypedStorage<1, 1> mUnkdfee8d;
    ::ll::UntypedStorage<4, 4> mUnk97e179;
    ::ll::UntypedStorage<4, 4> mUnka003e1;
    ::ll::UntypedStorage<4, 4> mUnkcfbdd9;
    ::ll::UntypedStorage<4, 52> mUnk169ee2;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorSpace();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ColorSpace(::webrtc::ColorSpace&&);

    MCNAPI ColorSpace(::webrtc::ColorSpace const&);

    MCNAPI ::webrtc::ColorSpace::ChromaSiting chroma_siting_horizontal() const;

    MCNAPI ::webrtc::ColorSpace::ChromaSiting chroma_siting_vertical() const;

    MCNAPI ::webrtc::HdrMetadata const* hdr_metadata() const;

    MCNAPI ::webrtc::ColorSpace::MatrixID matrix() const;

    MCNAPI ::webrtc::ColorSpace& operator=(::webrtc::ColorSpace const&);

    MCNAPI ::webrtc::ColorSpace::PrimaryID primaries() const;

    MCNAPI ::webrtc::ColorSpace::RangeID range() const;

    MCNAPI ::webrtc::ColorSpace::TransferID transfer() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::ColorSpace&&);

    MCNAPI void* $ctor(::webrtc::ColorSpace const&);
    // NOLINTEND

};

}
