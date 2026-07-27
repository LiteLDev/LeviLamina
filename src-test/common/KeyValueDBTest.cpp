#include "gtest/gtest.h"

#include <atomic>
#include <chrono>
#include <filesystem>
#include <string>
#include <system_error>

#include "ll/api/data/KeyValueDB.h"

namespace {

class TemporaryDirectory {
    std::filesystem::path path;

public:
    TemporaryDirectory() {
        static std::atomic_uint64_t sequence{0};
        auto const                  timestamp = std::chrono::steady_clock::now().time_since_epoch().count();
        path                                  = std::filesystem::temp_directory_path()
             / ("levilamina-key-value-db-test-" + std::to_string(timestamp) + "-"
                + std::to_string(sequence.fetch_add(1, std::memory_order_relaxed)));
    }

    TemporaryDirectory(TemporaryDirectory const&)            = delete;
    TemporaryDirectory& operator=(TemporaryDirectory const&) = delete;

    ~TemporaryDirectory() {
        std::error_code ec;
        std::filesystem::remove_all(path, ec);
    }

    std::filesystem::path const& get() const { return path; }
};

} // namespace

TEST(KeyValueDBTest, WriteBatchAppliesMixedOperationsInOrder) {
    TemporaryDirectory directory;

    {
        ll::data::KeyValueDB db(directory.get());
        ASSERT_TRUE(db.set("removed", "old"));
        ASSERT_TRUE(db.set("replaced", "old"));

        std::string source = "owned by the batch";

        ll::data::KeyValueDB::WriteBatch batch;
        batch.set("inserted", source)
            .set("replaced", "new")
            .del("removed")
            .set("ordered", "first")
            .del("ordered")
            .set("ordered", "last");

        source = "changed after set";

        EXPECT_FALSE(db.has("inserted"));
        EXPECT_TRUE(db.has("removed"));

        ASSERT_TRUE(db.write(batch));

        auto inserted = db.get("inserted");
        ASSERT_TRUE(inserted.has_value());
        EXPECT_EQ(*inserted, "owned by the batch");

        auto replaced = db.get("replaced");
        ASSERT_TRUE(replaced.has_value());
        EXPECT_EQ(*replaced, "new");

        EXPECT_FALSE(db.has("removed"));

        auto ordered = db.get("ordered");
        ASSERT_TRUE(ordered.has_value());
        EXPECT_EQ(*ordered, "last");
    }
}
