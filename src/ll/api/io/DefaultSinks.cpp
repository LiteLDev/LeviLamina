#include "ll/api/io/DefaultSinks.h"

#include "ll/api/io/ConsoleSink.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/io/PatternFormatter.h"

#include "pl/Config.h"

namespace ll::io {

std::shared_ptr<FileSink> const& getDefaultFileSink() {
    static std::shared_ptr<FileSink> ins = [] {
        return std::make_shared<FileSink>(
            file_utils::u8path(pl::pl_log_path) / u8"latest.log",
            makePolymorphic<PatternFormatter>("[{3:.3%F %T.} {2}][{1}] {0}", false)
        );
    }();
    return ins;
}

std::vector<std::shared_ptr<SinkBase>> makeDefaultSinks() {
    return {std::make_shared<ConsoleSink>(), getDefaultFileSink()};
}

void initDefaultFileSink(RotateConfig const& config) { getDefaultFileSink()->setPolicy(RotatePolicy{config}); }

} // namespace ll::io
