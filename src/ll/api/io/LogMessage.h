#pragma once

#include <string>
#include <string_view>
#include <utility>

#include "ll/api/base/StdInt.h"
#include "ll/api/data/TmWithMs.h"
#include "ll/api/io/LogLevel.h"

namespace ll::io {
struct LogMessageView {
    std::string_view msg;
    std::string_view tit;
    LogLevel         lvl;
    data::TmWithMs   tm;

    constexpr LogMessageView(std::string_view msg, std::string_view tit, LogLevel lvl, data::TmWithMs const& tm)
    : msg(msg),
      tit(tit),
      lvl(lvl),
      tm(tm) {}
};
struct LogMessage : public LogMessageView {
    std::string msgBuffer;
    std::string titBuffer;
    constexpr LogMessage() : LogMessageView({}, {}, {}, {}) {}

    LogMessage(LogMessage&& other)
    : LogMessageView({}, {}, other.lvl, other.tm),
      msgBuffer(std::move(other.msgBuffer)),
      titBuffer(std::move(other.titBuffer)) {
        msg = msgBuffer;
        tit = titBuffer;
    }
    LogMessage(LogMessage const& other)
    : LogMessageView({}, {}, other.lvl, other.tm),
      msgBuffer(other.msgBuffer),
      titBuffer(other.titBuffer) {
        msg = msgBuffer;
        tit = titBuffer;
    }

    constexpr LogMessage(std::string msg, std::string_view tit, LogLevel lvl, data::TmWithMs const& tm)
    : LogMessageView({}, {}, lvl, tm),
      msgBuffer(std::move(msg)),
      titBuffer(tit) {
        this->msg = msgBuffer;
        this->tit = titBuffer;
    }
};
} // namespace ll::io
