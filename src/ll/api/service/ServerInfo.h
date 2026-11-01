#pragma once
#include "ll/api/base/Macro.h"
#include "mc/deps/core/math/Color.h"
#include <filesystem>
#include <optional>
#include <string>
#include <string_view>

namespace ll {

namespace motd {

enum class Update : uint8 {
    Static, ///< Once after layout; cached.
    Frame,  ///< Every rendered frame — continuous flow.
    Every,  ///< Once per period_ms — discrete step.
};

struct Gradient {
    enum class Space : uint8 {
        Srgb,
        Linear,
        Oklab,
        Oklch,
    };
    enum class Axis : uint8 {
        AlongText,
        Horizontal,
        Vertical,
        Diagonal,
        Radial,
    };
    enum class Wrap : uint8 {
        Clamp,
        Repeat,
        Mirror,
    };
    enum class Scope : uint8 {
        Span,
        Line,
        Motd,
    };

    struct Stop {
        float      pos{0.0f};
        mce::Color color{};
        bool       operator==(Stop const&) const = default;
    };

    Space space{Space::Oklab};
    Axis  axis{Axis::AlongText};
    Wrap  wrap{Wrap::Clamp};
    Scope scope{Scope::Span};

    Update update{Update::Static};
    uint32 periodMs{4000};
    float  phase{0.0f};

    std::vector<Stop> stops; ///< ≥ 2 entries, ascending pos.

    bool operator==(Gradient const&) const = default;
};

struct Rainbow {
    float hue{0.0f};    ///< Starting hue, degrees.
    float span{360.0f}; ///< Hue range swept across the content, degrees.
    float saturation{1.0f};
    float lightness{0.5f};

    Update update{Update::Static};
    uint32 periodMs{4000};
    float  phase{0.0f};

    bool operator==(Rainbow const&) const = default;
};

using Paint = std::variant<mce::Color, Gradient, Rainbow>;

enum class Style {
    none       = 0,
    bold       = 1 << 0,
    italic     = 1 << 1,
    underline  = 1 << 2,
    strike     = 1 << 3,
    obfuscated = 1 << 4,
    shadow     = 1 << 5,
};

constexpr Style operator|(Style lhs, Style rhs) noexcept {
    return static_cast<Style>(static_cast<int>(lhs) | static_cast<int>(rhs));
}
constexpr Style operator&(Style lhs, Style rhs) noexcept {
    return static_cast<Style>(static_cast<int>(lhs) & static_cast<int>(rhs));
}
constexpr Style& operator|=(Style& lhs, Style rhs) noexcept { return lhs = lhs | rhs; }
constexpr Style& operator&=(Style& lhs, Style rhs) noexcept { return lhs = lhs & rhs; }

struct Span {
    std::string       text; ///< UTF-8; \n forces a line break.
    Style             style{};
    Paint             paint = mce::Color{}; ///< Default: opaque white.
    std::vector<Span> tooltip;              ///< ≤ 2 entries; tooltips within tooltips are stripped.

    bool operator==(Span const&) const = default;
};

struct Image {
    enum class Fit : uint8 {
        Contain, ///< Preserve aspect, may leave gaps.
        Cover,   ///< Preserve aspect, may clip.
        Stretch, ///< Fill box, distorts.
    };

    /// Image payload; must not exceed 32767 bytes. Either:
    /// - "data:image/png;base64,<...>" — inline PNG bytes (preferred; no network I/O).
    /// - "http://..." or "https://..." — remote image URL (triggers one network
    ///   request per viewer).
    /// Any other prefix is invalid.
    std::string data{};

    float width{1.0f};  ///< em; 0 = infer from aspect ratio.
    float height{1.0f}; ///< em; 0 = infer from aspect ratio.
    Fit   fit{Fit::Contain};
    bool  smooth{true};

    float opacity{1}; ///< 0..1

    std::vector<Span> tooltip; ///< ≤ 2 entries.

    bool operator==(Image const&) const = default;
};

enum class SlideTransition : uint8 {
    Fade,
    Slide,
    KenBurns,
};

struct HeroLayer {
    Image image{};

    float x{0.0f};      ///< Fraction of hero width; may be negative or greater than 1.
    float y{0.0f};      ///< Fraction of hero height; may be negative or greater than 1.
    float width{1.0f};  ///< Fraction of hero width; values greater than 1 enlarge the layer.
    float height{1.0f}; ///< Fraction of hero height; values greater than 1 enlarge the layer.
    float opacity{1.0f};
    float parallax{0.0f};

    bool operator==(HeroLayer const&) const = default;
};

struct Hero {
    std::vector<Image>     images;
    std::vector<HeroLayer> layers;

    SlideTransition transition{SlideTransition::Fade};
    uint32          intervalMs{6000};
    uint32          transitionMs{700};
    float           aspectRatio{0.0f};
    Paint           overlay{
        mce::Color{0, 0, 0, 0}
    };

    bool operator==(Hero const&) const = default;
};

struct Carousel {
    std::vector<Image> images;

    SlideTransition transition{SlideTransition::Fade};
    uint32          intervalMs{4000};
    uint32          transitionMs{500};
    float           aspectRatio{0.0f};

    bool operator==(Carousel const&) const = default;
};

struct Insets {
    float left{0.0f};
    float top{0.0f};
    float right{0.0f};
    float bottom{0.0f};

    bool operator==(Insets const&) const = default;
};

enum class Dir : uint8 {
    Row,
    Column,
};

enum class Align : uint8 {
    Start,
    Center,
    End,
    SpaceBetween,
};

enum class Wrap : uint8 {
    Wrap,     ///< Auto-wrap at available width (default).
    Nowrap,   ///< Never wrap; overflows parent.
    Ellipsis, ///< Clip with trailing "…".
    Clip,     ///< Hard clip, no ellipsis.
};

struct Node {
    Dir    dir{Dir::Column};
    Align  main{Align::Center};
    Align  cross{Align::Center};
    Insets padding{};
    float  gap{0.0f};
    float  scale{1.0f};

    std::optional<Paint> background;
    Wrap                 wrap{Wrap::Wrap};

    std::variant<std::vector<Span>, Image, Carousel> content;
    std::vector<Node>                                children;

    bool operator==(Node const&) const = default;
};

struct MotdPayload {
    int                  version{1};
    Node                 root{};
    std::optional<Image> icon;
    std::optional<Hero>  hero;
    std::optional<Image> readmeBackground;
    std::optional<Paint> readmeOverlay;

    bool operator==(MotdPayload const&) const = default;
};

} // namespace motd

LLAPI bool setServerMotd(std::string const& serverName, bool shouldAnnounce = true);

#ifdef LL_PLAT_S
LLAPI bool setServerReadme(motd::MotdPayload const& readme, std::string_view language = {});
LLAPI void clearServerReadme(std::string_view language = {});
LLAPI void clearAllServerReadme();
#endif

LLNDAPI std::optional<std::filesystem::path> getWorldPath();
LLNDAPI std::optional<std::filesystem::path> getWorldDataRoot();
LLNDAPI std::optional<std::filesystem::path> getWorldConfigRoot();
} // namespace ll

#include <magic_enum.hpp>

template <>
struct magic_enum::customize::enum_range<ll::motd::Style> {
    static constexpr bool is_flags{true};
};
