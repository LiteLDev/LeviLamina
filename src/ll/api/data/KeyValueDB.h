#pragma once

#include <filesystem>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/coro/Generator.h"

namespace ll::data {
class KeyValueDB {
private:
    class KeyValueDBImpl;

    std::unique_ptr<KeyValueDBImpl> impl;

public:
    class WriteBatch {
        friend class KeyValueDB;

        class WriteBatchImpl;

        std::unique_ptr<WriteBatchImpl> impl;

    public:
        LLNDAPI WriteBatch();

        WriteBatch(WriteBatch const&) noexcept = delete;

        WriteBatch& operator=(WriteBatch const&) noexcept = delete;

        LLNDAPI WriteBatch(WriteBatch&&) noexcept;

        LLAPI WriteBatch& operator=(WriteBatch&&) noexcept;

        LLAPI ~WriteBatch();

        LLAPI WriteBatch& set(std::string_view key, std::string_view val);

        LLAPI WriteBatch& del(std::string_view key);
    };

    LLNDAPI explicit KeyValueDB(std::filesystem::path const& path);

    LLNDAPI explicit KeyValueDB(
        std::filesystem::path const& path,
        bool                         createIfMiss,
        bool                         fixIfError,
        int                          bloomFilterBit
    );

    KeyValueDB(KeyValueDB const&) noexcept = delete;

    KeyValueDB& operator=(KeyValueDB const&) noexcept = delete;

    LLNDAPI KeyValueDB(KeyValueDB&&) noexcept;

    LLAPI KeyValueDB& operator=(KeyValueDB&&) noexcept;

    LLAPI ~KeyValueDB();

    LLNDAPI std::optional<std::string> get(std::string_view key) const;

    LLNDAPI bool has(std::string_view key) const;

    LLNDAPI bool empty() const;

    LLAPI bool set(std::string_view key, std::string_view val);

    LLAPI bool del(std::string_view key);

    LLAPI bool write(WriteBatch const& batch);

    LLNDAPI coro::Generator<std::pair<std::string_view, std::string_view>> iter() const;
};

} // namespace ll::data
