#include "ll/core/gui/ImguiConfig.h"
#include "ll/core/ConfigImpl.h"

namespace mce {
template <class J>
static inline ll::Expected<J> serialize(Color const& c) {
    return std::format("#{:06x}", int(c.r * 255.0f) * (1u << 16) + int(c.g * 255.0f) * (1u << 8) + int(c.b * 255.0f))
         + (c.a == 1 ? "" : std::format("{:02x}", static_cast<int>(c.a * 255.0f)));
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
