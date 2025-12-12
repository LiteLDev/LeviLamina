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
        // virtual functions
        // NOLINTBEGIN
        virtual void OnData(void const*, int, int, uint64, uint64, ::std::optional<int64>) = 0;

        virtual void OnClose() = 0;

        virtual int NumPreferredChannels() const = 0;

        virtual ~Sink() = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetSink(::cricket::AudioSource::Sink*) = 0;

    virtual ~AudioSource() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
