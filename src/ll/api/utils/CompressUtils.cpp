#include "ll/api/utils/CompressUtils.h"

#include <algorithm>
#include <array>
#include <fstream>
#include <limits>
#include <optional>

#include "ll/api/i18n/I18n.h"

#include <zlib.h>

namespace ll::inline utils::compress_utils {

constexpr size_t ChunkSize = 64 * 1024;

std::string_view extensionOf(CompressFormat format) { return format == CompressFormat::Gzip ? ".gz" : ".zz"; }

namespace {

// zlib selects the container through windowBits: the base 15 means a zlib header, +16 means gzip.
int windowBitsOf(CompressFormat format) { return format == CompressFormat::Gzip ? 15 + 16 : 15; }

int levelOf(CompressLevel level) {
    switch (level) {
    case CompressLevel::Store:
        return Z_NO_COMPRESSION;
    case CompressLevel::Fastest:
        return Z_BEST_SPEED;
    case CompressLevel::Best:
        return Z_BEST_COMPRESSION;
    case CompressLevel::Default:
    default:
        // Deliberately 6 rather than Z_DEFAULT_COMPRESSION: on text this lands within a few percent
        // of the best ratio at a fraction of the cost.
        return 6;
    }
}

/// Owns a zlib stream in one direction and pumps it into a sink.
/// @note Both Compressor and Decompressor are thin shells over this; the direction is fixed at
/// construction so neither exposes a parameter the other ignores.
class ZlibSession {
    z_stream mStream{};
    SinkFn   mSink;
    bool     mDeflating;
    bool     mOpen{false};
    bool     mEnded{false};

    // Set when zlib refused to start. Error is move-only and so cannot be handed out repeatedly from
    // a const accessor, but the detail is enough to rebuild it on demand.
    std::optional<std::string> mInitError;

    std::array<char, ChunkSize> mBuffer{};

    /// Whatever zlib has to say about the failure, so the reason survives into the message.
    std::string detail(int code) const {
        return mStream.msg ? std::string{mStream.msg} : fmt::format("zlib error {}", code);
    }

    /// Drains the codec into the sink until it stops filling the buffer.
    Expected<> pump(bool finish) {
        while (true) {
            mStream.next_out  = (Bytef*)mBuffer.data();
            mStream.avail_out = static_cast<uInt>(mBuffer.size());

            int const flush = finish ? Z_FINISH : Z_NO_FLUSH;
            int const res   = mDeflating ? deflate(&mStream, flush) : inflate(&mStream, flush);
            if (res != Z_OK && res != Z_STREAM_END && res != Z_BUF_ERROR) {
                if (mDeflating) {
                    return makeI18nStringError<"Compression failed: {0}">(detail(res));
                }
                return makeI18nStringError<"Decompression failed: {0}">(detail(res));
            }
            if (auto produced = mBuffer.size() - mStream.avail_out; produced > 0) {
                if (auto sunk = mSink(std::string_view{mBuffer.data(), produced}); !sunk) {
                    return forwardError(sunk.error());
                }
            }
            if (res == Z_STREAM_END) {
                mEnded = true;
                return {};
            }
            // More room left than zlib wanted means it has nothing further to give for now.
            if (mStream.avail_out > 0) {
                return {};
            }
        }
    }

public:
    ZlibSession(SinkFn sink, CompressFormat format, CompressLevel level, bool deflating)
    : mSink(std::move(sink)),
      mDeflating(deflating) {
        int res = deflating
                    ? deflateInit2(&mStream, levelOf(level), Z_DEFLATED, windowBitsOf(format), 8, Z_DEFAULT_STRATEGY)
                    : inflateInit2(&mStream, windowBitsOf(format));
        if (res != Z_OK) {
            mInitError = detail(res);
            return;
        }
        mOpen = true;
    }

    ZlibSession(ZlibSession const&)            = delete;
    ZlibSession& operator=(ZlibSession const&) = delete;

    ~ZlibSession() {
        if (mOpen) {
            if (mDeflating) {
                deflateEnd(&mStream);
            } else {
                inflateEnd(&mStream);
            }
        }
    }

    /// Rebuilt on each call rather than stored: an Expected member would have to be tested with
    /// `!expected`, which reads as "failed" but means the opposite.
    Expected<> status() const {
        if (mInitError) {
            return makeI18nStringError<"Failed to initialize the compression stream: {0}">(*mInitError);
        }
        return {};
    }

