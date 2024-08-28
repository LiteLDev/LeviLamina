#include "ll/api/io/Sink.h"

namespace ll::io {
Sink::~Sink() = default;
Sink::Sink(Polymorphic<Formatter> formatter) : formatter(std::move(formatter)) {}
void Sink::setFormatter(Polymorphic<Formatter> fmter) { formatter = std::move(fmter); }
} // namespace ll::io
