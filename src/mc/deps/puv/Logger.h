#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/cereal/SerializerContext.h"

namespace Puv {

struct Logger {
public:
    // Logger inner types declare
    // clang-format off
    struct UpgradeLogEntry;
    struct ValidationLogEntry;
    // clang-format on

    // Logger inner types define
    enum class UpgradeResultCode {};

    enum class ValidationResultCode {};

    struct UpgradeLogEntry {
    public:
        // prevent constructor by default
        UpgradeLogEntry& operator=(UpgradeLogEntry const&);
        UpgradeLogEntry(UpgradeLogEntry const&);
        UpgradeLogEntry();

    public:
        // NOLINTBEGIN
        // symbol: ??1UpgradeLogEntry@Logger@Puv@@QEAA@XZ
        MCAPI ~UpgradeLogEntry();

        // NOLINTEND
    };

    struct ValidationLogEntry {
    public:
        // prevent constructor by default
        ValidationLogEntry& operator=(ValidationLogEntry const&);
        ValidationLogEntry(ValidationLogEntry const&);
        ValidationLogEntry();

    public:
        // NOLINTBEGIN
        // symbol: ??1ValidationLogEntry@Logger@Puv@@QEAA@XZ
        MCAPI ~ValidationLogEntry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Logger& operator=(Logger const&);
    Logger(Logger const&);
    Logger();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getErrors@Logger@Puv@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getErrors() const;

    // symbol: ?hasErrors@Logger@Puv@@QEBA_NXZ
    MCAPI bool hasErrors() const;

    // symbol:
    // ?log@Logger@Puv@@QEAAXW4ValidationResultCode@12@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void log(::Puv::Logger::ValidationResultCode, std::string);

    // symbol:
    // ?log@Logger@Puv@@QEAAXW4ResultCode@cereal@@V?$vector@U?$pair@W4ContextType@SerializerContext@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@W4ContextType@SerializerContext@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z
    MCAPI void
        log(::cereal::ResultCode,
            std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>>,
            std::string);

    // symbol:
    // ?log@Logger@Puv@@QEAAXW4UpgradeResultCode@12@V?$vector@U?$pair@W4ContextType@SerializerContext@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@W4ContextType@SerializerContext@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
    MCAPI void
        log(::Puv::Logger::UpgradeResultCode,
            std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>>,
            std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>>,
            std::string);

    // symbol: ?merge@Logger@Puv@@QEAAXU12@@Z
    MCAPI void merge(struct Puv::Logger);

    // symbol: ??4Logger@Puv@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct Puv::Logger& operator=(struct Puv::Logger&&);

    // symbol: ??1Logger@Puv@@QEAA@XZ
    MCAPI ~Logger();

    // NOLINTEND
};

}; // namespace Puv
