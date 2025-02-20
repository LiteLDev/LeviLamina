#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class PathView {
public:
    // PathView inner types declare
    // clang-format off
    struct Hash;
    // clang-format on

    // PathView inner types define
    struct Hash {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5007a0;
    // NOLINTEND

public:
    // prevent constructor by default
    PathView& operator=(PathView const&);
    PathView(PathView const&);
    PathView();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PathView(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& src);

    MCAPI explicit PathView(::Core::Path const& src);

    MCAPI explicit PathView(::Core::PathBuffer<::std::string> const&);

    MCAPI PathView(::Core::PathView&&);

    MCAPI auto operator==(::Core::PathView const& rhs) const;

    MCAPI ~PathView();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& src);

    MCFOLD void* $ctor(::Core::Path const& src);

    MCAPI void* $ctor(::Core::PathBuffer<::std::string> const&);

    MCFOLD void* $ctor(::Core::PathView&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Core
