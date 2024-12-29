#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/file/PathPart.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathPart; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class Path {
public:
    // Path inner types declare
    // clang-format off
    struct path_less;
    // clang-format on

    // Path inner types define
    struct path_less {
    public:
        // prevent constructor by default
        path_less& operator=(path_less const&);
        path_less(path_less const&);
        path_less();
    };

public:
    Path(std::filesystem::path const& path) : Path(path.u8string()) {}
    Path(std::u8string const& path) { mPathPart.mUtf8StdString = *reinterpret_cast<std::string const*>(&path); }
    Path(std::string const& path) { mPathPart.mUtf8StdString = path; }
    Path(char const* path) { mPathPart.mUtf8StdString = path; }
    Path() = default;

public:
    // member variables
    // NOLINTBEGIN
    ::Core::PathPart mPathPart;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Path(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&);

    MCAPI explicit Path(::Core::PathBuffer<::std::string> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result makeFailure(char const* format, ::Core::PathView path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::Path const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&);

    MCAPI void* $ctor(::Core::PathBuffer<::std::string> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
