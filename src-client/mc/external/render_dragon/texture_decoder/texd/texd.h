#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/texture_decoder/texd/CompressionScheme.h"
#include "mc/external/render_dragon/texture_decoder/texd/PixelFormat.h"

// auto generated forward declare list
// clang-format off
namespace texd { class StorageBuffer; }
namespace texd { struct CompressedImageDescription; }
namespace texd { struct DecompressedImageDescription; }
namespace texd { struct GpuStreamDescription; }
namespace texd { struct Ktx1Header; }
namespace texd { struct MipLevelDescription; }
// clang-format on

namespace texd {
// functions
// NOLINTBEGIN
MCAPI bool convertRgba(uchar* outBuffer, ::texd::PixelFormat outFormat, uchar const* inBuffer, uint width, uint height);

MCAPI bool decompress(
    uchar*                                destBuffer,
    ::texd::DecompressedImageDescription& dImg,
    ::texd::PixelFormat                   pixelFormat,
    ::texd::StorageBuffer const&          storage,
    uint                                  mipLevel
);

MCAPI bool decompressMipLevel(
    ::texd::CompressionScheme scheme,
    uint                      width,
    uint                      height,
    ::texd::PixelFormat       inFormat,
    uchar const*              inBuffer,
    uint64                    inBufferSize,
    ::texd::PixelFormat       outFormat,
    uchar*                    outBuffer
);

MCAPI bool determineImageDescription(::texd::CompressedImageDescription& cImg, uchar const* stream);

MCAPI bool getMipLevelData(::texd::MipLevelDescription& mipLevelDesc, uchar const* stream, uint mipLevel);

MCAPI bool
getStreamForGpu(::texd::GpuStreamDescription& gpuStream, ::texd::StorageBuffer const& storage, uint mipLevel);

MCAPI bool loadCompressedImageFromMemory(
    ::texd::StorageBuffer&              storage,
    ::texd::CompressedImageDescription& cImg,
    uchar const*                        stream,
    uint64                              streamSize
);

MCAPI ::texd::Ktx1Header parseHeader(uchar const* stream);
// NOLINTEND

} // namespace texd
