#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class SimpleStringBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2d6cd4;
    ::ll::UntypedStorage<8, 8>  mUnkb845df;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleStringBuilder& operator=(SimpleStringBuilder const&);
    SimpleStringBuilder(SimpleStringBuilder const&);
    SimpleStringBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::SimpleStringBuilder& AppendFormat(char const*, ...);

    MCNAPI explicit SimpleStringBuilder(::rtc::ArrayView<char>);

    MCNAPI ::rtc::SimpleStringBuilder& operator<<(uint);

    MCNAPI ::rtc::SimpleStringBuilder& operator<<(int);

    MCNAPI ::rtc::SimpleStringBuilder& operator<<(uint64);

    MCNAPI ::rtc::SimpleStringBuilder& operator<<(int64);

    MCNAPI ::rtc::SimpleStringBuilder& operator<<(char);

    MCNAPI ::rtc::SimpleStringBuilder& operator<<(::std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::ArrayView<char>);
    // NOLINTEND
};

} // namespace rtc
