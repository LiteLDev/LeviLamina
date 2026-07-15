#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ContentGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd187ec;
    ::ll::UntypedStorage<8, 24> mUnkc01694;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddContentName(::std::string_view content_name);

    MCNAPI ContentGroup(::webrtc::ContentGroup&&);

    MCNAPI ContentGroup(::webrtc::ContentGroup const&);

    MCNAPI explicit ContentGroup(::std::string const& semantics);

    MCNAPI ::std::string const* FirstContentName() const;

    MCNAPI bool HasContentName(::std::string_view content_name) const;

    MCNAPI bool RemoveContentName(::std::string_view content_name);

    MCNAPI ::std::string ToString() const;

    MCNAPI ::webrtc::ContentGroup& operator=(::webrtc::ContentGroup const&);

    MCNAPI ~ContentGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::ContentGroup&&);

    MCNAPI void* $ctor(::webrtc::ContentGroup const&);

    MCNAPI void* $ctor(::std::string const& semantics);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
