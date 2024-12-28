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
    MCAPI ::rtc::SimpleStringBuilder& AppendFormat(char const*, ...);

    MCAPI explicit SimpleStringBuilder(::rtc::ArrayView<char>);

    MCAPI ::rtc::SimpleStringBuilder& operator<<(uint);

    MCAPI ::rtc::SimpleStringBuilder& operator<<(int);

    MCAPI ::rtc::SimpleStringBuilder& operator<<(uint64);

    MCAPI ::rtc::SimpleStringBuilder& operator<<(int64);

    MCAPI ::rtc::SimpleStringBuilder& operator<<(char);

    MCAPI ::rtc::SimpleStringBuilder& operator<<(::std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::ArrayView<char>);
    // NOLINTEND
};

} // namespace rtc
