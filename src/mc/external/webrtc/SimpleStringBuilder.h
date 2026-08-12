#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

namespace webrtc {

class SimpleStringBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb514f3;
    ::ll::UntypedStorage<8, 8>  mUnkffdc98;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleStringBuilder& operator=(SimpleStringBuilder const&);
    SimpleStringBuilder(SimpleStringBuilder const&);
    SimpleStringBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::SimpleStringBuilder& AppendFormat(char const* fmt, ...);

    MCNAPI explicit SimpleStringBuilder(::webrtc::ArrayView<char> buffer);

    MCNAPI ::webrtc::SimpleStringBuilder& operator<<(char ch);

    MCNAPI ::webrtc::SimpleStringBuilder& operator<<(int i);

    MCNAPI ::webrtc::SimpleStringBuilder& operator<<(uint i);

    MCNAPI ::webrtc::SimpleStringBuilder& operator<<(int64 i);

    MCNAPI ::webrtc::SimpleStringBuilder& operator<<(uint64 i);

    MCNAPI ::webrtc::SimpleStringBuilder& operator<<(::std::string_view str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::ArrayView<char> buffer);
    // NOLINTEND
};

} // namespace webrtc
