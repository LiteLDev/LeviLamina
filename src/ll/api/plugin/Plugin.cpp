#include "ll/api/plugin/Plugin.h"

#include <filesystem>

namespace fs = std::filesystem;

namespace ll::plugin {
std::string Plugin::getDefaultDataPath() const {
    std::string dataPath = "plugins\\" + mName;
    if (!fs::exists(string_utils::str2wstr(dataPath))) {
        std::error_code ec;
        fs::create_directories(string_utils::str2wstr(dataPath), ec);
    }
    return dataPath;
}
} // namespace ll::plugin
