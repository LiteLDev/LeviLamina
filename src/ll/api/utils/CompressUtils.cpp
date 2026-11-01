#include "ll/api/utils/CompressUtils.h"

#include <algorithm>
#include <array>
#include <fstream>
#include <limits>

#include "ll/api/i18n/I18n.h"

#include <zlib.h>

namespace ll::inline utils::compress_utils {

static constexpr size_t ChunkSize = 64 * 1024;

static constexpr int GzipWindowBits = MAX_WBITS + 16;

std::string_view extensionOf(CompressFormat format) { return format == CompressFormat::Gzip ? ".gz" : ".zz"; }

static int windowBitsOf(CompressFormat format) { return format == CompressFormat::Gzip ? GzipWindowBits : MAX_WBITS; }

static int levelOf(CompressLevel level) {
    switch (level) {
    case CompressLevel::Store:
        return Z_NO_COMPRESSION;
    case CompressLevel::Fastest:
        return Z_BEST_SPEED;
    case CompressLevel::Best:
        return Z_BEST_COMPRESSION;
    default:
        return Z_DEFAULT_COMPRESSION;
    }
}

class ZlibStream {
    z_stream                    mStream{};
    SinkFn                      mSink;
    bool                        mDeflating;
    int                         mInitResult;
    bool                        mEnded{false};
    std::array<char, ChunkSize> mBuffer{};

    std::string describe(int result) const {
        return mStream.msg ? std::string{mStream.msg} : fmt::format("zlib error {}", result);
    }

    Expected<> pump(int flush) {
        while (true) {
            mStream.next_out  = reinterpret_cast<Bytef*>(mBuffer.data());
            mStream.avail_out = static_cast<uInt>(mBuffer.size());

            int result = mDeflating ? deflate(&mStream, flush) : inflate(&mStream, flush);
            if (result != Z_OK && result != Z_STREAM_END && result != Z_BUF_ERROR) {
                if (mDeflating) {
                    return makeI18nStringError<"Compression failed: {0}">(describe(result));
                }
                return makeI18nStringError<"Decompression failed: {0}">(describe(result));
            }
            if (auto produced = mBuffer.size() - mStream.avail_out; produced > 0) {
                if (auto res = mSink(std::string_view{mBuffer.data(), produced}); !res) {
                    return res;
                }
            }
            if (result == Z_STREAM_END) {
                mEnded = true;
                return {};
            }
            if (mStream.avail_out > 0) {
                return {};
            }
        }
    }

public:
    ZlibStream(SinkFn sink, CompressFormat format, CompressLevel level, bool deflating)
    : mSink(std::move(sink)),
      mDeflating(deflating),
      mInitResult(
          deflating ? deflateInit2(&mStream, levelOf(level), Z_DEFLATED, windowBitsOf(format), 8, Z_DEFAULT_STRATEGY)
                    : inflateInit2(&mStream, windowBitsOf(format))
      ) {}

    ZlibStream(ZlibStream const&)            = delete;
    ZlibStream& operator=(ZlibStream const&) = delete;

    ~ZlibStream() {
        if (mInitResult != Z_OK) {
            return;
        }
        if (mDeflating) {
            deflateEnd(&mStream);
        } else {
            inflateEnd(&mStream);
        }
    }

    Expected<> status() const {
        if (mInitResult != Z_OK) {
            return makeI18nStringError<"Failed to initialize the compression stream: {0}">(describe(mInitResult));
        }
        return {};
    }

    Expected<> write(std::string_view data) {
        if (auto res = status(); !res) {
            return res;
        }
        if (mEnded) {
            return makeI18nStringError<"The compression stream is already finished">();
        }
        while (!data.empty() && !mEnded) {
            auto piece       = data.substr(0, std::min<size_t>(data.size(), std::numeric_limits<uInt>::max()));
            mStream.next_in  = reinterpret_cast<Bytef*>(const_cast<char*>(piece.data()));
            mStream.avail_in = static_cast<uInt>(piece.size());
            while (mStream.avail_in > 0 && !mEnded) {
                if (auto res = pump(Z_NO_FLUSH); !res) {
                    return res;
                }
            }
            data.remove_prefix(piece.size());
        }
        return {};
    }

