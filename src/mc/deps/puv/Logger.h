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
        getParseLog(::cereal::ResultCode) const;

    MCAPI entt::iterable_adaptor<
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::UpgradeLogEntry>>>>,
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::UpgradeLogEntry>>>>>
        getUpgradeLog(::Puv::Logger::UpgradeResultCode) const;

    MCAPI entt::iterable_adaptor<
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::ValidationLogEntry>>>>,
        class Puv::LoggerIterator<
            std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct Puv::Logger::ValidationLogEntry>>>>>
        getValidationLog(::Puv::Logger::ValidationResultCode) const;

    MCAPI bool hasErrors() const;

    MCAPI void log(::Puv::Logger::ValidationResultCode, std::string);

    MCAPI void
        log(::cereal::ResultCode,
            std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>>,
            std::string);

    MCAPI void
        log(::Puv::Logger::UpgradeResultCode,
            std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>>,
            std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>>,
            std::string);

    MCAPI void merge(class Puv::Logger);

    MCAPI class Puv::Logger& operator=(class Puv::Logger&&);

    MCAPI ~Logger();

    // NOLINTEND
};

}; // namespace Puv
