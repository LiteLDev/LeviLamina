#include "ll/api/io/DefaultSink.h"

#include "ll/api/io/FileUtils.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/core/io/Output.h"

#include "pl/Config.h"

namespace ll::io {
struct DefaultSink::Impl {
    std::mutex       mutex;
    std::ofstream    logFile{file_utils::u8path(pl::pl_log_path) / u8"latest.log"};
    PatternFormatter logFileFormatter{"[{3:.3%F %T.} {2}][{1}] {0}", false};
};

DefaultSink::Impl& DefaultSink::getImpl() {
    static Impl impl;
    return impl;
}

DefaultSink::DefaultSink()
: Sink(makePolymorphic<PatternFormatter>("{3:.3%T.} {2} {1} {0}", Formatter::supportColorLog(), 0b0010)),
  impl(getImpl()) {}

DefaultSink::~DefaultSink() = default;

void DefaultSink::setFormatter(Polymorphic<Formatter> fmter) {
    std::lock_guard lock(impl.mutex);
    formatter = std::move(fmter);
}
void DefaultSink::append(LogMessageView const& view) {
    std::lock_guard lock(impl.mutex);
    std::string     buffer;
    formatter->format(view, buffer);
    defaultOutput(buffer);
    buffer.clear();
    impl.logFileFormatter.format(view, buffer);
    impl.logFile << buffer;
}
} // namespace ll::io
