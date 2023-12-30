#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class AudioSource {
public:
    // AudioSource inner types declare
    // clang-format off
    class Sink;
    // clang-format on

    // AudioSource inner types define
    class Sink {
    public:
        // prevent constructor by default
        Sink& operator=(Sink const&);
        Sink(Sink const&);
        Sink();
    };

public:
    // prevent constructor by default
    AudioSource& operator=(AudioSource const&);
    AudioSource(AudioSource const&);
    AudioSource();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1, symbol: __gen_??1AudioSource@cricket@@UEAA@XZ
    virtual ~AudioSource() = default;

    // NOLINTEND
};

}; // namespace cricket
