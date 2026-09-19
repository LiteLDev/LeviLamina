#pragma once

#include <cstddef>
#include <filesystem>
#include <functional>
#include <memory>
#include <string>
#include <string_view>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"

namespace ll::inline utils::compress_utils {

/// The compressed format to read or write. Both are deflate based and differ only in framing.
enum class CompressFormat : int {
    /// gzip (RFC 1952), with a crc32 and a header the usual archive tools recognize. Use this for
    /// anything a person might open by hand.
    Gzip,
    /// zlib (RFC 1950), a two byte header plus adler32. What `Content-Encoding: deflate` means.
    Zlib,
};

/// How hard to work at compressing, expressed independently of any one codec's numeric scale.
/// @note Each format maps these onto its own range, so a value keeps its meaning across formats.
/// `Default` suits text well; `Best` typically costs several times the time for a few percent, which
/// rarely pays off on logs or JSON.
enum class CompressLevel : int {
    Store,   ///< No compression, framing only.
    Fastest, ///< The lowest setting the codec offers.
    Default, ///< The codec's balanced setting.
    Best,    ///< The highest setting the codec offers.
};

/// The conventional extension for a format, including the leading dot, e.g. `.gz`.
LLNDAPI std::string_view extensionOf(CompressFormat format);

/// Receives compressed or decompressed bytes as they become available.
/// @note Called many times for one input, and may be called with nothing left to report.
using SinkFn = std::function<Expected<>(std::string_view)>;

/// Compresses a byte stream incrementally.
///
/// Push input with `write` as often as needed, then call `finish` exactly once to flush the trailer.
/// Output is handed to the sink as it is produced, so neither side is ever held whole in memory.
/// @note This is the underlying primitive; `compress` and `compressFile` are conveniences over it.
class Compressor {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI
    Compressor(SinkFn sink, CompressFormat format = CompressFormat::Gzip, CompressLevel level = CompressLevel::Default);

    LLAPI ~Compressor();

    LLAPI             Compressor(Compressor&&) noexcept;
    LLAPI Compressor& operator=(Compressor&&) noexcept;

    /// Fails if the codec for the requested format is unavailable, so check this before writing.
    LLNDAPI Expected<> status() const;

    LLAPI Expected<> write(std::string_view data);

    /// Ends the stream. Writing afterwards is an error.
    LLAPI Expected<> finish();
};

/// Decompresses a byte stream incrementally, mirroring Compressor.
/// @note `finish` verifies the stream actually ended, which is what catches a truncated input.
class Decompressor {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI Decompressor(SinkFn sink, CompressFormat format = CompressFormat::Gzip);

    LLAPI ~Decompressor();

    LLAPI               Decompressor(Decompressor&&) noexcept;
    LLAPI Decompressor& operator=(Decompressor&&) noexcept;

    LLNDAPI Expected<> status() const;

    LLAPI Expected<> write(std::string_view data);

    /// Confirms the stream ended cleanly. Fails on a truncated or trailing-garbage input.
    LLAPI Expected<> finish();
};

/// Compresses a buffer in memory.
/// @note Holds both sides in memory at once; prefer compressFile for anything large.
LLNDAPI Expected<std::string> compress(
    std::string_view data,
    CompressFormat   format = CompressFormat::Gzip,
    CompressLevel    level  = CompressLevel::Default
);

/// Decompresses a buffer produced by `compress`.
/// @param maxSize Refuses to produce more than this many bytes. 0 means no limit.
/// @note Worth setting when the data comes from somewhere untrusted, since a small stream can expand
/// enormously.
LLNDAPI Expected<std::string>
        decompress(std::string_view data, CompressFormat format = CompressFormat::Gzip, size_t maxSize = 0);

/// Compresses `src` into `dst`, streaming in fixed size chunks.
/// @note Completes under a temporary sibling of `dst` and renames it into place, so an interrupted
/// run leaves behind no truncated file that later looks complete. `dst` is overwritten if present.
LLNDAPI Expected<> compressFile(
    std::filesystem::path const& src,
    std::filesystem::path const& dst,
    CompressFormat               format = CompressFormat::Gzip,
    CompressLevel                level  = CompressLevel::Default
);

/// Decompresses `src` into `dst`, using the same complete-then-rename approach as compressFile.
LLNDAPI Expected<> decompressFile(
    std::filesystem::path const& src,
    std::filesystem::path const& dst,
    CompressFormat               format = CompressFormat::Gzip
);

} // namespace ll::inline utils::compress_utils
