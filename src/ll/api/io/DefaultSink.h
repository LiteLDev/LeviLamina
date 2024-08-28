#pragma once

#include <mutex>

#include "ll/api/io/Sink.h"

namespace ll::io {
class DefaultSink : public Sink {
    struct Impl;
    Impl& impl;

    static Impl& getImpl();

public:
    LLAPI DefaultSink();

    LLAPI ~DefaultSink() override;

    LLAPI void setFormatter(Polymorphic<Formatter> fmter) override;

    LLAPI void append(LogMessageView const& view) override;
};
} // namespace ll::io
