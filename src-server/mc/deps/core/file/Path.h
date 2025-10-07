#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/file/PathPart.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathPart.h"

namespace Core {

class Path {
public:
    // Path inner types declare
    // clang-format off
    struct path_less;
    // clang-format on

    // Path inner types define
    struct path_less {};

public:
    Path(std::filesystem::path const& path) : Path(path.u8string()) {}
    Path(std::u8string&& path) { mPathPart.mUtf8StdString = std::move(*reinterpret_cast<std::string*>(&path)); }
    Path(std::string&& path) { mPathPart.mUtf8StdString = std::move(path); }
    Path(std::u8string const& path) { mPathPart.mUtf8StdString = *reinterpret_cast<std::string const*>(&path); }
    Path(std::string const& path) { mPathPart.mUtf8StdString = path; }
    Path(char const* path) { mPathPart.mUtf8StdString = path; }
    Path() = default;

public:
    // prevent constructor by default
    Path& operator=(Path const&);
    Path(Path const&);

public:
    // member variables
    // NOLINTBEGIN
    ::Core::PathPart mPathPart;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::Path const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::std::string&& str);

    MCNAPI void* $ctor(char const* str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
