#pragma once

#include <array>
#include <bitset>

#include "ll/api/base/Macro.h"
#include "ll/api/io/Formatter.h"

#include "fmt/color.h"

namespace ll::io {
class PatternFormatter : public Formatter {
public:
    std::string                                   pattern;
    std::bitset<4>                                bracketed;
    bool                                          colored;
    std::array<std::array<fmt::text_style, 4>, 6> styles{
        {
         // {msg, tit, lvl, tm}
            {{
                fmt::fg(fmt::color::red) | fmt::emphasis::bold,
                fmt::fg(fmt::color::red),
                fmt::fg(fmt::color::red),
                fmt::fg(fmt::color::light_blue),
            }}, // Fatal
            {{
                fmt::fg(fmt::terminal_color::bright_red) | fmt::emphasis::bold,
                fmt::fg(fmt::terminal_color::bright_red),
                fmt::fg(fmt::terminal_color::bright_red),
                fmt::fg(fmt::color::light_blue),
            }}, // Error
            {{
                fmt::fg(fmt::terminal_color::bright_yellow) | fmt::emphasis::bold,
                fmt::fg(fmt::terminal_color::bright_yellow),
                fmt::fg(fmt::terminal_color::bright_yellow),
                fmt::fg(fmt::color::light_blue),
            }},                                                                                // Warn
            {{{}, {}, fmt::fg(fmt::color::light_sea_green), fmt::fg(fmt::color::light_blue)}}, // Info
            {{
                fmt::fg(fmt::color::light_golden_rod_yellow) | fmt::emphasis::italic,
                fmt::fg(fmt::color::light_golden_rod_yellow),
                fmt::fg(fmt::color::light_golden_rod_yellow),
                fmt::fg(fmt::color::light_blue),
            }}, // Debug
            {{
                fmt::fg(fmt::color::light_steel_blue) | fmt::emphasis::italic,
                fmt::fg(fmt::color::light_steel_blue),
                fmt::fg(fmt::color::light_steel_blue),
                fmt::fg(fmt::color::light_blue),
            }}, // Trace
        }
    };

    PatternFormatter(std::string pattern, bool colored = true, std::bitset<4> const& bracketed = 0)
    : pattern(std::move(pattern)),
      bracketed(bracketed),
      colored(colored) {}

    virtual ~PatternFormatter() = default;

    LLAPI void format(LogMessageView const& view, std::string& buffer) const noexcept override;
};
} // namespace ll::io
