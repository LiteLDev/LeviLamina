#include "GUI.h"

#include <memory>
#include <string>
#include <vector>

#include "imgui.h"
#include "imgui_internal.h"

#include "ImGuiHooks.h"

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
                // Don't use the clipper when Filter is enabled because we don't have random access to the result of the
                // filter
                for (int lineNum = 0; lineNum < lineOffsets.size(); lineNum++) {
                    const char* lineStart = bufBegin + lineOffsets[lineNum];
                    const char* lineEnd =
                        (lineNum + 1 < lineOffsets.size()) ? (bufBegin + lineOffsets[lineNum + 1] - 1) : bufEnd;
                    if (filter.PassFilter(lineStart, lineEnd)) {
                        ImGui::TextUnformatted(lineStart, lineEnd);
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
                        ImGui::TextUnformatted(lineStart, lineEnd);
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

    logWindow.setOpen(true);
}

void updateImGui() {
    static bool showPerformance = true;
    static bool showLog         = true;
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

    ImGui::SetNextWindowPos(ImVec2(10, 200), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(860, 480), ImGuiCond_FirstUseEver);
    logWindow.draw();

    if (showDemo) {
        ImGui::ShowDemoWindow(&showDemo);
    }
    ImGui::EndFrame();
}

void updateScaling(float dpi) {
    float    scale = dpi / 96.0f;
    ImGuiIO& io    = ImGui::GetIO();

    ImGuiStyle& style       = ImGui::GetStyle();
    ImGuiStyle  styleold    = style;
    style                   = ImGuiStyle();
    style.WindowBorderSize  = 1.0f;
    style.ChildBorderSize   = 1.0f;
    style.PopupBorderSize   = 1.0f;
    style.FrameBorderSize   = 1.0f;
    style.TabBorderSize     = 1.0f;
    style.WindowRounding    = 0.0f;
    style.ChildRounding     = 0.0f;
    style.PopupRounding     = 0.0f;
    style.FrameRounding     = 0.0f;
    style.ScrollbarRounding = 0.0f;
    style.GrabRounding      = 0.0f;
    style.TabRounding       = 0.0f;
    style.ScaleAllSizes(scale);
    memcpy(style.Colors, styleold.Colors, sizeof(style.Colors));

    io.Fonts->Clear();
    ImFontConfig fontCfg;
    fontCfg.SizePixels = 13.0f * scale;
    io.Fonts->AddFontDefault(&fontCfg);
}
} // namespace ll::gui