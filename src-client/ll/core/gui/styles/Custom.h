#pragma once

#include "ll/api/Expected.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "nlohmann/json.hpp"

namespace ll::gui {

struct LeviImGuiStyle {
    enum class Dir : int { None = -1, Left = 0, Right = 1, Up = 2, Down = 3 };

    float alpha{1.0f};
    float disabledAlpha{0.6f};
    Vec2  windowPadding{8.0f};
    float windowRounding{8.0f};
    float windowBorderSize{1.0f};
    Vec2  windowMinSize{32.0f};
    Vec2  windowTitleAlign{0.0f, 0.5f};
    Dir   windowMenuButtonPosition{Dir::Left};
    float childRounding{6.0f};
    float childBorderSize{1.0f};
    float popupRounding{6.0f};
    float popupBorderSize{1.0f};
    Vec2  framePadding{4.0f, 3.0f};
    float frameRounding{4.0f};
    float frameBorderSize{0.0f};
    Vec2  itemSpacing{8.0f, 4.0f};
    Vec2  itemInnerSpacing{4.0f};
    Vec2  cellPadding{4.0f, 2.0f};
    Vec2  touchExtraPadding{0.0f};
    float indentSpacing{21.0f};
    float columnsMinSpacing{6.0f};
    float scrollbarSize{14.0f};
    float scrollbarRounding{9.0f};
    float grabMinSize{12.0f};
    float grabRounding{4.0f};
    float logSliderDeadzone{4.0f};
    float tabRounding{8.0f};
    float tabBorderSize{0.0f};
    float tabMinWidthForCloseButton{0.0f};
    float tabBarBorderSize{1.0f};
    float tabBarOverlineSize{2.0f};
    float tableAngledHeadersAngle{(float)(35 * std::numbers::pi / 180)};
    Vec2  tableAngledHeadersTextAlign{5.0f, 0.0f};
    Dir   colorButtonPosition{Dir::Right};
    Vec2  buttonTextAlign{0.5f};
    Vec2  selectableTextAlign{0.0f};
    float separatorTextBorderSize{3.0f};
    Vec2  separatorTextAlign{0.0f, 0.5f};
    Vec2  separatorTextPadding{20.0f, 3.0f};
    Vec2  displayWindowPadding{19.0f};
    Vec2  displaySafeAreaPadding{3.0f};
    float dockingSeparatorSize{2.0f};
    float mouseCursorScale{1.0f};
    bool  antiAliasedLines{true};
    bool  antiAliasedLinesUseTex{true};
    bool  antiAliasedFill{true};
    float curveTessellationTol{1.25f};
    float circleTessellationMaxError{0.3f};

    struct ColorStyle {
        ::mce::Color text{"#ffffff"};
        ::mce::Color textDisabled{"#7f7f7f"};
        ::mce::Color windowBg{"#0f0f0fef"};
        ::mce::Color childBg{"#00000000"};
        ::mce::Color popupBg{"#141414ef"};
        ::mce::Color border{"#6d6d7f7f"};
        ::mce::Color borderShadow{"#00000000"};
        ::mce::Color frameBg{"#28497a89"};
        ::mce::Color frameBgHovered{"#4296f966"};
        ::mce::Color frameBgActive{"#4296f9aa"};
        ::mce::Color titleBg{"#0a0a0a"};
        ::mce::Color titleBgActive{"#28497a"};
        ::mce::Color titleBgCollapsed{"#00000082"};
        ::mce::Color menuBarBg{"#232323"};
        ::mce::Color scrollbarBg{"#05050587"};
        ::mce::Color scrollbarGrab{"#4f4f4f"};
        ::mce::Color scrollbarGrabHovered{"#686868"};
        ::mce::Color scrollbarGrabActive{"#828282"};
        ::mce::Color checkMark{"#4296f9"};
        ::mce::Color sliderGrab{"#3d84e0"};
        ::mce::Color sliderGrabActive{"#4296f9"};
        ::mce::Color button{"#4296f966"};
        ::mce::Color buttonHovered{"#4296f9"};
        ::mce::Color buttonActive{"#0f87f9"};
        ::mce::Color header{"#4296f94f"};
        ::mce::Color headerHovered{"#4296f9cc"};
        ::mce::Color headerActive{"#4296f9"};
        ::mce::Color separator{"#6d6d7f7f"};
        ::mce::Color separatorHovered{"#1966bfc6"};
        ::mce::Color separatorActive{"#1966bf"};
        ::mce::Color resizeGrip{"#4296f933"};
        ::mce::Color resizeGripHovered{"#4296f9aa"};
        ::mce::Color resizeGripActive{"#4296f9f2"};
        ::mce::Color tabHovered{"#4296f9cc"};
        ::mce::Color tab{"#2d5993db"};
        ::mce::Color tabSelected{"#3268ad"};
        ::mce::Color tabSelectedOverline{"#4296f9"};
        ::mce::Color tabDimmed{"#111a25f7"};
        ::mce::Color tabDimmedSelected{"#22426c"};
        ::mce::Color tabDimmedSelectedOverline{"#7f7f7f"};
        ::mce::Color dockingPreview{"#4296f9b2"};
        ::mce::Color dockingEmptyBg{"#333333"};
        ::mce::Color plotLines{"#9b9b9b"};
        ::mce::Color plotLinesHovered{"#ff6d59"};
        ::mce::Color plotHistogram{"#e5b200"};
        ::mce::Color plotHistogramHovered{"#ff9900"};
        ::mce::Color tableHeaderBg{"#303033"};
        ::mce::Color tableBorderStrong{"#4f4f59"};
        ::mce::Color tableBorderLight{"#3a3a3f"};
        ::mce::Color tableRowBg{"#00000000"};
        ::mce::Color tableRowBgAlt{"#ffffff0f"};
        ::mce::Color textLink{"#4296f9"};
        ::mce::Color textSelectedBg{"#4296f959"};
        ::mce::Color dragDropTarget{"#ffff00e5"};
        ::mce::Color navHighlight{"#4296f9"};
        ::mce::Color navWindowingHighlight{"#ffffffb2"};
        ::mce::Color navWindowingDimBg{"#cccccc33"};
        ::mce::Color modalWindowDimBg{"#cccccc59"};
    } colors{};

    void getFromImgui();

    void applyToImgui();
};
} // namespace ll::gui
