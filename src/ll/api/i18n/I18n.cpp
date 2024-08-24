#include "ll/api/i18n/I18n.h"

#include "ll/api/io/FileUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"

#include "nlohmann/json.hpp"

namespace ll::i18n {
std::string& getDefaultLocaleName() {
    static std::string name = sys_utils::getSystemLocaleName();
    return name;
}
struct I18n::Impl {};

I18n::I18n()  = default;
I18n::~I18n() = default;

bool I18n::load(std::filesystem::path const& path) {
    impl = std::make_unique<Impl>();
    return false;
}

std::string_view I18n::get(std::string_view key, std::string_view localeName) { return key; }

} // namespace ll::i18n
