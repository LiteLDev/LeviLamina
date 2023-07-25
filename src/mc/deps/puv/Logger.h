#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { enum class ResultCode; }
// clang-format on

namespace Puv {

struct Logger {
public:
    // Logger inner types declare
    // clang-format off
    struct UpgradeLogEntry;
    // clang-format on

    // Logger inner types define
    enum class UpgradeResultCode {};

    struct UpgradeLogEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUV_LOGGER_UPGRADELOGENTRY
    public:
        UpgradeLogEntry& operator=(UpgradeLogEntry const&) = delete;
        UpgradeLogEntry(UpgradeLogEntry const&)            = delete;
        UpgradeLogEntry()                                  = delete;
#endif

    public:
        /**
         * @symbol ??1UpgradeLogEntry\@Logger\@Puv\@\@QEAA\@XZ
         */
        MCAPI ~UpgradeLogEntry();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUV_LOGGER
public:
    Logger& operator=(Logger const&) = delete;
    Logger(Logger const&)            = delete;
    Logger()                         = delete;
#endif

public:
    /**
     * @symbol ?hasErrors\@Logger\@Puv\@\@QEBA_NXZ
     */
    MCAPI bool hasErrors() const;
    /**
     * @symbol
     * ?log\@Logger\@Puv\@\@QEAAXW4ResultCode\@internal\@cereal\@\@V?$vector\@U?$pair\@W4ContextType\@SerializerContext\@cereal\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@W4ContextType\@SerializerContext\@cereal\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@7\@\@Z
     */
    MCAPI void
        log(enum class cereal::internal::ResultCode,
            std::vector<struct std::pair<enum class cereal::SerializerContext::ContextType, std::string>>,
            std::string);
    /**
     * @symbol
     * ?log\@Logger\@Puv\@\@QEAAXW4UpgradeResultCode\@12\@V?$vector\@U?$pair\@W4ContextType\@SerializerContext\@cereal\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@W4ContextType\@SerializerContext\@cereal\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@std\@\@1V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@5\@\@Z
     */
    MCAPI void
        log(enum class Puv::Logger::UpgradeResultCode,
            std::vector<struct std::pair<enum class cereal::SerializerContext::ContextType, std::string>>,
            std::vector<struct std::pair<enum class cereal::SerializerContext::ContextType, std::string>>,
            std::string);
    /**
     * @symbol ??4Logger\@Puv\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct Puv::Logger& operator=(struct Puv::Logger&&);
    /**
     * @symbol ??1Logger\@Puv\@\@QEAA\@XZ
     */
    MCAPI ~Logger();
};

}; // namespace Puv
