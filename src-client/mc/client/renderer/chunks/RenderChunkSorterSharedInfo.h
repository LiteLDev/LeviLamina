#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RenderChunkSorterSharedInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::atomic<float>> x;
    ::ll::TypedStorage<4, 4, ::std::atomic<float>> y;
    ::ll::TypedStorage<4, 4, ::std::atomic<float>> z;
    ::ll::TypedStorage<4, 4, ::std::atomic<float>> dx;
    ::ll::TypedStorage<4, 4, ::std::atomic<float>> dy;
    ::ll::TypedStorage<4, 4, ::std::atomic<float>> dz;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>  cameraIsOrthographic;
    // NOLINTEND
};
