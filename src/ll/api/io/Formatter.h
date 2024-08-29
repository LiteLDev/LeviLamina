#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/io/LogMessage.h"

namespace ll::io {
class Formatter {
public:
    static LLNDAPI bool supportColorLog();

    virtual ~Formatter() = default;

    virtual void format(LogMessageView const& view, std::string& buffer) const noexcept = 0;
};
} // namespace ll::io
