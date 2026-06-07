#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct TextureStreamingPerformanceTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk91695c;
    ::ll::UntypedStorage<8, 8> mUnkb5897d;
    ::ll::UntypedStorage<8, 8> mUnkda4fde;
    ::ll::UntypedStorage<8, 8> mUnke7347c;
    ::ll::UntypedStorage<8, 8> mUnkbad9ac;
    ::ll::UntypedStorage<8, 8> mUnkd13bac;
    ::ll::UntypedStorage<8, 8> mUnkc38570;
    ::ll::UntypedStorage<8, 8> mUnkccc224;
    ::ll::UntypedStorage<8, 8> mUnk1ea615;
    ::ll::UntypedStorage<8, 8> mUnk5eba7d;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureStreamingPerformanceTelemetryData& operator=(TextureStreamingPerformanceTelemetryData const&);
    TextureStreamingPerformanceTelemetryData(TextureStreamingPerformanceTelemetryData const&);
    TextureStreamingPerformanceTelemetryData();
};

} // namespace dragon::texturestreaming
