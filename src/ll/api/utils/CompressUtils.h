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

enum class CompressFormat : int {
    Gzip,
    Zlib,
};

enum class CompressLevel : int {
    Store,
    Fastest,
    Default,
    Best,
};

LLNDAPI std::string_view extensionOf(CompressFormat format);

using SinkFn = std::function<Expected<>(std::string_view)>;

class Compressor {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI
    Compressor(SinkFn sink, CompressFormat format = CompressFormat::Gzip, CompressLevel level = CompressLevel::Default);

    LLAPI ~Compressor();

    LLAPI             Compressor(Compressor&&) noexcept;
    LLAPI Compressor& operator=(Compressor&&) noexcept;

    LLNDAPI Expected<> status() const;

    LLAPI Expected<> write(std::string_view data);

    LLAPI Expected<> finish();
};

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

    LLAPI Expected<> finish();
};

LLNDAPI Expected<std::string> compress(
    std::string_view data,
    CompressFormat   format = CompressFormat::Gzip,
    CompressLevel    level  = CompressLevel::Default
);

LLNDAPI Expected<std::string>
        decompress(std::string_view data, CompressFormat format = CompressFormat::Gzip, size_t maxSize = 0);

LLNDAPI Expected<> compressFile(
    std::filesystem::path const& src,
    std::filesystem::path const& dst,
    CompressFormat               format = CompressFormat::Gzip,
    CompressLevel                level  = CompressLevel::Default
);

LLNDAPI Expected<> decompressFile(
    std::filesystem::path const& src,
    std::filesystem::path const& dst,
    CompressFormat               format = CompressFormat::Gzip
);

} // namespace ll::inline utils::compress_utils
