#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioFrame {
public:
    // AudioFrame inner types define
    enum class SpeechType : int {
        KNormalSpeech = 0,
        KPLC          = 1,
        KCNG          = 2,
        KPLCCNG       = 3,
        KCodecPLC     = 5,
        KUndefined    = 4,
    };

    enum class VADActivity : int {
        KVadActive  = 0,
        KVadPassive = 1,
        KVadUnknown = 2,
    };

    enum : uint64 {
        KMaxDataSizeSamples = 7680,
        KMaxDataSizeBytes   = 15360,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>     mUnk46d765;
    ::ll::UntypedStorage<8, 8>     mUnk84f962;
    ::ll::UntypedStorage<8, 8>     mUnk8b9add;
    ::ll::UntypedStorage<8, 8>     mUnkd1e747;
    ::ll::UntypedStorage<4, 4>     mUnkafe6ee;
    ::ll::UntypedStorage<8, 8>     mUnkdd3ca5;
    ::ll::UntypedStorage<4, 4>     mUnke4e59c;
    ::ll::UntypedStorage<4, 4>     mUnk8c1cbb;
    ::ll::UntypedStorage<4, 4>     mUnk43377f;
    ::ll::UntypedStorage<8, 8>     mUnk975e3d;
    ::ll::UntypedStorage<8, 8>     mUnk37caba;
    ::ll::UntypedStorage<2, 15360> mUnk87193a;
    ::ll::UntypedStorage<1, 1>     mUnkdafa84;
    ::ll::UntypedStorage<8, 16>    mUnk393e15;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioFrame& operator=(AudioFrame const&);
    AudioFrame(AudioFrame const&);
    AudioFrame();
};

} // namespace webrtc
