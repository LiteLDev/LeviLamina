#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/file/PathPart.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathPart; }
// clang-format on

namespace Core {

class Path : public ::Core::PathBuffer<::std::string> {
public:
    using Base = ::Core::PathBuffer<::std::string>;

    Path() = default;

    Path(std::filesystem::path const& path) : Path(path.u8string()) {}
    Path(std::u8string&& path) { value = std::move(*reinterpret_cast<std::string*>(&path)); }
    Path(std::string&& path) { value = std::move(path); }
    Path(std::u8string const& path) { value = *reinterpret_cast<std::string const*>(&path); }
    Path(std::string const& path) { value = path; }
    Path(char const* path) { value = path; }

    Path(PathPart const& part) : Base{std::move(part.mUtf8StdString)} {}

    Path(const Path& other) = default;

    Path(Path&& other) noexcept : Base{std::move(other.value)} {}

    Path& operator=(const Path& other) {
        if (this != &other) value = other.value;
        return *this;
    }

    Path& operator=(Path&& other) noexcept {
        if (this != &other) value = std::move(other.value);
        return *this;
    }

    bool operator<(const Path& rhs) const noexcept { return value < rhs.value; }

    bool operator==(const Path& rhs) const noexcept { return value == rhs.value; }

    [[nodiscard]] const char* getUtf8CString() const noexcept { return value.c_str(); }

    [[nodiscard]] std::string_view getUtf8StringView() const noexcept { return value; }

    [[nodiscard]] const std::string& getUtf8StdString() const noexcept { return value; }

    [[nodiscard]] size_t size() const noexcept { return value.size(); }

    [[nodiscard]] bool empty() const noexcept { return value.empty(); }

    [[nodiscard]] bool isAbsolute() const noexcept {
#ifdef _WIN32
        auto const& s = value;
        if (s.size() >= 2 && std::isalpha(static_cast<unsigned char>(s[0])) && s[1] == ':') return true;
        if (s.size() >= 2 && s[0] == '\\' && s[1] == '\\') return true;
        return false;
#else
        auto const& s = value;
        return !s.empty() && s.front() == '/';
#endif
    }

    [[nodiscard]] bool isDotOrDotDot() const noexcept {
        return value == "." || value == "..";
    }

    // Static constant EMPTY
    static const Path& EMPTY() {
        static const Path emptyPath("");
        return emptyPath;
    }
};

} // namespace Core
