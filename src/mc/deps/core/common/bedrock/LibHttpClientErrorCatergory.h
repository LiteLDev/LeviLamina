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
    // vIndex: 0, symbol: __gen_??1LibHttpClientErrorCatergory@Http@Bedrock@@UEAA@XZ
    virtual ~LibHttpClientErrorCatergory() = default;

    // vIndex: 1, symbol: ?name@LibHttpClientErrorCatergory@Http@Bedrock@@UEBAPEBDXZ
    virtual char const* name() const;

    // vIndex: 2, symbol:
    // ?message@LibHttpClientErrorCatergory@Http@Bedrock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual std::string message(int) const;

    // vIndex: 3, symbol: ?default_error_condition@error_category@std@@UEBA?AVerror_condition@2@H@Z
    virtual std::error_condition default_error_condition(int) const;

    // vIndex: 4, symbol: ?equivalent@error_category@std@@UEBA_NHAEBVerror_condition@2@@Z
    virtual bool equivalent(int, std::error_condition const&) const;

    // vIndex: 5, symbol: ?equivalent@error_category@std@@UEBA_NAEBVerror_code@2@H@Z
    virtual bool equivalent(std::error_code const&, int) const;

    // symbol: ?getInstance@LibHttpClientErrorCatergory@Http@Bedrock@@SAAEBV123@XZ
    MCAPI static class Bedrock::Http::LibHttpClientErrorCatergory const& getInstance();

    // symbol: ?makeErrorResponse@LibHttpClientErrorCatergory@Http@Bedrock@@SA?AVResponse@23@J@Z
    MCAPI static class Bedrock::Http::Response makeErrorResponse(long);

    // symbol: ?make_error_code@LibHttpClientErrorCatergory@Http@Bedrock@@SA?AVerror_code@std@@J@Z
    MCAPI static std::error_code make_error_code(long);

    // NOLINTEND
};

}; // namespace Bedrock::Http
