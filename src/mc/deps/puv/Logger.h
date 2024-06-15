#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/cereal/SerializerContext.h"
#include "mc/deps/puv/LoggerIterator.h"

namespace Puv {

class Logger {
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
    // ?getParseLog@Logger@Puv@@QEBA?AU?$iterable_adaptor@V?$LoggerIterator@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULogEntry@SerializerContext@cereal@@@std@@@std@@@std@@@Puv@@V12@@entt@@W4ResultCode@cereal@@@Z
    MCAPI entt::iterable_adaptor<
        class Puv::LoggerIterator<std::_Vector_const_iterator<
            std::_Vector_val<std::_Simple_types<struct cereal::SerializerContext::LogEntry>>>>,
        class Puv::LoggerIterator<std::_Vector_const_iterator<
            std::_Vector_val<std::_Simple_types<struct cereal::SerializerContext::LogEntry>>>>>
        getParseLog(::cereal::ResultCode) const;

    // symbol:
    // ?getUpgradeLog@Logger@Puv@@QEBA?AU?$iterable_adaptor@V?$LoggerIterator@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUpgradeLogEntry@Logger@Puv@@@std@@@std@@@std@@@Puv@@V12@@entt@@W4UpgradeResultCode@12@@Z
    MCAPI entt::iterable_adaptor<
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::UpgradeLogEntry>>>>,
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::UpgradeLogEntry>>>>>
        getUpgradeLog(::Puv::Logger::UpgradeResultCode) const;

    // symbol:
    // ?getValidationLog@Logger@Puv@@QEBA?AU?$iterable_adaptor@V?$LoggerIterator@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UValidationLogEntry@Logger@Puv@@@std@@@std@@@std@@@Puv@@V12@@entt@@W4ValidationResultCode@12@@Z
    MCAPI entt::iterable_adaptor<
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::ValidationLogEntry>>>>,
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::ValidationLogEntry>>>>>
        getValidationLog(::Puv::Logger::ValidationResultCode) const;

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

    // symbol: ?merge@Logger@Puv@@QEAAXV12@@Z
    MCAPI void merge(class Puv::Logger);

    // symbol: ??4Logger@Puv@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Puv::Logger& operator=(class Puv::Logger&&);

    // symbol: ??1Logger@Puv@@QEAA@XZ
    MCAPI ~Logger();

    // NOLINTEND
};

}; // namespace Puv
