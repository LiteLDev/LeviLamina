#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class PathView {
public:
    ~PathView() = default;

    PathView(const PathView& other)            = default;
    PathView& operator=(const PathView& other) = default;

    PathView(PathView&& other) noexcept            = default;
    PathView& operator=(PathView&& other) noexcept = default;

    explicit PathView(const std::string& s) : mSrc(s) {}
    explicit PathView(const char* s) : mSrc(s ? s : "") {}
    explicit PathView(std::string_view s) : mSrc(s) {}

    PathView(const Core::Path& src) : mSrc(src.getUtf8StdString()) {}

    [[nodiscard]] size_t size() const { return mSrc.size(); }
    [[nodiscard]] bool   empty() const { return mSrc.empty(); }

    [[nodiscard]] std::string_view getUtf8StringView() const { return mSrc; }
    [[nodiscard]] const char*      getUtf8CString() const { return mSrc.data(); }

    [[nodiscard]] bool isAbsolute() const {
#ifdef _WIN32
        if (mSrc.size() >= 2 && std::isalpha((unsigned char)mSrc[0]) && mSrc[1] == ':') return true;
        if (mSrc.size() >= 2 && mSrc[0] == '\\' && mSrc[1] == '\\') return true;
        return false;
#else
        return !mSrc.empty() && mSrc.front() == '/';
#endif
    }

private:
    std::string_view mSrc;
};

} // namespace Core
