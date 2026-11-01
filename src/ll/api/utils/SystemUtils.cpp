#include "ll/api/utils/SystemUtils.h"

namespace ll::inline utils::sys_utils {

std::filesystem::path normalizePath(std::filesystem::path const& path) {
    std::error_code ec;
    auto            absolute = std::filesystem::absolute(path, ec);
    if (ec) {
        return path.lexically_normal();
    }
    if (auto canonical = std::filesystem::weakly_canonical(absolute, ec); !ec) {
        return canonical;
    }
    return absolute.lexically_normal();
}

} // namespace ll::inline utils::sys_utils
