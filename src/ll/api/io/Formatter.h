#pragma once

#include "ll/api/io/LogMessage.h"

namespace ll::io {
class Formatter {
public:
    virtual ~Formatter() = default;

    virtual void format(LogMessageView const& view, std::string& buffer) const noexcept = 0;
};
} // namespace ll::io
