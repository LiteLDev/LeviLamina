#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class LibHttpClientErrorCatergory {
public:
    // prevent constructor by default
    LibHttpClientErrorCatergory& operator=(LibHttpClientErrorCatergory const&);
    LibHttpClientErrorCatergory(LibHttpClientErrorCatergory const&);
    LibHttpClientErrorCatergory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LibHttpClientErrorCatergory() = default;

    // vIndex: 1
    virtual char const* name() const;

    // vIndex: 2
    virtual std::string message(int condition) const;

    // vIndex: 3
    virtual std::error_condition default_error_condition(int) const;

    // vIndex: 4
    virtual bool equivalent(int, std::error_condition const&) const;

    // vIndex: 5
    virtual bool equivalent(std::error_code const&, int) const;

    MCAPI static class Bedrock::Http::LibHttpClientErrorCatergory const& getInstance();

    MCAPI static class Bedrock::Http::Response makeErrorResponse(long);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI std::error_condition default_error_condition$(int) const;

    MCAPI bool equivalent$(int, std::error_condition const&) const;

    MCAPI bool equivalent$(std::error_code const&, int) const;

    MCAPI std::string message$(int condition) const;

    MCAPI char const* name$() const;

    // NOLINTEND
};

}; // namespace Bedrock::Http
