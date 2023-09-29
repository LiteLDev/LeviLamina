#pragma once

#include <functional>
#include <memory>
#include <optional>
#include <string_view>
#include <unordered_map>

#include "leveldb/db.h"

#include "liteloader/api/base/Macro.h"

namespace ll {
class KeyValueDB {
private:
    class KeyValueDBImpl;

    std::unique_ptr<KeyValueDBImpl> impl;

    KeyValueDB() = default;

public:
    LLAPI static std::unique_ptr<KeyValueDB>
    create(std::string const& path, bool readCache = true, int cacheSize = 0, int filterBit = 0);

    LLAPI static std::unique_ptr<KeyValueDB>
    open(std::string const& path, bool create = true, bool readCache = true, int cacheSize = 0, int filterBit = 0);

    LLAPI ~KeyValueDB();

    KeyValueDB(KeyValueDB const&) = delete;

    KeyValueDB& operator=(KeyValueDB const&) = delete;

    LLNDAPI std::optional<std::string> get(std::string_view key) const;

    LLNDAPI bool set(std::string_view key, std::string_view val);

    LLNDAPI bool del(std::string_view key);

    LLAPI void iter(std::function<bool(std::string_view, std::string_view)> const& fn) const;

    LLNDAPI std::string error() const;

    LLNDAPI std::vector<std::string> getAllKeys() const;

    LLNDAPI bool isValid() const;

    LLAPI operator bool() const; // NOLINT(google-explicit-constructor)
};

} // namespace ll
