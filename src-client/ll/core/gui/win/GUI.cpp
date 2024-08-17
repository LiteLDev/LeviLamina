#include "ll/core/gui/GUI.h"

#include <cstring>
#include <string>
#include <vector>

#include "dwrite.h"
#include "windows.h"
#include "wingdi.h"
#include "winuser.h"

#include "atlbase.h"

#include "imgui.h"

#include "ll/core/gui/ImGuiAnsiColor.h"
#include "ll/core/gui/ImGuiHooks.h"
#include "ll/api/utils/FontUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/gui/ImguiConfig.h"
#include "ll/core/gui/styles/ImguiSpectrum.h"
#include "ll/core/io/LogPipe.h"

namespace ll::gui {
class LogWindow {
    std::string      title;
    bool             open = false;
    ImGuiTextBuffer  buf;
    ImGuiTextFilter  filter;
    std::vector<int> lineOffsets;
    bool             autoScroll = true;

public:
    LogWindow(const std::string& title) : title(title) { clear(); }

    void clear() {
        buf.clear();
        lineOffsets.clear();
        lineOffsets.push_back(0);
    }

    void addLog(const std::string& log) {
        if (log.empty()) {
            return;
        }
        int oldSize = buf.size();
        buf.append(log.c_str());
        for (int newSize = buf.size(); oldSize < newSize; oldSize++) {
            if (buf[oldSize] == '\n') {
                lineOffsets.push_back(oldSize + 1);
            }
        }
    }

    void draw() {
        if (!open) {
            return;
        }

        if (!ImGui::Begin(title.c_str(), &open)) {
            ImGui::End();
            return;
        }

        bool clear = ImGui::Button("Clear");
        ImGui::SameLine();
        bool copy = ImGui::Button("Copy");
        ImGui::SameLine();
        ImGui::Checkbox("Auto-scroll", &autoScroll);
        ImGui::SameLine();
        filter.Draw("Filter", -100.0f);

        ImGui::Separator();

        if (ImGui::BeginChild("scrolling", ImVec2(0, 0), false, ImGuiWindowFlags_HorizontalScrollbar)) {
            if (clear) {
                this->clear();
            }
            if (copy) {
                ImGui::LogToClipboard();
            }
            ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0, 0));
            const char* bufBegin = this->buf.begin();
            const char* bufEnd   = this->buf.end();
            if (filter.IsActive()) {
                // Don't use the clipper when Filter is enabled because we don't have random access
                // to the result of the filter
                for (int lineNum = 0; lineNum < lineOffsets.size(); lineNum++) {
                    const char* lineStart = bufBegin + lineOffsets[lineNum];
                    const char* lineEnd =
                        (lineNum + 1 < lineOffsets.size()) ? (bufBegin + lineOffsets[lineNum + 1] - 1) : bufEnd;
                    if (filter.PassFilter(lineStart, lineEnd)) {
                        textAnsiUnformatted(lineStart, lineEnd);
                    }
                }
            } else {
                // Use ImGuiListClipper for better performance
                ImGuiListClipper clipper;
                clipper.Begin((int)lineOffsets.size());
                while (clipper.Step()) {
                    for (int lineNum = clipper.DisplayStart; lineNum < clipper.DisplayEnd; lineNum++) {
                        const char* lineStart = bufBegin + lineOffsets[lineNum];
                        const char* lineEnd =
                            (lineNum + 1 < lineOffsets.size()) ? (bufBegin + lineOffsets[lineNum + 1] - 1) : bufEnd;
                        textAnsiUnformatted(lineStart, lineEnd);
                    }
                }
                clipper.End();
            }
            ImGui::PopStyleVar();

            if (autoScroll && ImGui::GetScrollY() >= ImGui::GetScrollMaxY()) {
                ImGui::SetScrollHereY(1.0f);
            }
        }
        ImGui::EndChild();
        ImGui::End();
    }

    bool isOpen() const { return open; }

    void setOpen(bool b) { this->open = b; }
};

static LogWindow logWindow("Log");

void initializeImGui() {
    ImGui::CreateContext();

    ImGuiIO& io    = ImGui::GetIO();
    io.IniFilename = nullptr;

    io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
    
    // io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;
    // io.BackendFlags |= ImGuiBackendFlags_PlatformHasViewports;
    // io.BackendFlags |= ImGuiBackendFlags_HasMouseHoveredViewport;
    // io.BackendFlags |= ImGuiBackendFlags_RendererHasViewports;

    logWindow.setOpen(true);
}

