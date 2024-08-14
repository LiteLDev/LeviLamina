#pragma once

#include "ll/api/utils/FontUtils.h"
#include "ll/core/gui/styles/Custom.h"

#include <vector>

namespace ll::gui {

struct LeviImguiConfig {
    int version = 0;

    struct Font {
        enum class GlyphRange {
            Latins,
            Greek,
            Korean,
            Japanese,
            ChineseFull,
            ChineseSimplifiedCommon,
            Cyrillic,
            Thai,
            Vietnamese,
        };
        enum class Width {
            Fit,
            Half,
            Full,
        };
        std::string                          name;
        GlyphRange                           range;
        std::optional<Width>                 width;
        std::optional<float>                 weight;
        std::optional<float>                 stretch;
        std::optional<font_utils::FontStyle> style;
    };
    struct FontSettings {
        float             size = 16.0f;
        std::vector<Font> fonts{getDefaultFonts()};
    } fontSettings{};
    LeviImGuiStyle style{};

    static std::vector<LeviImguiConfig::Font> getDefaultFonts();
};

LeviImguiConfig& getLeviImguiConfig();

bool saveLeviImguiConfig();

} // namespace ll::gui
