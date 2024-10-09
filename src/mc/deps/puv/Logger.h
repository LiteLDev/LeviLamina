#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoggerIterator.h"
#include "mc/external/cereal/ResultCode.h"
#include "mc/external/cereal/SerializerContext.h"

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
    MCAPI entt::iterable_adaptor<
        class Puv::LoggerIterator<std::_Vector_const_iterator<
            std::_Vector_val<std::_Simple_types<struct cereal::SerializerContext::LogEntry>>>>,
        class Puv::LoggerIterator<std::_Vector_const_iterator<
            std::_Vector_val<std::_Simple_types<struct cereal::SerializerContext::LogEntry>>>>>
    getParseLog(::cereal::ResultCode mask) const;

    MCAPI entt::iterable_adaptor<
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::UpgradeLogEntry>>>>,
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::UpgradeLogEntry>>>>>
    getUpgradeLog(::Puv::Logger::UpgradeResultCode mask) const;

    MCAPI entt::iterable_adaptor<
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::ValidationLogEntry>>>>,
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::ValidationLogEntry>>>>>
    getValidationLog(::Puv::Logger::ValidationResultCode mask) const;

    MCAPI bool hasErrors() const;

    MCAPI void log(::Puv::Logger::ValidationResultCode res, std::string msg);

    MCAPI void
    log(::cereal::ResultCode                                                          res,
        std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>> path,
        std::string                                                                   msg);

    MCAPI void
    log(::Puv::Logger::UpgradeResultCode                                              res,
        std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>> src,
        std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>> dst,
        std::string                                                                   msg);

    MCAPI void merge(class Puv::Logger log);

    MCAPI class Puv::Logger& operator=(class Puv::Logger&&);

    MCAPI ~Logger();

    // NOLINTEND
};

}; // namespace Puv
