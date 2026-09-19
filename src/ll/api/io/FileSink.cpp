#include "ll/api/io/FileSink.h"

#include <algorithm>
#include <fstream>
#include <mutex>
#include <string>
#include <vector>

#include "ll/api/thread/ThreadPoolExecutor.h"
#include "ll/api/utils/CompressUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/io/Output.h"

#include "fmt/format.h"

namespace ll::io {

// Compression and retention run here instead of on the caller's thread, which for loggers is the
// single thread that serializes every message. A gzip pass over a large archive would otherwise
// stall all logging.
static thread::ThreadPoolExecutor const& getMaintenancePool() {
    static thread::ThreadPoolExecutor ins("logRotate", 1);
    return ins;
}

// Reported straight to the console: this sink is what a Logger writes into, so logging the failure
// through a Logger risks coming back around into the sink that just failed.
static void reportSinkError(std::string_view msg) noexcept {
    defaultOutput(fmt::format("\x1b[33mLOG FILE SINK: {}\x1b[0m\n", msg));
}

// Archives are compressed as gzip because it is the format the usual tools recognize. Kept in one
// place so archive recognition and compression cannot disagree about the suffix.
constexpr auto ArchiveFormat = compress_utils::CompressFormat::Gzip;

static std::string_view compressExtension() { return compress_utils::extensionOf(ArchiveFormat); }

// Identifies the interval a message belongs to as a comparable number, `20260919` for daily and
// `2026091914` for hourly. Comparing period numbers rather than tracking a deadline keeps daylight
// saving shifts and manual clock changes harmless: the number simply differs and one rotation
// happens.
static uint64 periodOf(data::TmWithMs const& tm, RotateInterval interval) {
    auto day = (uint64)(tm.tm_year + 1900) * 10000ull + (uint64)(tm.tm_mon + 1) * 100ull + (uint64)tm.tm_mday;
    return interval == RotateInterval::Hourly ? day * 100ull + (uint64)tm.tm_hour : day;
}

// Everything the background pass needs, held by value: the sink that scheduled it may be gone by the
// time it runs.
struct ArchiveMaintainer {
    std::filesystem::path dir;
    std::string           activeName;
    std::string           extension;
    RotatePolicy          policy;

    // Recognizes the archives this sink produced, so retention leaves anything else in the directory
    // alone. Only the timestamp depends on the namer, and a four digit year is all that is assumed.
    bool isArchive(std::filesystem::path const& file) const {
        auto name = file.filename().string();
        if (name == activeName) {
            return false;
        }
        if (!name.ends_with(extension) && !name.ends_with(extension + std::string{compressExtension()})) {
            return false;
        }
        std::string_view rest{name};
        // A leading `YYYY-` is enough to tell an archive from a hand-placed file.
        if (rest.size() < 5 || rest[4] != '-') {
            return false;
        }
        return std::all_of(rest.begin(), rest.begin() + 4, [](char c) { return c >= '0' && c <= '9'; });
    }

    std::vector<std::filesystem::path> collect() const {
        std::vector<std::filesystem::path> res;
        std::error_code                    ec;
        for (auto const& entry : std::filesystem::directory_iterator{dir, ec}) {
            if (entry.is_regular_file(ec) && isArchive(entry.path())) {
                res.push_back(entry.path());
            }
        }
        // Newest first, which is the order the retention limits below want.
        std::sort(res.begin(), res.end(), [](auto const& a, auto const& b) {
            std::error_code ec;
            auto            ta = std::filesystem::last_write_time(a, ec);
            auto            tb = std::filesystem::last_write_time(b, ec);
            return ta > tb;
        });
        return res;
    }

    void compressOld() const {
        auto archives = collect();
        for (size_t i = 0; i < archives.size(); ++i) {
            // The newest few are left as they are, whatever their form, so recent output stays
            // greppable without unpacking it.
            if (i < policy.keepUncompressed || archives[i].extension() == compressExtension()) {
                continue;
            }
            auto target = std::filesystem::path{archives[i]}.concat(compressExtension());
            if (auto res = compress_utils::compressFile(archives[i], target, ArchiveFormat); !res) {
                reportSinkError(fmt::format("failed to compress {}: {}", archives[i].string(), res.error().message()));
                continue;
            }
            // The archive is complete, so a failed removal only leaves a redundant plain copy for a
            // later pass to pick up.
            std::error_code ec;
            std::filesystem::remove(archives[i], ec);
        }
    }

