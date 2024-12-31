#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Writer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class MinecraftJsonStyledWriter : public ::Json::Writer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7a87b5;
    ::ll::UntypedStorage<8, 32> mUnkcc8d6d;
    ::ll::UntypedStorage<8, 32> mUnkf33152;
    ::ll::UntypedStorage<4, 4>  mUnk5b5953;
    ::ll::UntypedStorage<4, 4>  mUnkc1eccf;
    ::ll::UntypedStorage<1, 1>  mUnk2dbaac;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftJsonStyledWriter& operator=(MinecraftJsonStyledWriter const&);
    MinecraftJsonStyledWriter(MinecraftJsonStyledWriter const&);
    MinecraftJsonStyledWriter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftJsonStyledWriter() /*override*/ = default;

    // vIndex: 1
    virtual ::std::string write(::Json::Value const&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Json
