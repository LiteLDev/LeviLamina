#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class HttpHeaders {
public:
    // HttpHeaders inner types define
    enum class ParseState : int {
        ProcessStatusLine = 0,
        StatusLineDone    = 1,
        NewField          = 2,
        Name              = 3,
        Value             = 4,
        AddField          = 5,
        ProcessFields     = 6,
        Done              = 7,
        Abort             = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk322ef0;
    ::ll::UntypedStorage<8, 32> mUnk753f06;
    ::ll::UntypedStorage<4, 4>  mUnk283a8f;
    ::ll::UntypedStorage<8, 32> mUnkdd9fc0;
    ::ll::UntypedStorage<8, 32> mUnkc407e8;
    ::ll::UntypedStorage<8, 8>  mUnk538f94;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpHeaders& operator=(HttpHeaders const&);
    HttpHeaders(HttpHeaders const&);
    HttpHeaders();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getHeader(::std::string const& name, ::std::string& outValue) const;

    MCNAPI ::std::string getStatusCode() const;

    MCNAPI ::HttpHeaders::ParseState parse(::RakNet::BitStream& data);

    MCNAPI ~HttpHeaders();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
