#include "ll/core/gui/ImguiConfig.h"
#include "ll/core/ConfigImpl.h"

namespace mce {
template <class J>
static inline ll::Expected<J> serialize(Color const& c) {
    return std::format("#{:06x}", (uint)c.toARGB() % (1u << 24))
         + (c.a == 1 ? "" : std::format("{:02x}", (uint)c.toARGB() / (1u << 24)));
}
template <class T, class J>
    requires(std::same_as<Color, T>)
static inline ll::Expected<> deserialize(Color& v, J const& j) {
    if (j.is_string()) {
        v = mce::Color{(std::string_view)j};
    }
    return {};
}
} // namespace mce

namespace ll::gui {

LL_CONFIG_IMPL(LeviImguiConfig, u8"ImguiConfig.json");


std::vector<LeviImguiConfig::Font> LeviImguiConfig::getDefaultFonts() {
    if (i18n::getDefaultLocaleCode().starts_with("zh")) {
        return {
            {"default",      Font::GlyphRange::Latins, Font::Width::Half},
            { "system", Font::GlyphRange::ChineseFull, Font::Width::Full}
        };
    }
    return {
        {"default", Font::GlyphRange::Latins}
    };
}

} // namespace ll::gui
