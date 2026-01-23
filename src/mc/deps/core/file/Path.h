#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathPart.h"

namespace Core {

class Path {
public:
    struct path_less {
        bool operator()(const Path& lhs, const Path& rhs) const noexcept {
            return lhs.getUtf8StdString() < rhs.getUtf8StdString();
        }
    };

public:
    PathPart mPathPart;

public:
    Path() = default;

    Path(std::filesystem::path const& path) : Path(path.u8string()) {}
    Path(std::u8string&& path) { mPathPart.mUtf8StdString = std::move(*reinterpret_cast<std::string*>(&path)); }
    Path(std::string&& path) { mPathPart.mUtf8StdString = std::move(path); }
    Path(std::u8string const& path) { mPathPart.mUtf8StdString = *reinterpret_cast<std::string const*>(&path); }
    Path(std::string const& path) { mPathPart.mUtf8StdString = path; }
    Path(char const* path) { mPathPart.mUtf8StdString = path; }

    Path(const PathPart& part) : mPathPart{std::move(part)} {}

    Path(const Path& other) = default;

    Path(Path&& other) noexcept : mPathPart{std::move(other.mPathPart)} {}

    Path& operator=(const Path& other) {
        if (this != &other) mPathPart.mUtf8StdString = other.mPathPart.mUtf8StdString;
        return *this;
    }

    Path& operator=(Path&& other) noexcept {
        if (this != &other) mPathPart.mUtf8StdString = std::move(other.mPathPart.mUtf8StdString);
        return *this;
    }

    bool operator<(const Path& rhs) const noexcept { return mPathPart.mUtf8StdString < rhs.mPathPart.mUtf8StdString; }

    bool operator==(const Path& rhs) const noexcept { return mPathPart.mUtf8StdString == rhs.mPathPart.mUtf8StdString; }

    [[nodiscard]] const char* getUtf8CString() const noexcept { return mPathPart.mUtf8StdString.c_str(); }

    [[nodiscard]] std::string_view getUtf8StringView() const noexcept { return mPathPart.mUtf8StdString; }

    [[nodiscard]] const std::string& getUtf8StdString() const noexcept { return mPathPart.mUtf8StdString; }

    [[nodiscard]] size_t size() const noexcept { return mPathPart.mUtf8StdString.size(); }

    [[nodiscard]] bool empty() const noexcept { return mPathPart.mUtf8StdString.empty(); }

    [[nodiscard]] bool isAbsolute() const noexcept {
#ifdef _WIN32
        auto const& s = mPathPart.mUtf8StdString;
        if (s.size() >= 2 && std::isalpha(static_cast<unsigned char>(s[0])) && s[1] == ':') return true;
        if (s.size() >= 2 && s[0] == '\\' && s[1] == '\\') return true;
        return false;
#else
        auto const& s = mPathPart.mUtf8StdString;
        return !s.empty() && s.front() == '/';
#endif
    }

    [[nodiscard]] bool isDotOrDotDot() const noexcept {
        return mPathPart.mUtf8StdString == "." || mPathPart.mUtf8StdString == "..";
    }

    // Static constant EMPTY
    static const Path& EMPTY() {
        static const Path emptyPath("");
        return emptyPath;
    }
};

} // namespace Core