    void cleanup() const {
        auto archives = collect();

        // Each limit marks what it wants gone, so the result is their union and widening one never
        // silently disables another.
        std::vector<bool> expired(archives.size(), false);

        if (policy.maxFiles > 0 && archives.size() > policy.maxFiles) {
            for (size_t i = policy.maxFiles; i < archives.size(); ++i) {
                expired[i] = true;
            }
        }
        if (policy.maxAgeDays > 0) {
            auto oldest = std::filesystem::file_time_type::clock::now() - std::chrono::days{policy.maxAgeDays};
            for (size_t i = 0; i < archives.size(); ++i) {
                std::error_code ec;
                auto            time = std::filesystem::last_write_time(archives[i], ec);
                if (!ec && time < oldest) {
                    expired[i] = true;
                }
            }
        }
        if (policy.totalSizeCap > 0) {
            uint64 total{};
            for (auto const& archive : archives) {
                std::error_code ec;
                auto            size = std::filesystem::file_size(archive, ec);
                if (!ec) {
                    total += size;
                }
            }
            // Drop from the oldest end, which is the back, until the total fits.
            for (size_t i = archives.size(); i-- > 0 && total > policy.totalSizeCap;) {
                std::error_code ec;
                auto            size = std::filesystem::file_size(archives[i], ec);
                if (!ec) {
                    total -= size;
                }
                expired[i] = true;
            }
        }

        for (size_t i = 0; i < archives.size(); ++i) {
            if (!expired[i]) {
                continue;
            }
            auto const&     archive = archives[i];
            std::error_code ec;
            std::filesystem::remove(archive, ec);
            if (ec) {
                reportSinkError(fmt::format("failed to remove {}: {}", archive.string(), ec.message()));
            } else {
                // A log system deleting files is hard to audit after the fact, so leave a trace.
                defaultOutput(fmt::format("\x1b[90mLOG FILE SINK: removed {}\x1b[0m\n", archive.string()));
            }
        }
    }

    void run() const {
        if (policy.compress) {
            compressOld();
        }
        if (policy.cleanup) {
            cleanup();
        }
    }
};

struct FileSink::Impl {
    std::mutex    mutex;
    std::ofstream file;
    LogLevel      flushLevel{LogLevel::Off};

    std::filesystem::path path;
    std::filesystem::path dir;
    std::string           extension;

    RotatePolicy policy;

    uint64 currentSize{};
    uint64 currentPeriod{};

    // Bytes that were already in the file when this run opened it. Retained so that a policy given
    // after construction can still honour rotateOnOpen.
    uint64 inheritedSize{};

    // Archives are identified by their timestamp alone; only one active file lives in this directory,
    // so repeating its name would add nothing.
    std::string archiveName(data::TmWithMs const& time, size_t index) const {
        return policy.namer(ArchiveNameInfo{time, index, policy.interval}) + extension;
    }

    void open(bool truncate) {
        std::error_code ec;
        std::filesystem::create_directories(dir, ec);

        // Binary mode keeps what is written identical to what is counted: text mode would translate
        // each newline to CRLF on Windows and quietly push the file past maxFileSize.
        auto mode = std::ios::out | std::ios::binary | (truncate ? std::ios::trunc : std::ios::app);
        file.open(path, mode);
        if (!file) {
            reportSinkError(fmt::format("failed to open {}", path.string()));
            return;
        }
        auto size   = std::filesystem::file_size(path, ec);
        currentSize = ec ? 0 : size;
    }

