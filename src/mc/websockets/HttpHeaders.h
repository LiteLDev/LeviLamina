#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class HttpHeaders {
public:
    // HttpHeaders inner types define
    enum class ParseState {};

public:
    // prevent constructor by default
    HttpHeaders& operator=(HttpHeaders const&);
    HttpHeaders(HttpHeaders const&);
    HttpHeaders();

public:
    // NOLINTBEGIN
    MCAPI void clear();

    MCAPI bool getHeader(std::string const& name, std::string& outValue) const;

    MCAPI std::string getStatusCode() const;

    MCAPI ::HttpHeaders::ParseState parse(class RakNet::BitStream& data);

    MCAPI ~HttpHeaders();

    // NOLINTEND
};
