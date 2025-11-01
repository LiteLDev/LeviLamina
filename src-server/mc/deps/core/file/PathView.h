#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

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
    struct path_view_less;
    // clang-format on
    
    // PathView inner types define
    struct Hash {
    };
    
    struct path_view_less {
    };
    
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
    MCNAPI explicit PathView(::Core::Path const& src);

    MCNAPI explicit PathView(::Core::PathBuffer<::std::string> const&);

    MCNAPI PathView(::Core::PathView&&);

    MCNAPI bool isAbsolute() const;

    MCNAPI auto operator==(::Core::PathView const& rhs) const;

    MCNAPI ~PathView();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const& src);

    MCNAPI void* $ctor(::Core::PathBuffer<::std::string> const&);

    MCNAPI void* $ctor(::Core::PathView&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
