#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/PathPart.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core {

class Path {
public:
    class PathPart mPath;
    explicit Path(std::filesystem::path const& path) : Path(path.u8string()) {}
    explicit Path(std::u8string const& path) { mPath.mUtf8StdString = *reinterpret_cast<std::string const*>(&path); }
    explicit Path(std::string const& path) { mPath.mUtf8StdString = path; }

public:
    // NOLINTBEGIN
    MCAPI Path();

    MCAPI explicit Path(char const*);

    MCAPI bool operator==(class Core::Path const&) const;

    MCAPI ~Path();

    MCAPI static class Core::Result makeFailure(char const* format, class Core::Path&& path);

    MCAPI static class Core::Path const EMPTY;

    // NOLINTEND
};

}; // namespace Core
