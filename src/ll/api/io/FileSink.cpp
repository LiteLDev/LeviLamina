#include "ll/api/io/FileSink.h"

#include <algorithm>
#include <fstream>
#include <mutex>
#include <string>
#include <vector>

#include "ll/api/base/Containers.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/api/thread/ThreadPoolExecutor.h"
#include "ll/api/utils/CompressUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/io/Output.h"

#include "fmt/format.h"

#include "pl/Config.h"

namespace ll::io {

static thread::ThreadPoolExecutor const& getMaintenancePool() {
    static thread::ThreadPoolExecutor ins("logRotate", 1);
    return ins;
}

static void reportSinkError(std::string_view msg) noexcept {
    defaultOutput(fmt::format("\x1b[33mLOG FILE SINK: {}\x1b[0m\n", msg));
}

constexpr auto ArchiveFormat = compress_utils::CompressFormat::Gzip;

static std::string_view compressExtension() { return compress_utils::extensionOf(ArchiveFormat); }

static uint64 periodOf(data::TmWithMs const& tm, RotateInterval interval) {
    auto day = (uint64)(tm.tm_year + 1900) * 10000ull + (uint64)(tm.tm_mon + 1) * 100ull + (uint64)tm.tm_mday;
    return interval == RotateInterval::Hourly ? day * 100ull + (uint64)tm.tm_hour : day;
}

struct ArchiveMaintainer {
    std::filesystem::path dir;
    std::string           activeName;
    std::string           extension;
    RotatePolicy          policy;

    bool isArchive(std::filesystem::path const& file) const {
        auto name = file.filename().string();
        if (name == activeName) {
            return false;
        }
        if (!name.ends_with(extension) && !name.ends_with(extension + std::string{compressExtension()})) {
            return false;
        }
        std::string_view rest{name};
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
            if (i < policy.keepUncompressed || archives[i].extension() == compressExtension()) {
                continue;
            }
            auto target = std::filesystem::path{archives[i]}.concat(compressExtension());
            if (auto res = compress_utils::compressFile(archives[i], target, ArchiveFormat); !res) {
                reportSinkError(fmt::format("failed to compress {}: {}", archives[i].string(), res.error().message()));
                continue;
            }
            std::error_code ec;
            std::filesystem::remove(archives[i], ec);
        }
    }

    void cleanup() const {
        auto archives = collect();

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

    std::filesystem::path path;
    std::filesystem::path dir;
    std::string           extension;

    RotatePolicy policy;

    uint64 currentSize{};
    uint64 currentPeriod{};
    uint64 inheritedSize{};

    static std::shared_ptr<Impl> acquire(std::filesystem::path const& path, RotatePolicy policy) {
        static std::mutex                                                        registryMutex;
        static DenseMap<std::filesystem::path::string_type, std::weak_ptr<Impl>> registry;

        // normalizePath must stay inside the lock: an earlier acquire has then already created the file, so a
        // differently cased path resolves to its on-disk name and lands on the same key
        std::lock_guard lock{registryMutex};

        auto  normalized = sys_utils::normalizePath(path);
        auto& entry      = registry[normalized.native()];
        auto  impl       = entry.lock();
        if (!impl) {
            impl  = std::make_shared<Impl>(std::move(normalized), std::move(policy));
            entry = impl;
        }
        return impl;
    }

    Impl(std::filesystem::path filePath, RotatePolicy rotatePolicy)
    : path(std::move(filePath)),
      dir(path.parent_path()),
      extension(path.extension().string()),
      policy(std::move(rotatePolicy)) {
        open(false);
        auto now      = sys_utils::getLocalTime();
        currentPeriod = periodOf(now, policy.interval);
        if (policy.rotateOnOpen) {
            rotate(now);
        }
        inheritedSize = currentSize;
    }

    std::string archiveName(data::TmWithMs const& time, size_t index) const {
        return policy.namer(ArchiveNameInfo{time, index, policy.interval}) + extension;
    }

    void open(bool truncate) {
        std::error_code ec;
        std::filesystem::create_directories(dir, ec);

        // binary, so currentSize matches the bytes on disk
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
        // one task, so compression finishes before totalSizeCap weighs the archives
        getMaintenancePool().execute(
            [maintainer = ArchiveMaintainer{dir, path.filename().string(), extension, policy}] { maintainer.run(); }
        );
    }
};

FileSink::FileSink(std::filesystem::path const& path, Polymorphic<Formatter> formatter, RotatePolicy policy)
: Sink(std::move(formatter)),
  impl(Impl::acquire(path, std::move(policy))) {}

FileSink::~FileSink() = default;

std::shared_ptr<FileSink> const& FileSink::getDefault() {
    static auto ins = std::make_shared<FileSink>(
        file_utils::u8path(pl::pl_log_path) / u8"latest.log",
        makePolymorphic<PatternFormatter>("[{3:.3%F %T.} {2}][{1}] {0}", false)
    );
    return ins;
}

void FileSink::setFormatter(Polymorphic<Formatter> fmter) {
    std::lock_guard lock(impl->mutex);
    formatter = std::move(fmter);
}

void FileSink::append(LogMessageView const& view) {
    std::lock_guard lock(impl->mutex);
    std::string     buffer;
    formatter->format(view, buffer);

    auto const& policy = impl->policy;

    bool bySize =
        policy.maxFileSize > 0 && impl->currentSize > 0 && impl->currentSize + buffer.size() > policy.maxFileSize;
    bool byTime = policy.interval != RotateInterval::None && periodOf(view.tm, policy.interval) != impl->currentPeriod;
    if (bySize || byTime) {
        impl->rotate(view.tm);
    }

    impl->file << buffer;
    impl->currentSize += buffer.size();
    if (view.lvl <= flushLevel) {
        impl->file.flush();
    }
}

void FileSink::flush() {
    std::lock_guard lock(impl->mutex);
    impl->file.flush();
}

void FileSink::setFlushLevel(LogLevel level) {
    std::lock_guard lock(impl->mutex);
    flushLevel = level;
}

void FileSink::setPolicy(RotatePolicy policy) {
    std::lock_guard lock(impl->mutex);
    impl->policy        = std::move(policy);
    auto now            = sys_utils::getLocalTime();
    impl->currentPeriod = periodOf(now, impl->policy.interval);

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
