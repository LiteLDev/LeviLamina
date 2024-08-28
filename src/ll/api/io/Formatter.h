#pragma once

#include "ll/api/io/LogMessage.h"
#include "ll/api/base/Macro.h"

namespace ll::io {
class Formatter {
public:
    static LLNDAPI bool supportColorLog();

    virtual ~Formatter() = default;

    virtual void format(LogMessageView const& view, std::string& buffer) const noexcept = 0;
};
} // namespace ll::io
