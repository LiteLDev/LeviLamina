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
    // symbol: ??0Path@Core@@QEAA@XZ
    MCAPI Path();

    // symbol: ??0Path@Core@@QEAA@PEBD@Z
    MCAPI explicit Path(char const*);

    // symbol: ??8Path@Core@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class Core::Path const&) const;

    // symbol: ??1Path@Core@@QEAA@XZ
    MCAPI ~Path();

    // symbol: ?makeFailure@Path@Core@@SA?AVResult@2@PEBD$$QEAV12@@Z
    MCAPI static class Core::Result makeFailure(char const* format, class Core::Path&& path);

    // symbol: ?EMPTY@Path@Core@@2V12@B
    MCAPI static class Core::Path const EMPTY;

    // NOLINTEND
};

}; // namespace Core