void updateImGui() {
    static bool showPerformance = true;
    static bool showDemo        = true;

    logWindow.addLog(io::getDefaultLogPipe().read());

    auto& io = ImGui::GetIO();
    ImGui::NewFrame();
    if (showPerformance) {
        ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_FirstUseEver);
        if (ImGui::Begin("Performance", &showPerformance)) {
            static float framerate    = io.Framerate;
            static float deltaTime    = io.DeltaTime;
            static float updateTimer  = 0.5f;
            updateTimer              -= io.DeltaTime;
            if (updateTimer <= 0) {
                framerate   = io.Framerate;
                deltaTime   = io.DeltaTime;
                updateTimer = 0.5f;
            }
            ImGui::Text("Renderer: %s", getRendererType().c_str());
            ImGui::Text("Renderer Name: %s", getGPUName().c_str());
            ImGui::Text("FPS: %.01f", framerate);
            ImGui::Text("Frame Time: %.01fms", deltaTime * 1000.0f);
        }
    }

    if (logWindow.isOpen()) {
        ImGui::SetNextWindowPos(ImVec2(10, 200), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(860, 480), ImGuiCond_FirstUseEver);
        logWindow.draw();
    }

    if (showDemo) {
        ImGui::ShowDemoWindow(&showDemo);
    }
    ImGui::EndFrame();
}

void updateScaling(float dpi) {
    float scale = dpi / 96.0f;

    getLeviImguiConfig().style.applyToImgui();

    ImGuiStyle& style = ImGui::GetStyle();

    style.ScaleAllSizes(scale);

    updateFonts(scale);
}

void updateFonts(float scale) {
    using namespace font_utils;
    ImGuiIO& io = ImGui::GetIO();
    io.Fonts->Clear();
    auto& settings = getLeviImguiConfig().fontSettings;
    auto  size     = settings.size;
    auto& fonts    = settings.fonts;
    if (fonts.empty()) {
        ImFontConfig fontCfg;
        fontCfg.SizePixels        = size * scale;
        fontCfg.RasterizerDensity = scale;
        io.Fonts->AddFontDefault(&fontCfg);
        return;
    }
    bool first = true;
    for (auto& font : fonts) {
        ImFontConfig config;
        config.MergeMode         = true;
        config.SizePixels        = size * scale;
        config.RasterizerDensity = scale;
        switch (font.range) {
        case LeviImguiConfig::Font::GlyphRange::Greek:
            config.GlyphRanges = io.Fonts->GetGlyphRangesGreek();
            break;
        case LeviImguiConfig::Font::GlyphRange::Korean:
            config.GlyphRanges = io.Fonts->GetGlyphRangesKorean();
            break;
        case LeviImguiConfig::Font::GlyphRange::Japanese:
            config.GlyphRanges = io.Fonts->GetGlyphRangesJapanese();
            break;
        case LeviImguiConfig::Font::GlyphRange::ChineseFull:
            config.GlyphRanges = io.Fonts->GetGlyphRangesChineseFull();
            break;
        case LeviImguiConfig::Font::GlyphRange::ChineseSimplifiedCommon:
            config.GlyphRanges = io.Fonts->GetGlyphRangesChineseSimplifiedCommon();
            break;
        case LeviImguiConfig::Font::GlyphRange::Cyrillic:
            config.GlyphRanges = io.Fonts->GetGlyphRangesCyrillic();
            break;
        case LeviImguiConfig::Font::GlyphRange::Thai:
            config.GlyphRanges = io.Fonts->GetGlyphRangesThai();
            break;
        case LeviImguiConfig::Font::GlyphRange::Vietnamese:
            config.GlyphRanges = io.Fonts->GetGlyphRangesVietnamese();
            break;
        default:
            config.GlyphRanges = io.Fonts->GetGlyphRangesDefault();
        }
        if (font.width) {
            if (*font.width == LeviImguiConfig::Font::Width::Half) {
                config.GlyphMaxAdvanceX = config.SizePixels * 0.5f;
                config.GlyphMinAdvanceX = config.SizePixels * 0.5f;
            } else if (*font.width == LeviImguiConfig::Font::Width::Full) {
                config.GlyphMaxAdvanceX = config.SizePixels;
                config.GlyphMinAdvanceX = config.SizePixels;
            }
        }
        if (first) {
            first            = false;
            config.MergeMode = false;
        }
        if (font.name == "default") {
            io.Fonts->AddFontDefault(&config);
        } else {
            std::optional<std::string> name;
            if (font.name == "system") {
                name = getSystemDefaultFontName();
            } else {
                name = font.name;
            }
            if (name) {
                auto paths =
                    getFilePathFromFontName(*name, (uint&)config.FontNo, font.weight, font.stretch, font.style);
                if (!paths.empty())
                    io.Fonts->AddFontFromFileTTF(
                        (char const*)(paths.front().u8string().c_str()),
                        config.SizePixels,
                        &config,
                        config.GlyphRanges
                    );
            }
        }
    }
}
} // namespace ll::gui