    void rotate(data::TmWithMs const& time) {
        currentPeriod = periodOf(time, policy.interval);
        if (currentSize == 0) {
            return;
        }
        file.flush();
        file.close();

        // Pick the first free index in this interval, so a restart mid-period does not collide with
        // archives an earlier run already wrote.
        std::filesystem::path target;
        for (size_t index = 0;; ++index) {
            target = dir / archiveName(time, index);
            if (!std::filesystem::exists(target)
                && !std::filesystem::exists(target.string() + std::string{compressExtension()})) {
                break;
            }
        }

        std::error_code ec;
        std::filesystem::rename(path, target, ec);
        if (ec) {
            // Something else holds the active file open, an editor or a scanner most likely. Rather
            // than drop messages, write to the archive name directly and carry on from there.
            reportSinkError(
                fmt::format(
                    "failed to archive {} as {}: {}, continuing in the new file",
                    path.string(),
                    target.string(),
                    ec.message()
                )
            );
            path = target;
            open(true);
            return;
        }
        open(true);
        maintain();
    }

    void maintain() const {
        if (!policy.compress && !policy.cleanup) {
            return;
        }
        // Compression and retention go out as a single task so they stay ordered: a freshly rotated
        // plain archive has to shrink before its size is weighed against totalSizeCap, otherwise it
        // would evict far more history than it should.
        getMaintenancePool().execute(
            [maintainer = ArchiveMaintainer{dir, path.filename().string(), extension, policy}] { maintainer.run(); }
        );
    }
};

FileSink::FileSink(std::filesystem::path const& path, Polymorphic<Formatter> formatter, RotatePolicy policy)
: Sink(std::move(formatter)),
  impl(std::make_unique<Impl>()) {
    impl->path      = path;
    impl->dir       = path.parent_path();
    impl->extension = path.extension().string();
    impl->policy    = std::move(policy);

    impl->open(false);
    impl->inheritedSize = impl->currentSize;

    auto now            = sys_utils::getLocalTime();
    impl->currentPeriod = periodOf(now, impl->policy.interval);
    if (impl->policy.rotateOnOpen) {
        impl->rotate(now);
    }
    impl->inheritedSize = 0;
}

FileSink::~FileSink() = default;

void FileSink::setFormatter(Polymorphic<Formatter> fmter) {
    std::lock_guard lock(impl->mutex);
    formatter = std::move(fmter);
}

void FileSink::append(LogMessageView const& view) {
    std::lock_guard lock(impl->mutex);
    std::string     buffer;
    formatter->format(view, buffer);

    auto const& policy = impl->policy;
    // Size is tracked as messages are written rather than queried per message, and the check happens
    // before the write so the limit is an actual ceiling. A message is never split, so a single
    // oversized one lands in a file of its own.
    bool bySize =
        policy.maxFileSize > 0 && impl->currentSize > 0 && impl->currentSize + buffer.size() > policy.maxFileSize;
    bool byTime = policy.interval != RotateInterval::None && periodOf(view.tm, policy.interval) != impl->currentPeriod;
    if (bySize || byTime) {
        impl->rotate(view.tm);
    }

    impl->file << buffer;
    impl->currentSize += buffer.size();
    if (view.lvl <= impl->flushLevel) {
        impl->file.flush();
    }
}

void FileSink::flush() {
    std::lock_guard lock(impl->mutex);
    impl->file.flush();
}

void FileSink::setFlushLevel(LogLevel level) {
    std::lock_guard lock(impl->mutex);
    impl->flushLevel = level;
}

void FileSink::setPolicy(RotatePolicy policy) {
    std::lock_guard lock(impl->mutex);
    impl->policy        = std::move(policy);
    auto now            = sys_utils::getLocalTime();
    impl->currentPeriod = periodOf(now, impl->policy.interval);

    // Only content carried over from an earlier run justifies rotating here; whatever this run has
    // written since belongs in the current file.
    if (impl->policy.rotateOnOpen && impl->inheritedSize > 0) {
        impl->rotate(now);
    }
    impl->inheritedSize = 0;
}

void FileSink::rotate() {
    std::lock_guard lock(impl->mutex);
    impl->rotate(sys_utils::getLocalTime());
}
} // namespace ll::io
