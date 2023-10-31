#include "ll/api/plugin/Plugin.h"
#include "ll/api/utils/FileHelper.h"

#include <filesystem>

namespace fs = std::filesystem;

namespace ll::plugin {
std::string Plugin::getDefaultDataPath() const {
    std::string dataPath = "plugins\\" + mName;
    if (!fs::exists(string_utils::sv2u8sv(dataPath))) {
        std::error_code ec;
        fs::create_directories(string_utils::sv2u8sv(dataPath), ec);
    }
    return dataPath;
}
} // namespace ll::plugin