    Expected<> write(std::string_view data) {
        if (mInitError) {
            return status();
        }
        if (mEnded) {
            return makeI18nStringError<"The compression stream is already finished">();
        }
        // zlib takes lengths as uInt, so a larger buffer has to go in more than one pass.
        while (!data.empty()) {
            auto piece       = data.substr(0, std::min<size_t>(data.size(), std::numeric_limits<uInt>::max()));
            mStream.next_in  = (Bytef*)piece.data();
            mStream.avail_in = static_cast<uInt>(piece.size());

            while (mStream.avail_in > 0) {
                if (auto res = pump(false); !res) {
                    return res;
                }
                if (mEnded) {
                    // A decompressor can hit the end mid-buffer; anything after it is not ours.
                    return {};
                }
            }
            data.remove_prefix(piece.size());
        }
        return {};
    }

    Expected<> finish() {
        if (mInitError) {
            return status();
        }
        if (mEnded) {
            return {};
        }
        mStream.next_in  = nullptr;
        mStream.avail_in = 0;
        if (auto res = pump(true); !res) {
            return res;
        }
        if (!mEnded) {
            if (mDeflating) {
                return makeI18nStringError<"Failed to flush the compression stream">();
            }
            return makeI18nStringError<"The compressed stream is truncated">();
        }
        return {};
    }
};

} // namespace

struct Compressor::Impl : ZlibSession {
    using ZlibSession::ZlibSession;
};

Compressor::Compressor(SinkFn sink, CompressFormat format, CompressLevel level)
: impl(std::make_unique<Impl>(std::move(sink), format, level, true)) {}

Compressor::~Compressor()                                = default;
Compressor::Compressor(Compressor&&) noexcept            = default;
Compressor& Compressor::operator=(Compressor&&) noexcept = default;

Expected<> Compressor::status() const { return impl->status(); }
Expected<> Compressor::write(std::string_view data) { return impl->write(data); }
Expected<> Compressor::finish() { return impl->finish(); }

struct Decompressor::Impl : ZlibSession {
    using ZlibSession::ZlibSession;
};

Decompressor::Decompressor(SinkFn sink, CompressFormat format)
: impl(std::make_unique<Impl>(std::move(sink), format, CompressLevel::Default, false)) {}

Decompressor::~Decompressor()                                  = default;
Decompressor::Decompressor(Decompressor&&) noexcept            = default;
Decompressor& Decompressor::operator=(Decompressor&&) noexcept = default;

Expected<> Decompressor::status() const { return impl->status(); }
Expected<> Decompressor::write(std::string_view data) { return impl->write(data); }
Expected<> Decompressor::finish() { return impl->finish(); }

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
    if (auto res = codec.status(); !res) {
        return forwardError(res.error());
    }
    if (auto res = codec.write(data); !res) {
        return forwardError(res.error());
    }
    if (auto res = codec.finish(); !res) {
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
    if (auto res = codec.status(); !res) {
        return forwardError(res.error());
    }
    if (auto res = codec.write(data); !res) {
        return forwardError(res.error());
    }
    if (auto res = codec.finish(); !res) {
        return forwardError(res.error());
    }
    return out;
}

namespace {

/// Streams `src` through `codec`, which writes into a temporary that is renamed onto `dst` only once
/// the whole stream has been processed.
template <class Codec>
Expected<>
runOnFiles(std::filesystem::path const& src, std::filesystem::path const& dst, std::function<Codec(SinkFn)> makeCodec) {
    std::ifstream in{src, std::ios::binary};
    if (!in) {
        return makeI18nStringError<"Failed to open {0}">(src.string());
    }
    // Finish under a temporary name and rename into place, so an interrupted run leaves no partial
    // output that a later pass would mistake for a complete file.
    auto          tmp = std::filesystem::path{dst}.concat(u8".tmp");
    std::ofstream out{tmp, std::ios::binary | std::ios::trunc};
    if (!out) {
        return makeI18nStringError<"Failed to open {0}">(tmp.string());
    }

    auto discard = [&](Unexpected err) {
        out.close();
        std::error_code ec;
        std::filesystem::remove(tmp, ec);
        return err;
    };

    auto codec = makeCodec([&](std::string_view chunk) -> Expected<> {
        out.write(chunk.data(), static_cast<std::streamsize>(chunk.size()));
        if (!out) {
            return makeI18nStringError<"Failed to write {0}">(tmp.string());
        }
        return {};
    });
    if (auto res = codec.status(); !res) {
        return discard(forwardError(res.error()));
    }

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

    out.flush();
    if (!out) {
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

} // namespace

Expected<> compressFile(
    std::filesystem::path const& src,
    std::filesystem::path const& dst,
    CompressFormat               format,
    CompressLevel                level
) {
    return runOnFiles<Compressor>(src, dst, [&](SinkFn sink) { return Compressor{std::move(sink), format, level}; });
}

Expected<> decompressFile(std::filesystem::path const& src, std::filesystem::path const& dst, CompressFormat format) {
    return runOnFiles<Decompressor>(src, dst, [&](SinkFn sink) { return Decompressor{std::move(sink), format}; });
}

} // namespace ll::inline utils::compress_utils
