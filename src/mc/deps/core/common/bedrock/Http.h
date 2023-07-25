#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class LibHttpClientInstance; }
namespace Bedrock::Http { enum class ClientErrorCode; }
// clang-format on

namespace Bedrock::Http {
/**
 * @symbol
 * ?getStringDataAsSpan\@Http\@Bedrock\@\@YA?AV?$span\@$$CBE$0?0\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI class gsl::span<unsigned char const, -1> getStringDataAsSpan(std::string const&);
/**
 * @symbol
 * ?initializeLibHttpClient\@Http\@Bedrock\@\@YA?AV?$shared_ptr\@VLibHttpClientInstance\@Http\@Bedrock\@\@\@std\@\@XZ
 */
MCAPI class std::shared_ptr<class Bedrock::Http::LibHttpClientInstance> initializeLibHttpClient();
/**
 * @symbol
 * ?interpretDataAsUtf8String\@Http\@Bedrock\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$span\@$$CBE$0?0\@gsl\@\@\@Z
 */
MCAPI std::string interpretDataAsUtf8String(class gsl::span<unsigned char const, -1>);
/**
 * @symbol ?isInitialized\@Http\@Bedrock\@\@YA_NXZ
 */
MCAPI bool isInitialized();
/**
 * @symbol ?make_error_code\@Http\@Bedrock\@\@YA?AVerror_code\@std\@\@W4ClientErrorCode\@12\@\@Z
 */
MCAPI class std::error_code make_error_code(enum class Bedrock::Http::ClientErrorCode);

}; // namespace Bedrock::Http
