#pragma once

#include "gsl/gsl"
#include "ll/api/data/IndirectValue.h"
#include "ll/api/io/Formatter.h"
#include <memory>

namespace ll::io {
class SinkBase : public std::enable_shared_from_this<SinkBase> {
public:
    virtual ~SinkBase() = default;

    virtual void append(LogMessageView const& view) = 0;

    virtual void flush() {}

    virtual void setFormatter(Polymorphic<Formatter> fmter) = 0;

    virtual void setFlushLevel(LogLevel level) {}
};
class Sink : public SinkBase {
protected:
    Polymorphic<Formatter> formatter;

public:
    LLAPI Sink(Polymorphic<Formatter> formatter);

    LLAPI virtual ~Sink();

    LLAPI void setFormatter(Polymorphic<Formatter> fmter) override;
};
} // namespace ll::io
