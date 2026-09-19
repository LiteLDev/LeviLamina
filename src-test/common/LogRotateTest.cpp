#include "gtest/gtest.h"

#include <algorithm>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <string>
#include <thread>
#include <vector>

#include "ll/api/io/FileSink.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/api/io/RotatePolicy.h"

#include "fmt/chrono.h"
#include "fmt/format.h"

#include "fmt/format.h"

namespace ll::io::test {

namespace fs = std::filesystem;

class LogRotateTest : public ::testing::Test {
protected:
    fs::path dir;

    void SetUp() override {
        dir = fs::temp_directory_path()
            / fmt::format("ll_rotate_test_{}", std::chrono::steady_clock::now().time_since_epoch().count());
        fs::create_directories(dir);
    }

    void TearDown() override {
        std::error_code ec;
        fs::remove_all(dir, ec);
    }

    fs::path active() const { return dir / "latest.log"; }

    static Polymorphic<Formatter> plainFormatter() { return makePolymorphic<PatternFormatter>("{0}", false); }

    // Rotation schedules compression and retention on a background thread; give it a moment before
    // inspecting the directory.
    static void settle() { std::this_thread::sleep_for(std::chrono::milliseconds{400}); }

    std::vector<std::string> names() const {
        std::vector<std::string> res;
        for (auto const& entry : fs::directory_iterator{dir}) {
            res.push_back(entry.path().filename().string());
        }
        std::sort(res.begin(), res.end());
        return res;
    }

    size_t countArchives() const {
        size_t n{};
        for (auto const& name : names()) {
            if (name != "latest.log") n++;
        }
        return n;
    }

    static LogMessageView message(std::string_view text, data::TmWithMs const& tm) {
        return LogMessageView{text, "test", LogLevel::Info, tm};
    }

