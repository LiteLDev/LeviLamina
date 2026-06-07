#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/externals/astc_codec/FootprintType.h"
#include "mc/external/render_dragon/texture_decoder/texd/CompressionScheme.h"
#include "mc/external/render_dragon/texture_decoder/texd/PixelFormat.h"

// auto generated forward declare list
// clang-format off
namespace texd { class StorageBuffer; }
namespace texd { struct CompressedBlockInfo; }
namespace texd { struct CompressedImageDescription; }
namespace texd { struct DecompressedImageDescription; }
namespace texd { struct GpuStreamDescription; }
namespace texd { struct Ktx1Header; }
// clang-format on

namespace texd {
// functions
// NOLINTBEGIN
MCAPI ::astc_codec::FootprintType compressionSchemeToAstcFootprintType(::texd::CompressionScheme scheme);

MCAPI bool convertRgba(uchar* outBuffer, ::texd::PixelFormat outFormat, uchar const* inBuffer, uint width, uint height);

MCAPI bool decompress(
    uchar*                                destBuffer,
    ::texd::DecompressedImageDescription& dImg,
    ::texd::PixelFormat                   pixelFormat,
    ::texd::StorageBuffer const&          storage,
    uint                                  mipLevel
);

MCAPI bool decompressKtx1(
    uchar*                                destBuffer,
    ::texd::DecompressedImageDescription& dImg,
    ::texd::PixelFormat                   pixelFormat,
    uchar const*                          storage,
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

MCAPI ::texd::CompressedBlockInfo getCompressedBlockSize(::texd::CompressionScheme scheme);

MCAPI uint64 getDecompressedImageSize(uint width, uint height, ::texd::PixelFormat pixelFormat, uint mipLevel);

MCAPI bool
getStreamForGpu(::texd::GpuStreamDescription& gpuStream, ::texd::StorageBuffer const& storage, uint mipLevel);

MCAPI bool getStreamForGpuKtx1(::texd::GpuStreamDescription& gpuStream, uchar const* storage, uint mipLevel);

MCAPI bool isKtx1(uchar const* stream, uint64 streamSize);

MCAPI bool isLinearAstc(::texd::CompressionScheme scheme);

MCAPI bool isSrgbAstc(::texd::CompressionScheme scheme);

MCFOLD bool isSystemBigEndian();

MCAPI bool loadCompressedImageFromMemory(
    ::texd::StorageBuffer&              storage,
    ::texd::CompressedImageDescription& cImg,
    uchar const*                        stream,
    uint64                              streamSize
);

MCAPI bool loadKtx1(
    ::texd::StorageBuffer&              storage,
    ::texd::CompressedImageDescription& cImg,
    uchar const*                        stream,
    uint64                              streamSize
);

MCAPI ::texd::Ktx1Header parseHeader(uchar const* stream);

MCAPI uint readUint32(void const* ptr, bool isStreamBigEndian);

MCAPI uint swapEndian(uint value);

MCAPI uint64 uncompressedImageSize(uint width, uint height, ::texd::PixelFormat pixelFormat);
// NOLINTEND

} // namespace texd
