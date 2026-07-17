#pragma once

#include "ll/api/base/StdInt.h"
#include <string>
#include <variant>

enum class DataDrivenScreenClosedReason : uchar;

namespace ll::ddui {

class DduiSession {
public:
    virtual ~DduiSession() = default;

    [[nodiscard]] virtual uint        getId() const         = 0;
    [[nodiscard]] virtual std::string getPlayerUuid() const = 0;
    [[nodiscard]] virtual bool        isCustomForm() const  = 0;

    virtual void handleDataStoreUpdate(
        std::string const&                             property,
        std::string const&                             path,
        std::variant<double, bool, std::string> const& value
    ) = 0;

    virtual void handleScreenClosed(::DataDrivenScreenClosedReason reason) = 0;

    virtual void close() = 0;
};

} // namespace ll::ddui
