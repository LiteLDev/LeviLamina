#include "ll/core/gui/styles/ImguiSpectrum.h"
#include "imgui.h"
#include "ll/api/base/StdInt.h"

namespace ll::gui {
namespace Spectrum {
namespace { // Unnamed namespace, since we only use this here.
uint Color(uint c) {
    // add alpha.
    const short a = 0xFF;
    const short r = (c >> 16) & 0xFF;
    const short g = (c >> 8) & 0xFF;
    const short b = (c >> 0) & 0xFF;
    return (a << 24) | (r << 0) | (g << 8) | (b << 16);
}
} // namespace
// all colors are from http://spectrum.corp.adobe.com/color.html

inline uint color_alpha(uint alpha, uint c) { return ((alpha & 0xFF) << 24) | (c & 0x00FFFFFF); }

namespace Static {                 // static colors
const uint NONE      = 0x00000000; // transparent
const uint WHITE     = Color(0xFFFFFF);
const uint BLACK     = Color(0x000000);
const uint GRAY200   = Color(0xF4F4F4);
const uint GRAY300   = Color(0xEAEAEA);
const uint GRAY400   = Color(0xD3D3D3);
const uint GRAY500   = Color(0xBCBCBC);
const uint GRAY600   = Color(0x959595);
const uint GRAY700   = Color(0x767676);
const uint GRAY800   = Color(0x505050);
const uint GRAY900   = Color(0x323232);
const uint BLUE400   = Color(0x378EF0);
const uint BLUE500   = Color(0x2680EB);
const uint BLUE600   = Color(0x1473E6);
const uint BLUE700   = Color(0x0D66D0);
const uint RED400    = Color(0xEC5B62);
const uint RED500    = Color(0xE34850);
const uint RED600    = Color(0xD7373F);
const uint RED700    = Color(0xC9252D);
const uint ORANGE400 = Color(0xF29423);
const uint ORANGE500 = Color(0xE68619);
const uint ORANGE600 = Color(0xDA7B11);
const uint ORANGE700 = Color(0xCB6F10);
const uint GREEN400  = Color(0x33AB84);
const uint GREEN500  = Color(0x2D9D78);
const uint GREEN600  = Color(0x268E6C);
const uint GREEN700  = Color(0x12805C);
} // namespace Static

namespace Light {
const uint GRAY50        = Color(0xFFFFFF);
const uint GRAY75        = Color(0xFAFAFA);
const uint GRAY100       = Color(0xF5F5F5);
const uint GRAY200       = Color(0xEAEAEA);
const uint GRAY300       = Color(0xE1E1E1);
const uint GRAY400       = Color(0xCACACA);
const uint GRAY500       = Color(0xB3B3B3);
const uint GRAY600       = Color(0x8E8E8E);
const uint GRAY700       = Color(0x707070);
const uint GRAY800       = Color(0x4B4B4B);
const uint GRAY900       = Color(0x2C2C2C);
const uint BLUE400       = Color(0x2680EB);
const uint BLUE500       = Color(0x1473E6);
const uint BLUE600       = Color(0x0D66D0);
const uint BLUE700       = Color(0x095ABA);
const uint RED400        = Color(0xE34850);
const uint RED500        = Color(0xD7373F);
const uint RED600        = Color(0xC9252D);
const uint RED700        = Color(0xBB121A);
const uint ORANGE400     = Color(0xE68619);
const uint ORANGE500     = Color(0xDA7B11);
const uint ORANGE600     = Color(0xCB6F10);
const uint ORANGE700     = Color(0xBD640D);
const uint GREEN400      = Color(0x2D9D78);
const uint GREEN500      = Color(0x268E6C);
const uint GREEN600      = Color(0x12805C);
const uint GREEN700      = Color(0x107154);
const uint INDIGO400     = Color(0x6767EC);
const uint INDIGO500     = Color(0x5C5CE0);
const uint INDIGO600     = Color(0x5151D3);
const uint INDIGO700     = Color(0x4646C6);
const uint CELERY400     = Color(0x44B556);
const uint CELERY500     = Color(0x3DA74E);
const uint CELERY600     = Color(0x379947);
const uint CELERY700     = Color(0x318B40);
const uint MAGENTA400    = Color(0xD83790);
const uint MAGENTA500    = Color(0xCE2783);
const uint MAGENTA600    = Color(0xBC1C74);
const uint MAGENTA700    = Color(0xAE0E66);
const uint YELLOW400     = Color(0xDFBF00);
const uint YELLOW500     = Color(0xD2B200);
const uint YELLOW600     = Color(0xC4A600);
const uint YELLOW700     = Color(0xB79900);
const uint FUCHSIA400    = Color(0xC038CC);
const uint FUCHSIA500    = Color(0xB130BD);
const uint FUCHSIA600    = Color(0xA228AD);
const uint FUCHSIA700    = Color(0x93219E);
const uint SEAFOAM400    = Color(0x1B959A);
const uint SEAFOAM500    = Color(0x16878C);
const uint SEAFOAM600    = Color(0x0F797D);
const uint SEAFOAM700    = Color(0x096C6F);
const uint CHARTREUSE400 = Color(0x85D044);
const uint CHARTREUSE500 = Color(0x7CC33F);
const uint CHARTREUSE600 = Color(0x73B53A);
const uint CHARTREUSE700 = Color(0x6AA834);
const uint PURPLE400     = Color(0x9256D9);
const uint PURPLE500     = Color(0x864CCC);
const uint PURPLE600     = Color(0x7A42BF);
const uint PURPLE700     = Color(0x6F38B1);
} // namespace Light

namespace Dark {
const uint GRAY50        = Color(0x252525);
const uint GRAY75        = Color(0x2F2F2F);
const uint GRAY100       = Color(0x323232);
const uint GRAY200       = Color(0x393939);
const uint GRAY300       = Color(0x3E3E3E);
const uint GRAY400       = Color(0x4D4D4D);
const uint GRAY500       = Color(0x5C5C5C);
const uint GRAY600       = Color(0x7B7B7B);
const uint GRAY700       = Color(0x999999);
const uint GRAY800       = Color(0xCDCDCD);
const uint GRAY900       = Color(0xFFFFFF);
const uint BLUE400       = Color(0x2680EB);
const uint BLUE500       = Color(0x378EF0);
const uint BLUE600       = Color(0x4B9CF5);
const uint BLUE700       = Color(0x5AA9FA);
const uint RED400        = Color(0xE34850);
const uint RED500        = Color(0xEC5B62);
const uint RED600        = Color(0xF76D74);
const uint RED700        = Color(0xFF7B82);
const uint ORANGE400     = Color(0xE68619);
const uint ORANGE500     = Color(0xF29423);
const uint ORANGE600     = Color(0xF9A43F);
const uint ORANGE700     = Color(0xFFB55B);
const uint GREEN400      = Color(0x2D9D78);
const uint GREEN500      = Color(0x33AB84);
const uint GREEN600      = Color(0x39B990);
const uint GREEN700      = Color(0x3FC89C);
const uint INDIGO400     = Color(0x6767EC);
const uint INDIGO500     = Color(0x7575F1);
const uint INDIGO600     = Color(0x8282F6);
const uint INDIGO700     = Color(0x9090FA);
const uint CELERY400     = Color(0x44B556);
const uint CELERY500     = Color(0x4BC35F);
const uint CELERY600     = Color(0x51D267);
const uint CELERY700     = Color(0x58E06F);
const uint MAGENTA400    = Color(0xD83790);
const uint MAGENTA500    = Color(0xE2499D);
const uint MAGENTA600    = Color(0xEC5AAA);
const uint MAGENTA700    = Color(0xF56BB7);
const uint YELLOW400     = Color(0xDFBF00);
const uint YELLOW500     = Color(0xEDCC00);
const uint YELLOW600     = Color(0xFAD900);
const uint YELLOW700     = Color(0xFFE22E);
const uint FUCHSIA400    = Color(0xC038CC);
const uint FUCHSIA500    = Color(0xCF3EDC);
const uint FUCHSIA600    = Color(0xD951E5);
const uint FUCHSIA700    = Color(0xE366EF);
const uint SEAFOAM400    = Color(0x1B959A);
const uint SEAFOAM500    = Color(0x20A3A8);
const uint SEAFOAM600    = Color(0x23B2B8);
const uint SEAFOAM700    = Color(0x26C0C7);
const uint CHARTREUSE400 = Color(0x85D044);
const uint CHARTREUSE500 = Color(0x8EDE49);
const uint CHARTREUSE600 = Color(0x9BEC54);
const uint CHARTREUSE700 = Color(0xA3F858);
const uint PURPLE400     = Color(0x9256D9);
const uint PURPLE500     = Color(0x9D64E1);
const uint PURPLE600     = Color(0xA873E9);
const uint PURPLE700     = Color(0xB483F0);
} // namespace Dark
} // namespace Spectrum

void setImguiStyleSpectrum(SpectrumStyle st) {
    auto& style             = ImGui::GetStyle();
    style.WindowBorderSize  = 1.0f;
    style.ChildBorderSize   = 1.0f;
    style.PopupBorderSize   = 1.0f;
    style.FrameBorderSize   = 1.0f;
    style.TabBorderSize     = 1.0f;
    style.WindowRounding    = 8.0f;
    style.TabRounding       = 6.0f;
    style.ChildRounding     = 6.0f;
    style.PopupRounding     = 6.0f;
    style.FrameRounding     = 4.0f;
    style.ScrollbarRounding = 4.0f;
    style.GrabRounding      = 4.0f;

    auto& colors = style.Colors;

    using ImGui::ColorConvertU32ToFloat4;
    using namespace Spectrum;

    colors[ImGuiCol_BorderShadow]          = ColorConvertU32ToFloat4(Static::NONE); // We don't want shadows. Ever.
    colors[ImGuiCol_ChildBg]               = ColorConvertU32ToFloat4(Static::NONE);
    colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg]     = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg]      = ImVec4(0.20f, 0.20f, 0.20f, 0.35f);
    colors[ImGuiCol_DragDropTarget]        = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);

    if (st == SpectrumStyle::Light) {
        using namespace Light;

        colors[ImGuiCol_Text]         = ColorConvertU32ToFloat4(GRAY800); // text on hovered controls is gray900
        colors[ImGuiCol_TextDisabled] = ColorConvertU32ToFloat4(GRAY500);
        colors[ImGuiCol_WindowBg]     = ColorConvertU32ToFloat4(GRAY100);
        colors[ImGuiCol_PopupBg] =
            ColorConvertU32ToFloat4(GRAY50); // not sure about this. Note: applies to tooltips too.
        colors[ImGuiCol_Border] = ColorConvertU32ToFloat4(GRAY300);
        colors[ImGuiCol_FrameBg] =
            ColorConvertU32ToFloat4(GRAY75); // this isnt right, spectrum does not do this, but it's a good fallback
        colors[ImGuiCol_FrameBgHovered] = ColorConvertU32ToFloat4(GRAY50);
        colors[ImGuiCol_FrameBgActive]  = ColorConvertU32ToFloat4(GRAY200);
        colors[ImGuiCol_TitleBg] =
            ColorConvertU32ToFloat4(GRAY300); // those titlebar values are totally made up, spectrum does not have this.
        colors[ImGuiCol_TitleBgActive]        = ColorConvertU32ToFloat4(GRAY200);
        colors[ImGuiCol_TitleBgCollapsed]     = ColorConvertU32ToFloat4(GRAY400);
        colors[ImGuiCol_MenuBarBg]            = ColorConvertU32ToFloat4(GRAY100);
        colors[ImGuiCol_ScrollbarBg]          = ColorConvertU32ToFloat4(GRAY100); // same as regular background
        colors[ImGuiCol_ScrollbarGrab]        = ColorConvertU32ToFloat4(GRAY400);
        colors[ImGuiCol_ScrollbarGrabHovered] = ColorConvertU32ToFloat4(GRAY600);
        colors[ImGuiCol_ScrollbarGrabActive]  = ColorConvertU32ToFloat4(GRAY700);
        colors[ImGuiCol_CheckMark]            = ColorConvertU32ToFloat4(BLUE500);
        colors[ImGuiCol_SliderGrab]           = ColorConvertU32ToFloat4(GRAY700);
        colors[ImGuiCol_SliderGrabActive]     = ColorConvertU32ToFloat4(GRAY800);
        colors[ImGuiCol_Button] =
            ColorConvertU32ToFloat4(GRAY75); // match default button to Spectrum's 'Action Button'.
        colors[ImGuiCol_ButtonHovered]        = ColorConvertU32ToFloat4(GRAY50);
        colors[ImGuiCol_ButtonActive]         = ColorConvertU32ToFloat4(GRAY200);
        colors[ImGuiCol_Header]               = ColorConvertU32ToFloat4(BLUE400);
        colors[ImGuiCol_HeaderHovered]        = ColorConvertU32ToFloat4(BLUE500);
        colors[ImGuiCol_HeaderActive]         = ColorConvertU32ToFloat4(BLUE600);
        colors[ImGuiCol_Separator]            = ColorConvertU32ToFloat4(GRAY400);
        colors[ImGuiCol_SeparatorHovered]     = ColorConvertU32ToFloat4(GRAY600);
        colors[ImGuiCol_SeparatorActive]      = ColorConvertU32ToFloat4(GRAY700);
        colors[ImGuiCol_ResizeGrip]           = ColorConvertU32ToFloat4(GRAY400);
        colors[ImGuiCol_ResizeGripHovered]    = ColorConvertU32ToFloat4(GRAY600);
        colors[ImGuiCol_ResizeGripActive]     = ColorConvertU32ToFloat4(GRAY700);
        colors[ImGuiCol_PlotLines]            = ColorConvertU32ToFloat4(BLUE400);
        colors[ImGuiCol_PlotLinesHovered]     = ColorConvertU32ToFloat4(BLUE600);
        colors[ImGuiCol_PlotHistogram]        = ColorConvertU32ToFloat4(BLUE400);
        colors[ImGuiCol_PlotHistogramHovered] = ColorConvertU32ToFloat4(BLUE600);
        colors[ImGuiCol_TextSelectedBg]       = ColorConvertU32ToFloat4((BLUE400 & 0x00FFFFFF) | 0x33000000);
        colors[ImGuiCol_NavHighlight]         = ColorConvertU32ToFloat4((GRAY900 & 0x00FFFFFF) | 0x0A000000);
    } else {
        using namespace Dark;

        colors[ImGuiCol_Text]         = ColorConvertU32ToFloat4(GRAY800); // text on hovered controls is gray900
        colors[ImGuiCol_TextDisabled] = ColorConvertU32ToFloat4(GRAY500);
        colors[ImGuiCol_WindowBg]     = ColorConvertU32ToFloat4(GRAY100);
        colors[ImGuiCol_PopupBg] =
            ColorConvertU32ToFloat4(GRAY50); // not sure about this. Note: applies to tooltips too.
        colors[ImGuiCol_Border] = ColorConvertU32ToFloat4(GRAY300);
        colors[ImGuiCol_FrameBg] =
            ColorConvertU32ToFloat4(GRAY75); // this isnt right, spectrum does not do this, but it's a good fallback
        colors[ImGuiCol_FrameBgHovered] = ColorConvertU32ToFloat4(GRAY50);
        colors[ImGuiCol_FrameBgActive]  = ColorConvertU32ToFloat4(GRAY200);
        colors[ImGuiCol_TitleBg] =
            ColorConvertU32ToFloat4(GRAY300); // those titlebar values are totally made up, spectrum does not have this.
        colors[ImGuiCol_TitleBgActive]        = ColorConvertU32ToFloat4(GRAY200);
        colors[ImGuiCol_TitleBgCollapsed]     = ColorConvertU32ToFloat4(GRAY400);
        colors[ImGuiCol_MenuBarBg]            = ColorConvertU32ToFloat4(GRAY100);
        colors[ImGuiCol_ScrollbarBg]          = ColorConvertU32ToFloat4(GRAY100); // same as regular background
        colors[ImGuiCol_ScrollbarGrab]        = ColorConvertU32ToFloat4(GRAY400);
        colors[ImGuiCol_ScrollbarGrabHovered] = ColorConvertU32ToFloat4(GRAY600);
        colors[ImGuiCol_ScrollbarGrabActive]  = ColorConvertU32ToFloat4(GRAY700);
        colors[ImGuiCol_CheckMark]            = ColorConvertU32ToFloat4(BLUE500);
        colors[ImGuiCol_SliderGrab]           = ColorConvertU32ToFloat4(GRAY700);
        colors[ImGuiCol_SliderGrabActive]     = ColorConvertU32ToFloat4(GRAY800);
        colors[ImGuiCol_Button] =
            ColorConvertU32ToFloat4(GRAY75); // match default button to Spectrum's 'Action Button'.
        colors[ImGuiCol_ButtonHovered]        = ColorConvertU32ToFloat4(GRAY50);
        colors[ImGuiCol_ButtonActive]         = ColorConvertU32ToFloat4(GRAY200);
        colors[ImGuiCol_Header]               = ColorConvertU32ToFloat4(BLUE400);
        colors[ImGuiCol_HeaderHovered]        = ColorConvertU32ToFloat4(BLUE500);
        colors[ImGuiCol_HeaderActive]         = ColorConvertU32ToFloat4(BLUE600);
        colors[ImGuiCol_Separator]            = ColorConvertU32ToFloat4(GRAY400);
        colors[ImGuiCol_SeparatorHovered]     = ColorConvertU32ToFloat4(GRAY600);
        colors[ImGuiCol_SeparatorActive]      = ColorConvertU32ToFloat4(GRAY700);
        colors[ImGuiCol_ResizeGrip]           = ColorConvertU32ToFloat4(GRAY400);
        colors[ImGuiCol_ResizeGripHovered]    = ColorConvertU32ToFloat4(GRAY600);
        colors[ImGuiCol_ResizeGripActive]     = ColorConvertU32ToFloat4(GRAY700);
        colors[ImGuiCol_PlotLines]            = ColorConvertU32ToFloat4(BLUE400);
        colors[ImGuiCol_PlotLinesHovered]     = ColorConvertU32ToFloat4(BLUE600);
        colors[ImGuiCol_PlotHistogram]        = ColorConvertU32ToFloat4(BLUE400);
        colors[ImGuiCol_PlotHistogramHovered] = ColorConvertU32ToFloat4(BLUE600);
        colors[ImGuiCol_TextSelectedBg]       = ColorConvertU32ToFloat4((BLUE400 & 0x00FFFFFF) | 0x33000000);
        colors[ImGuiCol_NavHighlight]         = ColorConvertU32ToFloat4((GRAY900 & 0x00FFFFFF) | 0x0A000000);
    }
}
} // namespace ll::gui