    static data::TmWithMs timeAt(int year, int mon, int mday, int hour) {
        data::TmWithMs tm{};
        tm.tm_year = year - 1900;
        tm.tm_mon  = mon - 1;
        tm.tm_mday = mday;
        tm.tm_hour = hour;
        return tm;
    }
};

TEST_F(LogRotateTest, AppendsWithoutRotatingByDefault) {
    {
        // No policy at all, which is how a sink that should never rotate is written.
        FileSink sink{active(), plainFormatter()};
        sink.append(message("hello", timeAt(2026, 9, 19, 10)));
    }
    EXPECT_EQ(names(), std::vector<std::string>{"latest.log"});
}

TEST_F(LogRotateTest, WritesInPlaceWhenRotationIsExplicitlyDisabled) {
    {
        FileSink sink{active(), plainFormatter(), RotatePolicy::disabled()};
        sink.append(message("hello", timeAt(2026, 9, 19, 10)));
    }
    EXPECT_EQ(names(), std::vector<std::string>{"latest.log"});
}

TEST_F(LogRotateTest, DefaultConstructedPolicyNamesArchivesWithoutHelp) {
    // The namer defaults to defaultNamer, so no caller has to check it for emptiness.
    RotatePolicy policy{};
    ASSERT_TRUE(static_cast<bool>(policy.namer));
    EXPECT_EQ(policy.namer({timeAt(2026, 9, 19, 14), 0, RotateInterval::Daily}), "2026-09-19");
}

TEST_F(LogRotateTest, RotatesOnceTheSizeLimitWouldBeExceeded) {
    RotatePolicy policy{};
    policy.rotateOnOpen = false;
    policy.maxFileSize  = 32;
    policy.interval     = RotateInterval::None;
    policy.compress     = false;
    policy.cleanup      = false;

    auto tm = timeAt(2026, 9, 19, 10);
    {
        FileSink sink{active(), plainFormatter(), policy};
        for (int i = 0; i < 4; ++i) {
            sink.append(message("0123456789abcdef", tm));
        }
    }
    settle();
    // Each formatted message is 17 bytes against a 32 byte ceiling, so only one fits per file. The
    // limit is checked before writing, which is why it is never crossed rather than merely noticed.
    EXPECT_EQ(countArchives(), 3u);
    EXPECT_TRUE(fs::exists(dir / "2026-09-19.log"));
    EXPECT_TRUE(fs::exists(dir / "2026-09-19.1.log"));
    EXPECT_LE(fs::file_size(dir / "2026-09-19.log"), 32u);
}

TEST_F(LogRotateTest, KeepsAnOversizedMessageInOneFile) {
    RotatePolicy policy{};
    policy.rotateOnOpen = false;
    policy.maxFileSize  = 16;
    policy.interval     = RotateInterval::None;
    policy.compress     = false;
    policy.cleanup      = false;

    std::string big(200, 'x');
    {
        FileSink sink{active(), plainFormatter(), policy};
        sink.append(message(big, timeAt(2026, 9, 19, 10)));
    }
    settle();
    EXPECT_EQ(fs::file_size(active()), big.size() + 1);
}

TEST_F(LogRotateTest, RotatesWhenTheMessageDateChanges) {
    RotatePolicy policy{};
    policy.rotateOnOpen = false;
    policy.maxFileSize  = 0;
    policy.interval     = RotateInterval::Daily;
    policy.compress     = false;
    policy.cleanup      = false;

    {
        FileSink sink{active(), plainFormatter(), policy};
        sink.append(message("before midnight", timeAt(2026, 9, 19, 23)));
        sink.append(message("after midnight", timeAt(2026, 9, 20, 0)));
    }
    settle();
    // The archive carries the date of the messages it holds, not the date it was written out.
    EXPECT_TRUE(fs::exists(dir / "2026-09-20.log"));
    EXPECT_EQ(countArchives(), 1u);
}

TEST_F(LogRotateTest, DoesNotRotateWithinTheSameDay) {
    RotatePolicy policy{};
    policy.rotateOnOpen = false;
    policy.maxFileSize  = 0;
    policy.interval     = RotateInterval::Daily;
    policy.compress     = false;
    policy.cleanup      = false;

    {
        FileSink sink{active(), plainFormatter(), policy};
        sink.append(message("morning", timeAt(2026, 9, 19, 1)));
        sink.append(message("evening", timeAt(2026, 9, 19, 22)));
    }
    settle();
    EXPECT_EQ(countArchives(), 0u);
}

TEST_F(LogRotateTest, RotatesHourlyWhenAsked) {
    RotatePolicy policy{};
    policy.rotateOnOpen = false;
    policy.maxFileSize  = 0;
    policy.interval     = RotateInterval::Hourly;
    policy.compress     = false;
    policy.cleanup      = false;

    {
        FileSink sink{active(), plainFormatter(), policy};
        sink.append(message("ten", timeAt(2026, 9, 19, 10)));
        sink.append(message("eleven", timeAt(2026, 9, 19, 11)));
    }
    settle();
    EXPECT_TRUE(fs::exists(dir / "2026-09-19_11.log"));
}

TEST_F(LogRotateTest, NamesArchivesByTimestampWhateverTheFileIsCalled) {
    RotatePolicy policy{};
    policy.rotateOnOpen = false;
    policy.maxFileSize  = 0;
    policy.interval     = RotateInterval::Daily;
    policy.compress     = false;
    policy.cleanup      = false;

    {
        FileSink sink{dir / "server.log", plainFormatter(), policy};
        sink.append(message("before", timeAt(2026, 9, 19, 23)));
        sink.append(message("after", timeAt(2026, 9, 20, 0)));
    }
    settle();
    // The timestamp identifies the archive on its own, so the active file's name is not repeated.
    EXPECT_TRUE(fs::exists(dir / "2026-09-20.log"));
    EXPECT_TRUE(fs::exists(dir / "server.log"));
}

TEST_F(LogRotateTest, ArchivesThePreviousRunOnOpen) {
    {
        std::ofstream stale{active()};
        stale << "from an earlier run\n";
    }
    RotatePolicy policy{};
    policy.rotateOnOpen = true;
    policy.compress     = false;
    policy.cleanup      = false;

    {
        FileSink sink{active(), plainFormatter(), policy};
        sink.append(message("this run", timeAt(2026, 9, 19, 10)));
    }
    settle();
    EXPECT_EQ(countArchives(), 1u);
    EXPECT_EQ(fs::file_size(active()), std::string{"this run\n"}.size());
}

TEST_F(LogRotateTest, DoesNotArchiveAnEmptyFileOnOpen) {
    RotatePolicy policy{};
    policy.rotateOnOpen = true;
    policy.compress     = false;
    policy.cleanup      = false;

    { FileSink sink{active(), plainFormatter(), policy}; }
    settle();
    EXPECT_EQ(countArchives(), 0u);
}

TEST_F(LogRotateTest, HonoursRotateOnOpenForAPolicySetAfterConstruction) {
    {
        std::ofstream stale{active()};
        stale << "from an earlier run\n";
    }
    RotatePolicy policy{};
    policy.rotateOnOpen = true;
    policy.compress     = false;
    policy.cleanup      = false;

    {
        // This is how the loader wires it up: the sink opens before the configuration is readable.
        FileSink sink{active(), plainFormatter()};
        sink.setPolicy(policy);
        sink.append(message("this run", timeAt(2026, 9, 19, 10)));
    }
    settle();
    EXPECT_EQ(countArchives(), 1u);
}

TEST_F(LogRotateTest, KeepsAtMostMaxFilesArchives) {
    RotatePolicy policy{};
    policy.rotateOnOpen     = false;
    policy.maxFileSize      = 8;
    policy.interval         = RotateInterval::None;
    policy.compress         = false;
    policy.cleanup          = true;
    policy.maxFiles         = 2;
    policy.maxAgeDays       = 0;
    policy.totalSizeCap     = 0;
    policy.keepUncompressed = 0;

    {
        FileSink sink{active(), plainFormatter(), policy};
        for (int i = 0; i < 6; ++i) {
            sink.append(message("message", timeAt(2026, 9, 19, 10)));
            settle();
        }
    }
    settle();
    EXPECT_LE(countArchives(), 2u);
}

TEST_F(LogRotateTest, RemovesNothingWhenCleanupIsOff) {
    RotatePolicy policy{};
    policy.rotateOnOpen = false;
    policy.maxFileSize  = 8;
    policy.interval     = RotateInterval::None;
    policy.compress     = false;
    policy.cleanup      = false;
    policy.maxFiles     = 1;

    {
        FileSink sink{active(), plainFormatter(), policy};
        for (int i = 0; i < 4; ++i) {
            sink.append(message("message", timeAt(2026, 9, 19, 10)));
        }
    }
    settle();
    EXPECT_EQ(countArchives(), 3u);
}

TEST_F(LogRotateTest, LeavesUnrelatedFilesAlone) {
    auto bystander = dir / "notes.txt";
    {
        std::ofstream out{bystander};
        out << "not a log\n";
    }
    RotatePolicy policy{};
    policy.rotateOnOpen     = false;
    policy.maxFileSize      = 8;
    policy.interval         = RotateInterval::None;
    policy.compress         = false;
    policy.cleanup          = true;
    policy.maxFiles         = 1;
    policy.maxAgeDays       = 0;
    policy.totalSizeCap     = 0;
    policy.keepUncompressed = 0;

    {
        FileSink sink{active(), plainFormatter(), policy};
        for (int i = 0; i < 4; ++i) {
            sink.append(message("message", timeAt(2026, 9, 19, 10)));
            settle();
        }
    }
    settle();
    EXPECT_TRUE(fs::exists(bystander));
}

TEST_F(LogRotateTest, CleansUpArchivesFromACustomNamer) {
    RotatePolicy policy{};
    policy.rotateOnOpen     = false;
    policy.maxFileSize      = 8;
    policy.interval         = RotateInterval::None;
    policy.compress         = false;
    policy.cleanup          = true;
    policy.maxFiles         = 2;
    policy.maxAgeDays       = 0;
    policy.totalSizeCap     = 0;
    policy.keepUncompressed = 0;
    // A scheme that spells the middle section differently from the default. Retention still has to
    // recognize it, otherwise it silently stops reclaiming space.
    policy.namer = [](ArchiveNameInfo const& info) {
        auto name = fmt::format("{:%Y-%m-%d}_archived", info.time);
        if (info.index > 0) {
            name += fmt::format("~{}", info.index);
        }
        return name;
    };

    auto bystander = dir / "notes.txt";
    {
        std::ofstream out{bystander};
        out << "not a log\n";
    }

    {
        FileSink sink{active(), plainFormatter(), policy};
        for (int i = 0; i < 6; ++i) {
            sink.append(message("message", timeAt(2026, 9, 19, 10)));
            settle();
        }
    }
    settle();

    EXPECT_TRUE(fs::exists(dir / "2026-09-19_archived.log"));

    size_t archives{};
    for (auto const& name : names()) {
        if (name != "latest.log" && name.ends_with(".log")) archives++;
    }
    EXPECT_LE(archives, 2u);
    EXPECT_TRUE(fs::exists(bystander));
}

TEST_F(LogRotateTest, CompressesAllButTheNewestArchives) {
    RotatePolicy policy{};
    policy.rotateOnOpen     = false;
    policy.maxFileSize      = 8;
    policy.interval         = RotateInterval::None;
    policy.compress         = true;
    policy.keepUncompressed = 1;
    policy.cleanup          = false;

    {
        FileSink sink{active(), plainFormatter(), policy};
        for (int i = 0; i < 4; ++i) {
            sink.append(message("message", timeAt(2026, 9, 19, 10)));
            settle();
        }
    }
    settle();

    size_t plain{}, gz{};
    for (auto const& name : names()) {
        if (name == "latest.log") continue;
        (name.ends_with(".gz") ? gz : plain)++;
    }
    EXPECT_GT(gz, 0u);
    EXPECT_LE(plain, 1u);
}

TEST_F(LogRotateTest, DefaultNamerNumbersLaterArchivesInAnInterval) {
    auto tm = timeAt(2026, 9, 19, 14);
    // Only the middle section: the sink supplies the stem and extension around it.
    EXPECT_EQ(RotatePolicy::defaultNamer({tm, 0, RotateInterval::Daily}), "2026-09-19");
    EXPECT_EQ(RotatePolicy::defaultNamer({tm, 3, RotateInterval::Daily}), "2026-09-19.3");
    EXPECT_EQ(RotatePolicy::defaultNamer({tm, 0, RotateInterval::Hourly}), "2026-09-19_14");
}

} // namespace ll::io::test
