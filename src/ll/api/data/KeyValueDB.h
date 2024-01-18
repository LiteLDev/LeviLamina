#pragma once

#include <filesystem>
#include <functional>
#include <memory>
#include <optional>
#include <string_view>
#include <unordered_map>

#include "ll/api/base/Macro.h"

namespace ll::inline data {
class KeyValueDB {
private:
    class KeyValueDBImpl;

    std::unique_ptr<KeyValueDBImpl> impl;

public:
    LLNDAPI KeyValueDB(std::filesystem::path const& dir, bool createIfMiss = true, int bloomFilterBit = 0);

    KeyValueDB(KeyValueDB const&) noexcept = delete;

    KeyValueDB& operator=(KeyValueDB const&) noexcept = delete;

    LLNDAPI KeyValueDB(KeyValueDB&&) noexcept;

    LLAPI KeyValueDB& operator=(KeyValueDB&&) noexcept;

    LLAPI ~KeyValueDB();

    LLNDAPI std::optional<std::string> get(std::string_view key) const;

    LLAPI bool set(std::string_view key, std::string_view val);

    LLAPI bool del(std::string_view key);

    LLAPI void iter(std::function<bool(std::string_view, std::string_view)> const& fn) const;

    LLNDAPI std::vector<std::string> getAllKeys() const;
};

} // namespace ll::inline data