    Expected<> finish() {
        if (auto res = status(); !res) {
            return res;
        }
        if (mEnded) {
            return {};
        }
        mStream.next_in  = nullptr;
        mStream.avail_in = 0;
        if (auto res = pump(Z_FINISH); !res) {
            return res;
        }
        if (mEnded) {
            return {};
        }
        if (mDeflating) {
            return makeI18nStringError<"Failed to flush the compression stream">();
        }
        return makeI18nStringError<"The compressed stream is truncated">();
    }
};

struct Compressor::Impl : ZlibStream {
    using ZlibStream::ZlibStream;
};

Compressor::Compressor(SinkFn sink, CompressFormat format, CompressLevel level)
: impl(std::make_unique<Impl>(std::move(sink), format, level, true)) {}

Compressor::~Compressor()                                = default;
Compressor::Compressor(Compressor&&) noexcept            = default;
Compressor& Compressor::operator=(Compressor&&) noexcept = default;

Expected<> Compressor::status() const { return impl->status(); }
Expected<> Compressor::write(std::string_view data) { return impl->write(data); }
Expected<> Compressor::finish() { return impl->finish(); }

struct Decompressor::Impl : ZlibStream {
    using ZlibStream::ZlibStream;
};

Decompressor::Decompressor(SinkFn sink, CompressFormat format)
: impl(std::make_unique<Impl>(std::move(sink), format, CompressLevel::Default, false)) {}

Decompressor::~Decompressor()                                  = default;
Decompressor::Decompressor(Decompressor&&) noexcept            = default;
Decompressor& Decompressor::operator=(Decompressor&&) noexcept = default;

Expected<> Decompressor::status() const { return impl->status(); }
Expected<> Decompressor::write(std::string_view data) { return impl->write(data); }
Expected<> Decompressor::finish() { return impl->finish(); }

template <class Codec>
static Expected<> feed(Codec& codec, std::string_view data) {
    if (auto res = codec.write(data); !res) {
        return res;
    }
    return codec.finish();
}

Expected<std::string> compress(std::string_view data, CompressFormat format, CompressLevel level) {
    std::string out;
    Compressor  codec{
        [&](std::string_view chunk) -> Expected<> {
            out.append(chunk);
            return {};
        },
        format,
        level
    };
    if (auto res = feed(codec, data); !res) {
        return forwardError(res.error());
    }
    return out;
}

Expected<std::string> decompress(std::string_view data, CompressFormat format, size_t maxSize) {
    std::string  out;
    Decompressor codec{
        [&](std::string_view chunk) -> Expected<> {
            if (maxSize != 0 && out.size() + chunk.size() > maxSize) {
                return makeI18nStringError<"Decompressed output exceeds the {0} byte limit">(maxSize);
            }
            out.append(chunk);
            return {};
        },
        format
    };
    if (auto res = feed(codec, data); !res) {
        return forwardError(res.error());
    }
    return out;
}

template <class MakeCodec>
static Expected<>
transformFile(std::filesystem::path const& src, std::filesystem::path const& dst, MakeCodec&& makeCodec) {
    std::ifstream in{src, std::ios::binary};
    if (!in) {
        return makeI18nStringError<"Failed to open {0}">(src.string());
    }
    auto          tmp = std::filesystem::path{dst}.concat(u8".tmp");
    std::ofstream out{tmp, std::ios::binary | std::ios::trunc};
    if (!out) {
        return makeI18nStringError<"Failed to open {0}">(tmp.string());
    }
    auto discard = [&](Unexpected error) {
        out.close();
        std::error_code ec;
        std::filesystem::remove(tmp, ec);
        return error;
    };

    auto                        codec = makeCodec([&](std::string_view chunk) -> Expected<> {
        if (!out.write(chunk.data(), static_cast<std::streamsize>(chunk.size()))) {
            return makeI18nStringError<"Failed to write {0}">(tmp.string());
        }
        return {};
    });
    std::array<char, ChunkSize> buffer{};
    while (in) {
        in.read(buffer.data(), buffer.size());
        if (in.bad()) {
            return discard(makeI18nStringError<"Failed to read {0}">(src.string()));
        }
        if (auto count = static_cast<size_t>(in.gcount()); count > 0) {
            if (auto res = codec.write(std::string_view{buffer.data(), count}); !res) {
                return discard(forwardError(res.error()));
            }
        }
    }
    if (auto res = codec.finish(); !res) {
        return discard(forwardError(res.error()));
    }
    if (!out.flush()) {
        return discard(makeI18nStringError<"Failed to write {0}">(tmp.string()));
    }
    out.close();
    in.close();

    std::error_code ec;
    std::filesystem::rename(tmp, dst, ec);
    if (ec) {
        std::filesystem::remove(tmp, ec);
        return makeErrorCodeError(ec);
    }
    return {};
}

Expected<> compressFile(
    std::filesystem::path const& src,
    std::filesystem::path const& dst,
    CompressFormat               format,
    CompressLevel                level
) {
    return transformFile(src, dst, [&](SinkFn sink) { return Compressor{std::move(sink), format, level}; });
}

Expected<> decompressFile(std::filesystem::path const& src, std::filesystem::path const& dst, CompressFormat format) {
    return transformFile(src, dst, [&](SinkFn sink) { return Decompressor{std::move(sink), format}; });
}

} // namespace ll::inline utils::compress_utils
