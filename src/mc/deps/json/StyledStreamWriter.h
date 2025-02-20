#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class StyledStreamWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdf6a63;
    ::ll::UntypedStorage<8, 8>  mUnkd9fcde;
    ::ll::UntypedStorage<8, 32> mUnkebccaa;
    ::ll::UntypedStorage<4, 4>  mUnkda2712;
    ::ll::UntypedStorage<8, 32> mUnk5e7fc7;
    ::ll::UntypedStorage<1, 1>  mUnk689d12;
    // NOLINTEND

public:
    // prevent constructor by default
    StyledStreamWriter& operator=(StyledStreamWriter const&);
    StyledStreamWriter(StyledStreamWriter const&);
    StyledStreamWriter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StyledStreamWriter(::std::string indentation);

    MCAPI void indent();

    MCAPI bool isMultineArray(::Json::Value const& value);

    MCAPI void pushValue(::std::string const& value);

    MCAPI void unindent();

    MCAPI void writeArrayValue(::Json::Value const& value);

    MCAPI void writeValue(::Json::Value const& value);

    MCAPI ~StyledStreamWriter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string indentation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Json
