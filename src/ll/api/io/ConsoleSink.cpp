#include "ll/api/io/ConsoleSink.h"

#include <mutex>

#include "ll/api/io/PatternFormatter.h"
#include "ll/core/io/Output.h"

namespace ll::io {

struct ConsoleSink::Impl {};

ConsoleSink::ConsoleSink()
: ConsoleSink(makePolymorphic<PatternFormatter>("{3:.3%T.} {2} {1} {0}", Formatter::supportColorLog(), 0b0010)) {}

ConsoleSink::ConsoleSink(Polymorphic<Formatter> formatter) : Sink{std::move(formatter)}, impl{} {}

ConsoleSink::~ConsoleSink() = default;

void ConsoleSink::append(LogMessageView const& view) {
    std::string buffer;
    formatter->format(view, buffer);
    defaultOutput(std::move(buffer));
}
} // namespace ll::io
