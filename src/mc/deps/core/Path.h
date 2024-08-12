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
    PathPart mPath;
    Path(std::filesystem::path const& path) : Path(path.u8string()) {}
    Path(std::u8string const& path) { mPath.mUtf8StdString = *reinterpret_cast<std::string const*>(&path); }
    Path(std::string const& path) { mPath.mUtf8StdString = path; }
    Path(char const* path) { mPath.mUtf8StdString = path; }
    Path() = default;

public:
    // NOLINTBEGIN
    MCAPI bool operator==(class Core::Path const&) const;

    MCAPI static class Core::Result makeFailure(char const* format, class Core::Path&& path);

    MCAPI static class Core::Path const EMPTY;

    // NOLINTEND
};

}; // namespace Core
