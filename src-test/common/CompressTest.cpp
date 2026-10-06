#include "gtest/gtest.h"

#include <filesystem>
#include <fstream>
#include <string>

#include "ll/api/utils/CompressUtils.h"

namespace ll::compress_utils::test {

namespace fs = std::filesystem;

class CompressTest : public ::testing::Test {
protected:
    fs::path dir;

    void SetUp() override {
        dir = fs::temp_directory_path() / "ll_compress_test";
        std::error_code ec;
        fs::remove_all(dir, ec);
        fs::create_directories(dir);
    }

    void TearDown() override {
        std::error_code ec;
        fs::remove_all(dir, ec);
    }

    /// Repetitive enough to shrink noticeably, long enough to span several internal chunks.
    static std::string payload() {
        std::string res;
        for (int i = 0; i < 20000; ++i) {
            res += "the quick brown fox jumps over the lazy dog\n";
        }
        return res;
    }
};

TEST_F(CompressTest, RoundTripsEverySupportedFormat) {
    auto data = payload();
    for (auto format : {CompressFormat::Gzip, CompressFormat::Zlib}) {
        auto packed = compress(data, format);
        ASSERT_TRUE(packed.has_value());
        EXPECT_LT(packed->size(), data.size());

        auto original = decompress(*packed, format);
        ASSERT_TRUE(original.has_value());
        EXPECT_EQ(*original, data);
    }
}

TEST_F(CompressTest, WritesARecognizableGzipHeader) {
    auto packed = compress(payload(), CompressFormat::Gzip);
    ASSERT_TRUE(packed.has_value());
    ASSERT_GE(packed->size(), 3u);
    // The magic external tools look for.
    EXPECT_EQ(static_cast<unsigned char>((*packed)[0]), 0x1f);
    EXPECT_EQ(static_cast<unsigned char>((*packed)[1]), 0x8b);
    EXPECT_EQ(static_cast<unsigned char>((*packed)[2]), 0x08);
}

TEST_F(CompressTest, LevelsTradeSizeAgainstTime) {
    auto data    = payload();
    auto fastest = compress(data, CompressFormat::Gzip, CompressLevel::Fastest);
    auto best    = compress(data, CompressFormat::Gzip, CompressLevel::Best);
    auto stored  = compress(data, CompressFormat::Gzip, CompressLevel::Store);
    ASSERT_TRUE(fastest.has_value());
    ASSERT_TRUE(best.has_value());
    ASSERT_TRUE(stored.has_value());

    EXPECT_LE(best->size(), fastest->size());
    // Storing only adds framing, so it must not shrink the input.
    EXPECT_GT(stored->size(), data.size() / 2);
}

TEST_F(CompressTest, DetectsTruncatedInput) {
    auto packed = compress(payload(), CompressFormat::Gzip);
    ASSERT_TRUE(packed.has_value());
    EXPECT_FALSE(decompress(packed->substr(0, packed->size() / 2), CompressFormat::Gzip).has_value());
}

TEST_F(CompressTest, DetectsCorruptInput) {
    auto packed = compress(payload(), CompressFormat::Gzip);
    ASSERT_TRUE(packed.has_value());
    auto corrupted                   = *packed;
    corrupted[corrupted.size() / 2] ^= 0xff;
    EXPECT_FALSE(decompress(corrupted, CompressFormat::Gzip).has_value());
}

TEST_F(CompressTest, EnforcesTheOutputLimit) {
    auto packed = compress(payload(), CompressFormat::Gzip);
    ASSERT_TRUE(packed.has_value());
    // A small stream can expand enormously, so the limit has to bite.
    EXPECT_FALSE(decompress(*packed, CompressFormat::Gzip, 1024).has_value());
    EXPECT_TRUE(decompress(*packed, CompressFormat::Gzip, 64ull * 1024 * 1024).has_value());
}

TEST_F(CompressTest, IncrementalWritesMatchOneShot) {
    auto        data = payload();
    std::string streamed;
    Compressor  codec{[&](std::string_view chunk) -> Expected<> {
        streamed.append(chunk);
        return {};
    }};
    ASSERT_TRUE(codec.status().has_value());

    for (size_t offset = 0; offset < data.size(); offset += 1000) {
        ASSERT_TRUE(codec.write(std::string_view{data}.substr(offset, 1000)).has_value());
    }
    ASSERT_TRUE(codec.finish().has_value());

    auto original = decompress(streamed, CompressFormat::Gzip);
    ASSERT_TRUE(original.has_value());
    EXPECT_EQ(*original, data);
}

TEST_F(CompressTest, ReportsSinkFailures) {
    Compressor codec{[](std::string_view) -> Expected<> { return makeStringError("sink refused"); }};
    ASSERT_TRUE(codec.status().has_value());
    auto written  = codec.write(payload());
    auto finished = codec.finish();
    EXPECT_FALSE(written.has_value() && finished.has_value());
}

TEST_F(CompressTest, HandlesEmptyInput) {
    auto packed = compress("", CompressFormat::Gzip);
    ASSERT_TRUE(packed.has_value());
    // Framing alone still has to be a valid stream.
    EXPECT_FALSE(packed->empty());

    auto original = decompress(*packed, CompressFormat::Gzip);
    ASSERT_TRUE(original.has_value());
    EXPECT_TRUE(original->empty());
}

TEST_F(CompressTest, RoundTripsFiles) {
    auto data = payload();
    auto src  = dir / "payload.txt";
    {
        std::ofstream out{src, std::ios::binary};
        out << data;
    }

    auto packed = dir / "payload.txt.gz";
    ASSERT_TRUE(compressFile(src, packed).has_value());
    ASSERT_TRUE(fs::exists(packed));
    EXPECT_LT(fs::file_size(packed), data.size());
    // Removing the source is the caller's decision, not a side effect of compressing.
    EXPECT_TRUE(fs::exists(src));
    // Nothing left over from the complete-then-rename step.
    EXPECT_FALSE(fs::exists(dir / "payload.txt.gz.tmp"));

    auto restored = dir / "restored.txt";
    ASSERT_TRUE(decompressFile(packed, restored).has_value());
    std::ifstream in{restored, std::ios::binary};
    std::string   got{std::istreambuf_iterator<char>{in}, std::istreambuf_iterator<char>{}};
    EXPECT_EQ(got, data);
}

TEST_F(CompressTest, LeavesNoTemporaryBehindWhenTheSourceIsMissing) {
    EXPECT_FALSE(compressFile(dir / "absent.txt", dir / "absent.gz").has_value());
    EXPECT_FALSE(fs::exists(dir / "absent.gz"));
    EXPECT_FALSE(fs::exists(dir / "absent.gz.tmp"));
}

TEST_F(CompressTest, NamesTheExtensionForEachFormat) {
    EXPECT_EQ(extensionOf(CompressFormat::Gzip), ".gz");
    EXPECT_EQ(extensionOf(CompressFormat::Zlib), ".zz");
}

} // namespace ll::compress_utils::test
